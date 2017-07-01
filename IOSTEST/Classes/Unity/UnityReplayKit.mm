#if UNITY_REPLAY_KIT_AVAILABLE

#import "UnityReplayKit.h"
#import "UnityAppController.h"
#import "UnityInterface.h"
#import <UIKit/UIKit.h>

extern "C" void UnityReplayKitTriggerBroadcastStatusCallback(void* callback, bool hasSucceeded, const char* errorMessage);

static UnityReplayKit* _replayKit = nil;

@protocol UnityReplayKit_RPScreenRecorder<NSObject>

- (void)setMicrophoneEnabled:(BOOL)value;
- (BOOL)isMicrophoneEnabled;
- (void)setCameraEnabled:(BOOL)value;
- (BOOL)isCameraEnabled;

@property (nonatomic, setter = setMicrophoneEnabled:, getter = isMicrophoneEnabled) BOOL microphoneEnabled;
@property (nonatomic, setter = setCameraEnabled:, getter = isCameraEnabled) BOOL cameraEnabled;
@property (nonatomic, readonly) UIView* cameraPreviewView;

@end

@protocol UnityReplayKit_RPBroadcastController<NSObject>

@property(nonatomic, readonly) NSURL *broadcastURL;
@property(nonatomic, readonly, getter = isBroadcasting) BOOL broadcasting;
@property(nonatomic, readonly) NSString *broadcastExtensionBundleID;
//@property(nonatomic, weak) id<RPBroadcastControllerDelegate> delegate;
@property(nonatomic, readonly, getter = isPaused) BOOL paused;
@property(nonatomic, readonly) NSDictionary<NSString *, NSObject<NSCoding> *> *serviceInfo;

- (BOOL)isBroadcasting;
- (void)finishBroadcastWithHandler:(void (^)(NSError *error))handler;
- (void)startBroadcastWithHandler:(void (^)(NSError *error))handler;
- (void)pauseBroadcast;
- (void)resumeBroadcast;

@end

@interface UnityReplayKit_RPBroadcastActivityViewController : UIViewController<NSObject>

@property (nonatomic, weak) id delegate;

@end


@implementation UnityReplayKit
{
    id<UnityReplayKit_RPBroadcastController> broadcastController;
    void* broadcastStartStatusCallback;
    UIView* currentCameraPreviewView;

    // if that looks hacky it is because it is: broadcasting will disable top-window autorotation
    // to still allow autorotation (users keep asking that) we create fake empty window so that its autorotation is disabled
    UIWindow* overlayWindow;
}

+ (UnityReplayKit*)sharedInstance
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _replayKit = [[UnityReplayKit alloc] init];
    });
    return _replayKit;
}

- (BOOL)apiAvailable
{
    return ([RPScreenRecorder class] != nil) && [RPScreenRecorder sharedRecorder].isAvailable;
}

- (BOOL)recordingPreviewAvailable
{
    return _previewController != nil;
}

- (BOOL)startRecording:(BOOL)enableMicrophone
{
    RPScreenRecorder* recorder = [RPScreenRecorder sharedRecorder];
    if (recorder == nil)
    {
        _lastError = [NSString stringWithUTF8String: "Failed to get Screen Recorder"];
        return NO;
    }

    recorder.delegate = self;
    __block BOOL success = YES;
    [recorder startRecordingWithMicrophoneEnabled: enableMicrophone handler:^(NSError* error) {
        if (error != nil)
        {
            _lastError = [error description];
            success = NO;
        }
    }];

    return success;
}

- (BOOL)isRecording
{
    RPScreenRecorder* recorder = [RPScreenRecorder sharedRecorder];
    if (recorder == nil)
    {
        _lastError = [NSString stringWithUTF8String: "Failed to get Screen Recorder"];
        return NO;
    }
    return recorder.isRecording;
}

- (BOOL)stopRecording
{
    RPScreenRecorder* recorder = [RPScreenRecorder sharedRecorder];
    if (recorder == nil)
    {
        _lastError = [NSString stringWithUTF8String: "Failed to get Screen Recorder"];
        return NO;
    }

    __block BOOL success = YES;
    [recorder stopRecordingWithHandler:^(RPPreviewViewController* previewViewController, NSError* error) {
        if (error != nil)
        {
            _lastError = [error description];
            success = NO;
            return;
        }
        if (previewViewController != nil)
        {
            [previewViewController setPreviewControllerDelegate: self];
            _previewController = previewViewController;
        }
    }];

    return success;
}

- (void)screenRecorder:(RPScreenRecorder*)screenRecorder didStopRecordingWithError:(NSError*)error previewViewController:(RPPreviewViewController*)previewViewController
{
    if (error != nil)
    {
        _lastError = [error description];
    }
    _previewController = previewViewController;
}

- (BOOL)showPreview
{
    if (_previewController == nil)
    {
        _lastError = [NSString stringWithUTF8String: "No recording available"];
        return NO;
    }

    [_previewController setModalPresentationStyle: UIModalPresentationFullScreen];
    [GetAppController().rootViewController presentViewController: _previewController animated: YES completion:^()
    {
        _previewController = nil;
    }];
    return YES;
}

- (BOOL)discardPreview
{
    if (_previewController == nil)
    {
        return YES;
    }

    RPScreenRecorder* recorder = [RPScreenRecorder sharedRecorder];
    if (recorder == nil)
    {
        _lastError = [NSString stringWithUTF8String: "Failed to get Screen Recorder"];
        return NO;
    }

    [recorder discardRecordingWithHandler:^()
    {
        _previewController = nil;
    }];
    // TODO - the above callback doesn't seem to be working at the moment.
    _previewController = nil;

    return YES;
}

- (void)previewControllerDidFinish:(RPPreviewViewController*)previewController
{
    if (previewController != nil)
    {
        [previewController dismissViewControllerAnimated: YES completion: nil];
    }
}

/****************************************
 *   ReplayKit Broadcasting API         *
 ****************************************/

- (BOOL)broadcastingApiAvailable
{
    return nil != NSClassFromString(@"RPBroadcastController")
        && nil != NSClassFromString(@"RPBroadcastActivityViewController");
}

- (NSURL*)broadcastURL
{
    if (broadcastController == nil)
    {
        return nil;
    }
    return [broadcastController broadcastURL];
}

- (BOOL)isBroadcasting
{
    if (broadcastController == nil)
    {
        return NO;
    }
    return [broadcastController isBroadcasting];
}

- (void)broadcastActivityViewController:(UnityReplayKit_RPBroadcastActivityViewController *)sBroadcastActivityViewController
    didFinishWithBroadcastController:(id<UnityReplayKit_RPBroadcastController>)sBroadcastController
    error:(NSError *)error
{
    dispatch_sync(dispatch_get_main_queue(), ^{
        UnityPause(0);
    });

    if (sBroadcastController == nil)
    {
        _lastError = [error description];
        UnityReplayKitTriggerBroadcastStatusCallback(broadcastStartStatusCallback, false, [_lastError UTF8String]);
        broadcastStartStatusCallback = nullptr;
        [UnityGetGLViewController() dismissViewControllerAnimated: YES completion: nil];
        return;
    }

    broadcastController = sBroadcastController;
    [UnityGetGLViewController() dismissViewControllerAnimated: YES completion:^
    {
        [broadcastController startBroadcastWithHandler:^(NSError* error)
        {
            if (error != nil)
            {
                _lastError = [error description];
                UnityReplayKitTriggerBroadcastStatusCallback(broadcastStartStatusCallback, false, [_lastError UTF8String]);
                broadcastStartStatusCallback = nullptr;
                broadcastController = nil;
                return;
            }
            UnityReplayKitTriggerBroadcastStatusCallback(broadcastStartStatusCallback, true, "");
            broadcastStartStatusCallback = nullptr;
            _lastError = nil;
        }];
    }];
}

- (void)startBroadcastingWithCallback:(void *)callback
{
    Class class_BroadcastActivityViewController = NSClassFromString(@"RPBroadcastActivityViewController");

    if (class_BroadcastActivityViewController == nil)
    {
        return;
    }

    if (broadcastController != nil && broadcastController.broadcasting)
    {
        _lastError = @"Broadcast already in progress";
        UnityReplayKitTriggerBroadcastStatusCallback(callback, false, [_lastError UTF8String]);
        return;
    }

    if (broadcastStartStatusCallback != nullptr)
    {
        _lastError = @"The last attempt to start a broadcast didn\'t finish yet.";
        UnityReplayKitTriggerBroadcastStatusCallback(callback, false, [_lastError UTF8String]);
        return;
    }

    [class_BroadcastActivityViewController performSelector: @selector(loadBroadcastActivityViewControllerWithHandler:) withObject:^(UnityReplayKit_RPBroadcastActivityViewController* sBroadcastActivityViewController, NSError* error)
    {
        if (sBroadcastActivityViewController == nil || error != nil)
        {
            _lastError = [error description];
            UnityReplayKitTriggerBroadcastStatusCallback(callback, false, [_lastError UTF8String]);
            return;
        }

        UIViewController* rootViewController = [[UIViewController alloc] init];
        self->overlayWindow = [[UIWindow alloc] initWithFrame: [UIScreen mainScreen].bounds];
        self->overlayWindow.hidden = NO;
        self->overlayWindow.userInteractionEnabled = NO;
        self->overlayWindow.backgroundColor = nil;
        self->overlayWindow.rootViewController = rootViewController;

        UnityPause(1);
        sBroadcastActivityViewController.delegate = self;
        broadcastStartStatusCallback = callback;
        sBroadcastActivityViewController.modalPresentationStyle = [UIDevice currentDevice].userInterfaceIdiom == UIUserInterfaceIdiomPad ? UIModalPresentationFormSheet : UIModalPresentationPopover;
        [UnityGetGLViewController() presentViewController: sBroadcastActivityViewController animated: YES completion: nil];
    }];
    return;
}

- (void)stopBroadcasting
{
    if (broadcastController == nil)
    {
        return;
    }

    if (!broadcastController.broadcasting)
    {
        broadcastController = nil;
        return;
    }

    [broadcastController finishBroadcastWithHandler:^(NSError* error)
    {
        broadcastController = nil;
        if (error == nil)
        {
            return;
        }
        _lastError = [error description];
    }];
}

- (BOOL)isCameraEnabled
{
    if (![self apiAvailable])
    {
        return NO;
    }

    id<UnityReplayKit_RPScreenRecorder> screenRecorder = (id)[RPScreenRecorder sharedRecorder];
    if (![screenRecorder respondsToSelector: @selector(isCameraEnabled)])
    {
        return NO;
    }

    return screenRecorder.cameraEnabled;
}

- (void)setCameraEnabled:(BOOL)cameraEnabled
{
    if (![self apiAvailable])
    {
        return;
    }

    id<UnityReplayKit_RPScreenRecorder> screenRecorder = (id)[RPScreenRecorder sharedRecorder];
    if (![screenRecorder respondsToSelector: @selector(setCameraEnabled:)])
    {
        return;
    }

    screenRecorder.cameraEnabled = cameraEnabled;
}

- (BOOL)isMicrophoneEnabled
{
    if (![self apiAvailable])
    {
        return NO;
    }

    id<UnityReplayKit_RPScreenRecorder> screenRecorder = (id)[RPScreenRecorder sharedRecorder];
    if (![screenRecorder respondsToSelector: @selector(isMicrophoneEnabled)])
    {
        return NO;
    }

    return screenRecorder.microphoneEnabled;
}

- (void)setMicrophoneEnabled:(BOOL)microphoneEnabled
{
    if (![self apiAvailable])
    {
        return;
    }

    id<UnityReplayKit_RPScreenRecorder> screenRecorder = (id)[RPScreenRecorder sharedRecorder];
    if (![screenRecorder respondsToSelector: @selector(setMicrophoneEnabled:)])
    {
        return;
    }

    screenRecorder.microphoneEnabled = microphoneEnabled;
}

- (BOOL)showCameraPreviewAt:(CGPoint)position
{
    if (currentCameraPreviewView == nil)
    {
        if (![self apiAvailable])
        {
            return NO;
        }

        id<UnityReplayKit_RPScreenRecorder> screenRecorder = (id)[RPScreenRecorder sharedRecorder];
        UIView* cameraPreviewView = screenRecorder.cameraPreviewView;
        if (cameraPreviewView == nil)
        {
            return NO;
        }

        [[UnityGetGLViewController() view] addSubview: cameraPreviewView];
        currentCameraPreviewView = cameraPreviewView;
        [cameraPreviewView setUserInteractionEnabled: NO];
    }

    int width = currentCameraPreviewView.frame.size.width;
    int height = currentCameraPreviewView.frame.size.height;
    [currentCameraPreviewView setFrame: CGRectMake(position.x, position.y, width, height)];

    return YES;
}

- (void)hideCameraPreview
{
    if (currentCameraPreviewView != nil)
    {
        [currentCameraPreviewView removeFromSuperview];
        currentCameraPreviewView = nil;
    }
}

@end

#endif  // UNITY_REPLAY_KIT_AVAILABLE

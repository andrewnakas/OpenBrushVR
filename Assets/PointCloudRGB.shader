Shader "Tango/PointCloudRGB" {
	Properties{
		point_size("Point Size", Float) = 5.0
		_Color ("Main Color", Color) = (1,1,1,1)
	}
	SubShader {
		Color [_Color]
		Pass {
		GLSLPROGRAM

		#ifdef VERTEX

		uniform float point_size;
		varying vec4 v_color;

		void main()
		{   
			gl_PointSize = point_size;
			gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
			v_color = vec4(gl_Position.x, gl_Position.y, gl_Position.z, 1.0);
		}
		#endif

		#ifdef FRAGMENT

		varying vec4 v_color;

		void main()
		{
			gl_FragColor = v_color;
		}
		#endif

		ENDGLSL
		}
	}
}

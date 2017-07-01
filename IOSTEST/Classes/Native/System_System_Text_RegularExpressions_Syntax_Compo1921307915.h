#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Text_RegularExpressions_Syntax_Expres368137076.h"

// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t238836340;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CompositeExpression
struct  CompositeExpression_t1921307915  : public Expression_t368137076
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::expressions
	ExpressionCollection_t238836340 * ___expressions_0;

public:
	inline static int32_t get_offset_of_expressions_0() { return static_cast<int32_t>(offsetof(CompositeExpression_t1921307915, ___expressions_0)); }
	inline ExpressionCollection_t238836340 * get_expressions_0() const { return ___expressions_0; }
	inline ExpressionCollection_t238836340 ** get_address_of_expressions_0() { return &___expressions_0; }
	inline void set_expressions_0(ExpressionCollection_t238836340 * value)
	{
		___expressions_0 = value;
		Il2CppCodeGenWriteBarrier(&___expressions_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

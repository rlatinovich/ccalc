#include "ccalc.h"

int eval_postfix(char*);

int eval_postfix(char *s)
{
	stack stk;
	stk_init(&stk);

	int i, op1, op2;
	char ch;

	i = 0;
	while ( (ch = s[i++] ) != '\0' )
	{
		if (isdigit(ch))
			stk_push(&stk, (int) ch-'0');
		else
		{
			op2 = stk_pop(&stk);
			op1 = stk_pop(&stk);
			switch (ch)
			{
			case '+': stk_push(&stk, op1+op2); break;
			case '-': stk_push(&stk, op1-op2); break;
			case '*': stk_push(&stk, op1*op2); break;
			case '/': stk_push(&stk, op1/op2); break;
			}
		}

	}
	int r = stk_pop(&stk);
	return r;
}

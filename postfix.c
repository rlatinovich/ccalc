#include "ccalc.h"
#include <math.h>

int eval_postfix(char *s)
{
	stack stk;
	scanner sc;

	stk_init(&stk);
	scnr_init(&sc, s);

	while (scnr_hasnext(sc))
	{
		if (1 == scnr_hasnextint(sc))
			stk_push(&stk, scnr_nextint(&sc));
		else
		{
			int op1, op2;
			switch (scnr_next(&sc))
			{
			case '+':
				op2 = stk_pop(&stk);
				op1 = stk_pop(&stk);
				stk_push(&stk, op1+op2);
				break;
			case '-':
				op2 = stk_pop(&stk);
				op1 = stk_pop(&stk);
				stk_push(&stk, op1-op2);
				break;
			case '*':
				op2 = stk_pop(&stk);
				op1 = stk_pop(&stk);
				stk_push(&stk, op1 * op2);
				break;
			case '/':
				op2 = stk_pop(&stk);
				op1 = stk_pop(&stk);
				stk_push(&stk, op1 / op2);
				break;
			case '%':
				op2 = stk_pop(&stk);
				op1 = stk_pop(&stk);
				stk_push(&stk, op1 % op2);
				break;
			case '^':
				op2 = stk_pop(&stk);
				op1 = stk_pop(&stk);
				stk_push(&stk, (int) pow((double)op1, 
							(double)op2));
				break;
			}
		}
	}
	return stk_pop(&stk);
}

#include "ccalc.h"

char* getstring(int);

int main()
{
	int i;

	printf("\n=== STACK TESTCASES ===\n");
	stack stk;
	stk_init(&stk);

	stk_print(stk);
	stk_push(&stk, 10);
	stk_push(&stk, 69);
	stk_push(&stk, 96);
	stk_print(stk);

	printf("peek(): %d\n", stk_peek(stk));

	for (i = 0; i < 2; i++)
		printf("pop(): 	%d\n", stk_pop(&stk));
	printf("\n=== END OF STACK TESTCASE ===\n");

	printf("\n=== RPC TESTCASE ===\n");
	char *p = "123++";
	printf("%s = %d\n", p, eval_postfix(p));
	printf("\n=== END OF RPC TESTCASE ===\n");
	return 0;
}

char* getstring(int smax)
{
	char *s, c;
	s = (char*) malloc(smax+1);
	int offset = 0;
	while ((c = getchar()) != 0x0A && offset < smax)
	{
		*(s + offset) = c;
		offset++;		
	}
	*(s + offset) = '\0';
	return s;
}

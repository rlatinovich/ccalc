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

	
	printf("\n=== SCANNER TESTCASES ===\n");

	struct scanner sc;
	char *s = "Hello 69, World!";

	scnr_init(&sc, s);
	
	printf("string: 	%s\n", s);
	printf("hasnext(): 	%d\n", scnr_hasnext(sc));
	printf("next(): 	%c\n", (char)scnr_next(&sc));	
	printf("next(): 	%c\n", (char)scnr_next(&sc));
	printf("hasnextint(): 	%d\n", scnr_hasnextint(sc));
	printf("nextint():	%d\n", scnr_nextint(&sc));
	printf("next():		%c\n", (char)scnr_next(&sc));
	printf("next():		%c\n", (char)scnr_next(&sc));
	printf("next():		%c\n", (char)scnr_next(&sc));
	printf("\n=== END OF SCANNER TESTCASE ===\n");


	printf("\n=== RPC TESTCASE ===\n");
	char *p = "1 2 3 + +";
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

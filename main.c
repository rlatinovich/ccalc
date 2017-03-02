#include "ccalc.h"

char* getstring(int);

int main()
{
	stack stk;
	stk_init(&stk);

	stk_print(stk);
	stk_push(&stk, 10);
	stk_push(&stk, 69);
	stk_push(&stk, 96);
	stk_print(stk);

	printf("peek(): %d\n", stk_peek(stk));

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

#include "ccalc.h"

char* getstring(int);

int main()
{
	char *s;
	s = getstring(50);
	while (0 != strcmp(s, "exit"))
	{
		printf("%d\n", eval_postfix(s));
		s = getstring(50);
	}
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

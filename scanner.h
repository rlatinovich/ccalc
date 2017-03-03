#ifndef _SCANNER_H_
#define _SCANNER_H_

struct scanner
{
	int index;
	char *s;
};

void scnr_init(struct scanner*, char*);
int scnr_hasnext(struct scanner);
int scnr_next(struct scanner*);
int scnr_nextint(struct scanner*);
int scnr_nextchar(struct scanner*);
int scnr_free(struct scanner*);

#endif

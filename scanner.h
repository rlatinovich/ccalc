#ifndef _SCANNER_H_
#define _SCANNER_H_

struct scanner
{
	int index;
	int length;
	char *s;
};

void scnr_init(struct scanner*, char*);
int scnr_hasnext(struct scanner);
int scnr_next(struct scanner*);
int scnr_hasnextint(struct scanner);
int scnr_nextint(struct scanner*);

#endif

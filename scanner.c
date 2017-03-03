#include "ccalc.h"

void scnr_init(struct scanner *sc, char *m)
{
	sc->index = 0;
	sc->length = strlen(m);
	sc->s = m;
}

int scnr_hasnext(struct scanner sc)
{
	return (sc.index >= sc.length) ? 0 : 1;
}

int scnr_next(struct scanner *sc)
{
	if (scnr_hasnext(*sc))
		return sc->s[sc->index++];
	return 0;
}

int scnr_hasnextint(struct scanner sc)
{
	return (isdigit(sc.s[sc.index])) ? 1 : 0;
}

int scnr_nextint(struct scanner *sc)
{
	if (0 == scnr_hasnextint(*sc))
		return -1;
	int i = 0;
	int state = 0;
	char cnum[10];
	for (sc->index = sc->index; sc->index < sc->length; sc->index++)
	{
		if (0 == state)
		{
			if (isdigit(sc->s[sc->index]))
			{
				state = 1;
				sc->index--;
			}
		} else
		{
			if (isdigit(sc->s[sc->index]))
			{
				cnum[i++] = sc->s[sc->index];
			} else 
			{
				state = 0;
				break;
			}
		}
	}
	return atoi(cnum);
}

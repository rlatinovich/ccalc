#include "ccalc.h"

void scnr_init(struct scanner *sc, char *m)
{
	sc->index = 0;
	sc->s = m;
}

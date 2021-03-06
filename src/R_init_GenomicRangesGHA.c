#include "GenomicRangesGHA.h"
#include <R_ext/Rdynload.h>

#define CALLMETHOD_DEF(fun, numArgs) {#fun, (DL_FUNC) &fun, numArgs}

static const R_CallMethodDef callMethods[] = {

/* transcript_utils.c */
	CALLMETHOD_DEF(transcript_widths, 2),
	CALLMETHOD_DEF(tlocs2rlocs, 6),

	{NULL, NULL, 0}
};

void R_init_GenomicRangesGHA(DllInfo *info)
{
	R_registerRoutines(info, NULL, callMethods, NULL, NULL);
	return;
}


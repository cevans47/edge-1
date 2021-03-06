#include "edgeKLODP.h"
#include <R_ext/Rdynload.h>

static R_NativePrimitiveArgType odpScoreCluster_t[] = {
  REALSXP, REALSXP, REALSXP, INTSXP, INTSXP, INTSXP, INTSXP, INTSXP, REALSXP
};

static R_NativePrimitiveArgType kldistance_t[] = {
  REALSXP, REALSXP, REALSXP, REALSXP, INTSXP, INTSXP, INTSXP, REALSXP
};

R_CMethodDef cMethods[] = {
  {"odpScoreCluster", (DL_FUNC) &odpScoreCluster, 9, odpScoreCluster_t},
  {"kldistance", (DL_FUNC) &kldistance, 8, kldistance_t},
  {NULL, NULL, 0}

};

void R_init_edge(DllInfo *info) {
  R_registerRoutines(info, cMethods, NULL, NULL, NULL);
}

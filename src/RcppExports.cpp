// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// turmite
IntegerMatrix turmite(int width, int height, int iter, int step_size);
RcppExport SEXP _turmite59_turmite(SEXP widthSEXP, SEXP heightSEXP, SEXP iterSEXP, SEXP step_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type step_size(step_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(turmite(width, height, iter, step_size));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_turmite59_turmite", (DL_FUNC) &_turmite59_turmite, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_turmite59(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// gsne_la
NumericVector gsne_la(int G0, int S0, int N0, double LA1, double BETA);
RcppExport SEXP meteR_gsne_la(SEXP G0SEXP, SEXP S0SEXP, SEXP N0SEXP, SEXP LA1SEXP, SEXP BETASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type G0(G0SEXP);
    Rcpp::traits::input_parameter< int >::type S0(S0SEXP);
    Rcpp::traits::input_parameter< int >::type N0(N0SEXP);
    Rcpp::traits::input_parameter< double >::type LA1(LA1SEXP);
    Rcpp::traits::input_parameter< double >::type BETA(BETASEXP);
    __result = Rcpp::wrap(gsne_la(G0, S0, N0, LA1, BETA));
    return __result;
END_RCPP
}
// gsne_Z
double gsne_Z(double LA1, double LA2, double LA3, int S0, int N0);
RcppExport SEXP meteR_gsne_Z(SEXP LA1SEXP, SEXP LA2SEXP, SEXP LA3SEXP, SEXP S0SEXP, SEXP N0SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type LA1(LA1SEXP);
    Rcpp::traits::input_parameter< double >::type LA2(LA2SEXP);
    Rcpp::traits::input_parameter< double >::type LA3(LA3SEXP);
    Rcpp::traits::input_parameter< int >::type S0(S0SEXP);
    Rcpp::traits::input_parameter< int >::type N0(N0SEXP);
    __result = Rcpp::wrap(gsne_Z(LA1, LA2, LA3, S0, N0));
    return __result;
END_RCPP
}
// timesTwo
NumericVector timesTwo(NumericVector x);
RcppExport SEXP meteR_timesTwo(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(timesTwo(x));
    return __result;
END_RCPP
}
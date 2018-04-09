// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// IonSelectC
List IonSelectC(double m_focalProb, int numPixels, NumericVector SP_Pixels, int numCols, NumericVector massAxis, int numSamples, int nPTestGroups, NumericVector R_pTestGroups, NumericVector ClustersSize, List ClustersPixels, NumericMatrix data);
RcppExport SEXP _IonSelect_IonSelectC(SEXP m_focalProbSEXP, SEXP numPixelsSEXP, SEXP SP_PixelsSEXP, SEXP numColsSEXP, SEXP massAxisSEXP, SEXP numSamplesSEXP, SEXP nPTestGroupsSEXP, SEXP R_pTestGroupsSEXP, SEXP ClustersSizeSEXP, SEXP ClustersPixelsSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type m_focalProb(m_focalProbSEXP);
    Rcpp::traits::input_parameter< int >::type numPixels(numPixelsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type SP_Pixels(SP_PixelsSEXP);
    Rcpp::traits::input_parameter< int >::type numCols(numColsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type massAxis(massAxisSEXP);
    Rcpp::traits::input_parameter< int >::type numSamples(numSamplesSEXP);
    Rcpp::traits::input_parameter< int >::type nPTestGroups(nPTestGroupsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R_pTestGroups(R_pTestGroupsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ClustersSize(ClustersSizeSEXP);
    Rcpp::traits::input_parameter< List >::type ClustersPixels(ClustersPixelsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(IonSelectC(m_focalProb, numPixels, SP_Pixels, numCols, massAxis, numSamples, nPTestGroups, R_pTestGroups, ClustersSize, ClustersPixels, data));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_IonSelect_IonSelectC", (DL_FUNC) &_IonSelect_IonSelectC, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_IonSelect(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double immer_derivative_correlation(double cov12, double var1, double var2, double cov12_der, double var1_der, double var2_der);

TEST(immer_deepstate_test,immer_derivative_correlation_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector cov12(1);
  cov12[0]  = RcppDeepState_double();
  qs::c_qsave(cov12,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_derivative_correlation/inputs/cov12.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cov12 values: "<< cov12 << std::endl;
  NumericVector var1(1);
  var1[0]  = RcppDeepState_double();
  qs::c_qsave(var1,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_derivative_correlation/inputs/var1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "var1 values: "<< var1 << std::endl;
  NumericVector var2(1);
  var2[0]  = RcppDeepState_double();
  qs::c_qsave(var2,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_derivative_correlation/inputs/var2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "var2 values: "<< var2 << std::endl;
  NumericVector cov12_der(1);
  cov12_der[0]  = RcppDeepState_double();
  qs::c_qsave(cov12_der,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_derivative_correlation/inputs/cov12_der.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cov12_der values: "<< cov12_der << std::endl;
  NumericVector var1_der(1);
  var1_der[0]  = RcppDeepState_double();
  qs::c_qsave(var1_der,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_derivative_correlation/inputs/var1_der.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "var1_der values: "<< var1_der << std::endl;
  NumericVector var2_der(1);
  var2_der[0]  = RcppDeepState_double();
  qs::c_qsave(var2_der,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_derivative_correlation/inputs/var2_der.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "var2_der values: "<< var2_der << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    immer_derivative_correlation(cov12[0],var1[0],var2[0],cov12_der[0],var1_der[0],var2_der[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

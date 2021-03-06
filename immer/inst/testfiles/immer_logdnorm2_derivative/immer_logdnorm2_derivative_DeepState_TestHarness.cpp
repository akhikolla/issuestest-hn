#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List immer_logdnorm2_derivative(double x, double y, double mu1, double mu2, double var1, double var2, double cov12);

TEST(immer_deepstate_test,immer_logdnorm2_derivative_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x(1);
  x[0]  = RcppDeepState_double();
  qs::c_qsave(x,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_logdnorm2_derivative/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector y(1);
  y[0]  = RcppDeepState_double();
  qs::c_qsave(y,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_logdnorm2_derivative/inputs/y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  NumericVector mu1(1);
  mu1[0]  = RcppDeepState_double();
  qs::c_qsave(mu1,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_logdnorm2_derivative/inputs/mu1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "mu1 values: "<< mu1 << std::endl;
  NumericVector mu2(1);
  mu2[0]  = RcppDeepState_double();
  qs::c_qsave(mu2,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_logdnorm2_derivative/inputs/mu2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "mu2 values: "<< mu2 << std::endl;
  NumericVector var1(1);
  var1[0]  = RcppDeepState_double();
  qs::c_qsave(var1,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_logdnorm2_derivative/inputs/var1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "var1 values: "<< var1 << std::endl;
  NumericVector var2(1);
  var2[0]  = RcppDeepState_double();
  qs::c_qsave(var2,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_logdnorm2_derivative/inputs/var2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "var2 values: "<< var2 << std::endl;
  NumericVector cov12(1);
  cov12[0]  = RcppDeepState_double();
  qs::c_qsave(cov12,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_logdnorm2_derivative/inputs/cov12.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cov12 values: "<< cov12 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    immer_logdnorm2_derivative(x[0],y[0],mu1[0],mu2[0],var1[0],var2[0],cov12[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

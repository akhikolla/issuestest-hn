#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericVector immer_sampling_xi(Rcpp::NumericVector x, Rcpp::NumericVector theta, Rcpp::NumericVector b, Rcpp::NumericVector a, int K, Rcpp::NumericVector x_ind, Rcpp::NumericVector phi, Rcpp::NumericVector psi, double eps, Rcpp::NumericVector pid, Rcpp::NumericVector rater, int N);

TEST(immer_deepstate_test,immer_sampling_xi_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_sampling_xi/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector theta  = RcppDeepState_NumericVector();
  qs::c_qsave(theta,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_sampling_xi/inputs/theta.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "theta values: "<< theta << std::endl;
  NumericVector b  = RcppDeepState_NumericVector();
  qs::c_qsave(b,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_sampling_xi/inputs/b.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "b values: "<< b << std::endl;
  NumericVector a  = RcppDeepState_NumericVector();
  qs::c_qsave(a,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_sampling_xi/inputs/a.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "a values: "<< a << std::endl;
  IntegerVector K(1);
  K[0]  = RcppDeepState_int();
  qs::c_qsave(K,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_sampling_xi/inputs/K.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "K values: "<< K << std::endl;
  NumericVector x_ind  = RcppDeepState_NumericVector();
  qs::c_qsave(x_ind,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_sampling_xi/inputs/x_ind.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x_ind values: "<< x_ind << std::endl;
  NumericVector phi  = RcppDeepState_NumericVector();
  qs::c_qsave(phi,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_sampling_xi/inputs/phi.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "phi values: "<< phi << std::endl;
  NumericVector psi  = RcppDeepState_NumericVector();
  qs::c_qsave(psi,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_sampling_xi/inputs/psi.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "psi values: "<< psi << std::endl;
  NumericVector eps(1);
  eps[0]  = RcppDeepState_double();
  qs::c_qsave(eps,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_sampling_xi/inputs/eps.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "eps values: "<< eps << std::endl;
  NumericVector pid  = RcppDeepState_NumericVector();
  qs::c_qsave(pid,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_sampling_xi/inputs/pid.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pid values: "<< pid << std::endl;
  NumericVector rater  = RcppDeepState_NumericVector();
  qs::c_qsave(rater,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_sampling_xi/inputs/rater.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "rater values: "<< rater << std::endl;
  IntegerVector N(1);
  N[0]  = RcppDeepState_int();
  qs::c_qsave(N,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_sampling_xi/inputs/N.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "N values: "<< N << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    immer_sampling_xi(x,theta,b,a,K[0],x_ind,phi,psi,eps[0],pid,rater,N[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

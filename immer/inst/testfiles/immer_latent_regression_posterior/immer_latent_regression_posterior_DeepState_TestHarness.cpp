#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List immer_latent_regression_posterior(Rcpp::NumericMatrix like, Rcpp::NumericMatrix prior, Rcpp::NumericVector weights);

TEST(immer_deepstate_test,immer_latent_regression_posterior_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix like  = RcppDeepState_NumericMatrix();
  qs::c_qsave(like,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_latent_regression_posterior/inputs/like.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "like values: "<< like << std::endl;
  NumericMatrix prior  = RcppDeepState_NumericMatrix();
  qs::c_qsave(prior,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_latent_regression_posterior/inputs/prior.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "prior values: "<< prior << std::endl;
  NumericVector weights  = RcppDeepState_NumericVector();
  qs::c_qsave(weights,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_latent_regression_posterior/inputs/weights.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weights values: "<< weights << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    immer_latent_regression_posterior(like,prior,weights);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

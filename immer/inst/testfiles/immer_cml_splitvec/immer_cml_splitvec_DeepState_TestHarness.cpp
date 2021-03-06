#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List immer_cml_splitvec(Rcpp::NumericVector esf_par1, Rcpp::IntegerVector splitvec_len_pp);

TEST(immer_deepstate_test,immer_cml_splitvec_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector esf_par1  = RcppDeepState_NumericVector();
  qs::c_qsave(esf_par1,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_cml_splitvec/inputs/esf_par1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "esf_par1 values: "<< esf_par1 << std::endl;
  IntegerVector splitvec_len_pp  = RcppDeepState_IntegerVector();
  qs::c_qsave(splitvec_len_pp,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_cml_splitvec/inputs/splitvec_len_pp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "splitvec_len_pp values: "<< splitvec_len_pp << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    immer_cml_splitvec(esf_par1,splitvec_len_pp);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

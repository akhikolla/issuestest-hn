#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericVector immer_gpcm_prob_one_item_one_person(double theta1, Rcpp::NumericVector b_ii, double a);

TEST(immer_deepstate_test,immer_gpcm_prob_one_item_one_person_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector theta1(1);
  theta1[0]  = RcppDeepState_double();
  qs::c_qsave(theta1,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_gpcm_prob_one_item_one_person/inputs/theta1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "theta1 values: "<< theta1 << std::endl;
  NumericVector b_ii  = RcppDeepState_NumericVector();
  qs::c_qsave(b_ii,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_gpcm_prob_one_item_one_person/inputs/b_ii.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "b_ii values: "<< b_ii << std::endl;
  NumericVector a(1);
  a[0]  = RcppDeepState_double();
  qs::c_qsave(a,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_gpcm_prob_one_item_one_person/inputs/a.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "a values: "<< a << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    immer_gpcm_prob_one_item_one_person(theta1[0],b_ii,a[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

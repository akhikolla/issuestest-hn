// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// fast_apply_nb_na_DeepState_TestHarness_generation.cpp and fast_apply_nb_na_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector fast_apply_nb_na(NumericMatrix X, int dim);

TEST(imp4p_deepstate_test,fast_apply_nb_na_test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix X  = RcppDeepState_NumericMatrix();
  std::string X_t = "/home/akhila/fuzzer_packages/fuzzedpackages/imp4p/inst/testfiles/fast_apply_nb_na/libFuzzer_fast_apply_nb_na/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_X.qs";
  qs::c_qsave(X,X_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "X values: "<< X << std::endl;
  IntegerVector dim(1);
  dim[0]  = RcppDeepState_int();
  std::string dim_t = "/home/akhila/fuzzer_packages/fuzzedpackages/imp4p/inst/testfiles/fast_apply_nb_na/libFuzzer_fast_apply_nb_na/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_dim.qs";
  qs::c_qsave(dim,dim_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dim values: "<< dim << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    fast_apply_nb_na(X,dim[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
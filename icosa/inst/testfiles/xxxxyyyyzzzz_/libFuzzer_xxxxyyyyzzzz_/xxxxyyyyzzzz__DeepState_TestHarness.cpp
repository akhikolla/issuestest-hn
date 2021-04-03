// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// xxxxyyyyzzzz__DeepState_TestHarness_generation.cpp and xxxxyyyyzzzz__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector xxxxyyyyzzzz_(NumericMatrix v, NumericMatrix f);

TEST(icosa_deepstate_test,xxxxyyyyzzzz__test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix v  = RcppDeepState_NumericMatrix();
  std::string v_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/xxxxyyyyzzzz_/libFuzzer_xxxxyyyyzzzz_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_v.qs";
  qs::c_qsave(v,v_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "v values: "<< v << std::endl;
  NumericMatrix f  = RcppDeepState_NumericMatrix();
  std::string f_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/xxxxyyyyzzzz_/libFuzzer_xxxxyyyyzzzz_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_f.qs";
  qs::c_qsave(f,f_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "f values: "<< f << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    xxxxyyyyzzzz_(v,f);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
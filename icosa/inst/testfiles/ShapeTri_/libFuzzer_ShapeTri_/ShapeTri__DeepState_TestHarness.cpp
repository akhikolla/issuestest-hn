// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// ShapeTri__DeepState_TestHarness_generation.cpp and ShapeTri__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double ShapeTri_(NumericVector p0, NumericVector p1, NumericVector p2);

TEST(icosa_deepstate_test,ShapeTri__test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector p0  = RcppDeepState_NumericVector();
  std::string p0_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/ShapeTri_/libFuzzer_ShapeTri_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_p0.qs";
  qs::c_qsave(p0,p0_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "p0 values: "<< p0 << std::endl;
  NumericVector p1  = RcppDeepState_NumericVector();
  std::string p1_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/ShapeTri_/libFuzzer_ShapeTri_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_p1.qs";
  qs::c_qsave(p1,p1_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "p1 values: "<< p1 << std::endl;
  NumericVector p2  = RcppDeepState_NumericVector();
  std::string p2_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/ShapeTri_/libFuzzer_ShapeTri_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_p2.qs";
  qs::c_qsave(p2,p2_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "p2 values: "<< p2 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    ShapeTri_(p0,p1,p2);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
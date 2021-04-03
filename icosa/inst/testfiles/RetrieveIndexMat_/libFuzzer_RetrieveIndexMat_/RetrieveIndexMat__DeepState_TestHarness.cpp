// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// RetrieveIndexMat__DeepState_TestHarness_generation.cpp and RetrieveIndexMat__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix RetrieveIndexMat_(NumericVector indices);

TEST(icosa_deepstate_test,RetrieveIndexMat__test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector indices  = RcppDeepState_NumericVector();
  std::string indices_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/RetrieveIndexMat_/libFuzzer_RetrieveIndexMat_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_indices.qs";
  qs::c_qsave(indices,indices_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "indices values: "<< indices << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    RetrieveIndexMat_(indices);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
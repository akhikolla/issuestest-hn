// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// expandEdges__DeepState_TestHarness_generation.cpp and expandEdges__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix expandEdges_(NumericMatrix eExp, NumericVector center, double res);

TEST(icosa_deepstate_test,expandEdges__test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix eExp  = RcppDeepState_NumericMatrix();
  std::string eExp_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/expandEdges_/libFuzzer_expandEdges_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_eExp.qs";
  qs::c_qsave(eExp,eExp_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "eExp values: "<< eExp << std::endl;
  NumericVector center  = RcppDeepState_NumericVector();
  std::string center_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/expandEdges_/libFuzzer_expandEdges_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_center.qs";
  qs::c_qsave(center,center_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "center values: "<< center << std::endl;
  NumericVector res(1);
  res[0]  = RcppDeepState_double();
  std::string res_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/expandEdges_/libFuzzer_expandEdges_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_res.qs";
  qs::c_qsave(res,res_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "res values: "<< res << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    expandEdges_(eExp,center,res[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
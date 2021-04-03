// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// det_cpp_DeepState_TestHarness_generation.cpp and det_cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double det_cpp(NumericMatrix set);

TEST(idefix_deepstate_test,det_cpp_test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix set  = RcppDeepState_NumericMatrix();
  std::string set_t = "/home/akhila/fuzzer_packages/fuzzedpackages/idefix/inst/testfiles/det_cpp/AFL_det_cpp/afl_inputs/" + std::to_string(t) + "_set.qs";
  qs::c_qsave(set,set_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "set values: "<< set << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    det_cpp(set);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
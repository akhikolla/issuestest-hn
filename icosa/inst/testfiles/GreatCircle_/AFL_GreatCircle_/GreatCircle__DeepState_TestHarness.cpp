// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// GreatCircle__DeepState_TestHarness_generation.cpp and GreatCircle__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix GreatCircle_(NumericVector coord1, NumericVector coord2, NumericVector origin, int breaks, double pi);

TEST(icosa_deepstate_test,GreatCircle__test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector coord1  = RcppDeepState_NumericVector();
  std::string coord1_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/GreatCircle_/AFL_GreatCircle_/afl_inputs/" + std::to_string(t) + "_coord1.qs";
  qs::c_qsave(coord1,coord1_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "coord1 values: "<< coord1 << std::endl;
  NumericVector coord2  = RcppDeepState_NumericVector();
  std::string coord2_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/GreatCircle_/AFL_GreatCircle_/afl_inputs/" + std::to_string(t) + "_coord2.qs";
  qs::c_qsave(coord2,coord2_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "coord2 values: "<< coord2 << std::endl;
  NumericVector origin  = RcppDeepState_NumericVector();
  std::string origin_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/GreatCircle_/AFL_GreatCircle_/afl_inputs/" + std::to_string(t) + "_origin.qs";
  qs::c_qsave(origin,origin_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "origin values: "<< origin << std::endl;
  IntegerVector breaks(1);
  breaks[0]  = RcppDeepState_int();
  std::string breaks_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/GreatCircle_/AFL_GreatCircle_/afl_inputs/" + std::to_string(t) + "_breaks.qs";
  qs::c_qsave(breaks,breaks_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "breaks values: "<< breaks << std::endl;
  NumericVector pi(1);
  pi[0]  = RcppDeepState_double();
  std::string pi_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/GreatCircle_/AFL_GreatCircle_/afl_inputs/" + std::to_string(t) + "_pi.qs";
  qs::c_qsave(pi,pi_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pi values: "<< pi << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    GreatCircle_(coord1,coord2,origin,breaks[0],pi[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

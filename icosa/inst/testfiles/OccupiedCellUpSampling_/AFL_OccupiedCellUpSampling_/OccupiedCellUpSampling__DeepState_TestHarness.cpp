// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// OccupiedCellUpSampling__DeepState_TestHarness_generation.cpp and OccupiedCellUpSampling__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector OccupiedCellUpSampling_(NumericVector values, NumericVector loc);

TEST(icosa_deepstate_test,OccupiedCellUpSampling__test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector values  = RcppDeepState_NumericVector();
  std::string values_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/OccupiedCellUpSampling_/AFL_OccupiedCellUpSampling_/afl_inputs/" + std::to_string(t) + "_values.qs";
  qs::c_qsave(values,values_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "values values: "<< values << std::endl;
  NumericVector loc  = RcppDeepState_NumericVector();
  std::string loc_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/OccupiedCellUpSampling_/AFL_OccupiedCellUpSampling_/afl_inputs/" + std::to_string(t) + "_loc.qs";
  qs::c_qsave(loc,loc_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "loc values: "<< loc << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    OccupiedCellUpSampling_(values,loc);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
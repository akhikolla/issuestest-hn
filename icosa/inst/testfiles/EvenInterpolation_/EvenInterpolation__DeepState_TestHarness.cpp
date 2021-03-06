// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// EvenInterpolation__DeepState_TestHarness_generation.cpp and EvenInterpolation__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector EvenInterpolation_(NumericMatrix xyz, NumericVector origin, double critValue);

TEST(icosa_deepstate_test,EvenInterpolation__test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix xyz  = RcppDeepState_NumericMatrix();
  qs::c_qsave(xyz,"/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/EvenInterpolation_/inputs/xyz.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "xyz values: "<< xyz << std::endl;
  NumericVector origin  = RcppDeepState_NumericVector();
  qs::c_qsave(origin,"/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/EvenInterpolation_/inputs/origin.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "origin values: "<< origin << std::endl;
  NumericVector critValue(1);
  critValue[0]  = RcppDeepState_double();
  qs::c_qsave(critValue,"/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/EvenInterpolation_/inputs/critValue.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "critValue values: "<< critValue << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    EvenInterpolation_(xyz,origin,critValue[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// centroidPoints__DeepState_TestHarness_generation.cpp and centroidPoints__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix centroidPoints_(NumericMatrix coords, NumericMatrix combin, NumericVector center, int breaks);

TEST(icosa_deepstate_test,centroidPoints__test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix coords  = RcppDeepState_NumericMatrix();
  std::string coords_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/centroidPoints_/AFL_centroidPoints_/afl_inputs/" + std::to_string(t) + "_coords.qs";
  qs::c_qsave(coords,coords_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "coords values: "<< coords << std::endl;
  NumericMatrix combin  = RcppDeepState_NumericMatrix();
  std::string combin_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/centroidPoints_/AFL_centroidPoints_/afl_inputs/" + std::to_string(t) + "_combin.qs";
  qs::c_qsave(combin,combin_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "combin values: "<< combin << std::endl;
  NumericVector center  = RcppDeepState_NumericVector();
  std::string center_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/centroidPoints_/AFL_centroidPoints_/afl_inputs/" + std::to_string(t) + "_center.qs";
  qs::c_qsave(center,center_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "center values: "<< center << std::endl;
  IntegerVector breaks(1);
  breaks[0]  = RcppDeepState_int();
  std::string breaks_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/centroidPoints_/AFL_centroidPoints_/afl_inputs/" + std::to_string(t) + "_breaks.qs";
  qs::c_qsave(breaks,breaks_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "breaks values: "<< breaks << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    centroidPoints_(coords,combin,center,breaks[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

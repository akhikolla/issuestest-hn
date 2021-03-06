// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// allTriangleCenters__DeepState_TestHarness_generation.cpp and allTriangleCenters__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix allTriangleCenters_(NumericMatrix v, NumericMatrix f, NumericVector origin);

TEST(icosa_deepstate_test,allTriangleCenters__test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix v  = RcppDeepState_NumericMatrix();
  std::string v_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/allTriangleCenters_/AFL_allTriangleCenters_/afl_inputs/" + std::to_string(t) + "_v.qs";
  qs::c_qsave(v,v_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "v values: "<< v << std::endl;
  NumericMatrix f  = RcppDeepState_NumericMatrix();
  std::string f_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/allTriangleCenters_/AFL_allTriangleCenters_/afl_inputs/" + std::to_string(t) + "_f.qs";
  qs::c_qsave(f,f_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "f values: "<< f << std::endl;
  NumericVector origin  = RcppDeepState_NumericVector();
  std::string origin_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/allTriangleCenters_/AFL_allTriangleCenters_/afl_inputs/" + std::to_string(t) + "_origin.qs";
  qs::c_qsave(origin,origin_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "origin values: "<< origin << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    allTriangleCenters_(v,f,origin);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

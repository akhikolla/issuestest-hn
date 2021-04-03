// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// IcosahedronTesselation__DeepState_TestHarness_generation.cpp and IcosahedronTesselation__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List IcosahedronTesselation_(NumericMatrix oldV, NumericMatrix oldF, NumericVector tesselation, NumericVector origin);

TEST(icosa_deepstate_test,IcosahedronTesselation__test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix oldV  = RcppDeepState_NumericMatrix();
  std::string oldV_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/IcosahedronTesselation_/AFL_IcosahedronTesselation_/afl_inputs/" + std::to_string(t) + "_oldV.qs";
  qs::c_qsave(oldV,oldV_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "oldV values: "<< oldV << std::endl;
  NumericMatrix oldF  = RcppDeepState_NumericMatrix();
  std::string oldF_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/IcosahedronTesselation_/AFL_IcosahedronTesselation_/afl_inputs/" + std::to_string(t) + "_oldF.qs";
  qs::c_qsave(oldF,oldF_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "oldF values: "<< oldF << std::endl;
  NumericVector tesselation  = RcppDeepState_NumericVector();
  std::string tesselation_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/IcosahedronTesselation_/AFL_IcosahedronTesselation_/afl_inputs/" + std::to_string(t) + "_tesselation.qs";
  qs::c_qsave(tesselation,tesselation_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tesselation values: "<< tesselation << std::endl;
  NumericVector origin  = RcppDeepState_NumericVector();
  std::string origin_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/IcosahedronTesselation_/AFL_IcosahedronTesselation_/afl_inputs/" + std::to_string(t) + "_origin.qs";
  qs::c_qsave(origin,origin_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "origin values: "<< origin << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    IcosahedronTesselation_(oldV,oldF,tesselation,origin);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
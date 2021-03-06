// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// xyz1xyz1xyz1xyz1__DeepState_TestHarness_generation.cpp and xyz1xyz1xyz1xyz1__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector xyz1xyz1xyz1xyz1_(NumericMatrix v, NumericMatrix f);

TEST(icosa_deepstate_test,xyz1xyz1xyz1xyz1__test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix v  = RcppDeepState_NumericMatrix();
  std::string v_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/xyz1xyz1xyz1xyz1_/AFL_xyz1xyz1xyz1xyz1_/afl_inputs/" + std::to_string(t) + "_v.qs";
  qs::c_qsave(v,v_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "v values: "<< v << std::endl;
  NumericMatrix f  = RcppDeepState_NumericMatrix();
  std::string f_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/xyz1xyz1xyz1xyz1_/AFL_xyz1xyz1xyz1xyz1_/afl_inputs/" + std::to_string(t) + "_f.qs";
  qs::c_qsave(f,f_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "f values: "<< f << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    xyz1xyz1xyz1xyz1_(v,f);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

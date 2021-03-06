// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// edgeMatTri__DeepState_TestHarness_generation.cpp and edgeMatTri__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix edgeMatTri_(NumericMatrix v, NumericMatrix e);

TEST(icosa_deepstate_test,edgeMatTri__test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix v  = RcppDeepState_NumericMatrix();
  std::string v_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/edgeMatTri_/libFuzzer_edgeMatTri_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_v.qs";
  qs::c_qsave(v,v_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "v values: "<< v << std::endl;
  NumericMatrix e  = RcppDeepState_NumericMatrix();
  std::string e_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/edgeMatTri_/libFuzzer_edgeMatTri_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_e.qs";
  qs::c_qsave(e,e_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "e values: "<< e << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    edgeMatTri_(v,e);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

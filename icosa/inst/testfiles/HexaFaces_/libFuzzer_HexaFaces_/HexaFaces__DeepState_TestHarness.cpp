// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// HexaFaces__DeepState_TestHarness_generation.cpp and HexaFaces__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix HexaFaces_(NumericMatrix fOrd);

TEST(icosa_deepstate_test,HexaFaces__test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix fOrd  = RcppDeepState_NumericMatrix();
  std::string fOrd_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/HexaFaces_/libFuzzer_HexaFaces_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_fOrd.qs";
  qs::c_qsave(fOrd,fOrd_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "fOrd values: "<< fOrd << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    HexaFaces_(fOrd);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

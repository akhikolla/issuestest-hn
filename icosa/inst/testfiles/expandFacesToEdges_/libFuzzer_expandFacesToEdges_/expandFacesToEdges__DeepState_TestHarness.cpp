// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// expandFacesToEdges__DeepState_TestHarness_generation.cpp and expandFacesToEdges__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix expandFacesToEdges_(NumericMatrix faces);

TEST(icosa_deepstate_test,expandFacesToEdges__test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix faces  = RcppDeepState_NumericMatrix();
  std::string faces_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/expandFacesToEdges_/libFuzzer_expandFacesToEdges_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_faces.qs";
  qs::c_qsave(faces,faces_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "faces values: "<< faces << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    expandFacesToEdges_(faces);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

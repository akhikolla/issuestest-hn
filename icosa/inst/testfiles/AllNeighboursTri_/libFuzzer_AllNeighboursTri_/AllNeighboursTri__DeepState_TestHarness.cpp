// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// AllNeighboursTri__DeepState_TestHarness_generation.cpp and AllNeighboursTri__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix AllNeighboursTri_(NumericMatrix allFaces, NumericVector div);

TEST(icosa_deepstate_test,AllNeighboursTri__test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix allFaces  = RcppDeepState_NumericMatrix();
  std::string allFaces_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/AllNeighboursTri_/libFuzzer_AllNeighboursTri_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_allFaces.qs";
  qs::c_qsave(allFaces,allFaces_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "allFaces values: "<< allFaces << std::endl;
  NumericVector div  = RcppDeepState_NumericVector();
  std::string div_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/AllNeighboursTri_/libFuzzer_AllNeighboursTri_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_div.qs";
  qs::c_qsave(div,div_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "div values: "<< div << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    AllNeighboursTri_(allFaces,div);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
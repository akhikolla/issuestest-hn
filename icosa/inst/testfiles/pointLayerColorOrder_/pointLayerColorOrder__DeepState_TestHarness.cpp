// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// pointLayerColorOrder__DeepState_TestHarness_generation.cpp and pointLayerColorOrder__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector pointLayerColorOrder_(NumericMatrix f);

TEST(icosa_deepstate_test,pointLayerColorOrder__test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix f  = RcppDeepState_NumericMatrix();
  qs::c_qsave(f,"/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/pointLayerColorOrder_/inputs/f.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "f values: "<< f << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    pointLayerColorOrder_(f);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

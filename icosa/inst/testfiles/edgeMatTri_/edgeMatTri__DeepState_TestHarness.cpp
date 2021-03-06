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
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix v  = RcppDeepState_NumericMatrix();
  qs::c_qsave(v,"/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/edgeMatTri_/inputs/v.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "v values: "<< v << std::endl;
  NumericMatrix e  = RcppDeepState_NumericMatrix();
  qs::c_qsave(e,"/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/edgeMatTri_/inputs/e.qs",
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

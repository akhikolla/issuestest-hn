// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// ExpandEdgesByFacesTri__DeepState_TestHarness_generation.cpp and ExpandEdgesByFacesTri__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix ExpandEdgesByFacesTri_(NumericMatrix origV, NumericMatrix origSubF, NumericVector center, int breaks);

TEST(icosa_deepstate_test,ExpandEdgesByFacesTri__test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix origV  = RcppDeepState_NumericMatrix();
  qs::c_qsave(origV,"/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/ExpandEdgesByFacesTri_/inputs/origV.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "origV values: "<< origV << std::endl;
  NumericMatrix origSubF  = RcppDeepState_NumericMatrix();
  qs::c_qsave(origSubF,"/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/ExpandEdgesByFacesTri_/inputs/origSubF.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "origSubF values: "<< origSubF << std::endl;
  NumericVector center  = RcppDeepState_NumericVector();
  qs::c_qsave(center,"/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/ExpandEdgesByFacesTri_/inputs/center.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "center values: "<< center << std::endl;
  IntegerVector breaks(1);
  breaks[0]  = RcppDeepState_int();
  qs::c_qsave(breaks,"/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/ExpandEdgesByFacesTri_/inputs/breaks.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "breaks values: "<< breaks << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    ExpandEdgesByFacesTri_(origV,origSubF,center,breaks[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

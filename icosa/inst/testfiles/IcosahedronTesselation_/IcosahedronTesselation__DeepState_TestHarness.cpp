// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// IcosahedronTesselation__DeepState_TestHarness_generation.cpp and IcosahedronTesselation__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List IcosahedronTesselation_(NumericMatrix oldV, NumericMatrix oldF, NumericVector tesselation, NumericVector origin);

TEST(icosa_deepstate_test,IcosahedronTesselation__test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix oldV  = RcppDeepState_NumericMatrix();
  qs::c_qsave(oldV,"/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/IcosahedronTesselation_/inputs/oldV.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "oldV values: "<< oldV << std::endl;
  NumericMatrix oldF  = RcppDeepState_NumericMatrix();
  qs::c_qsave(oldF,"/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/IcosahedronTesselation_/inputs/oldF.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "oldF values: "<< oldF << std::endl;
  NumericVector tesselation  = RcppDeepState_NumericVector();
  qs::c_qsave(tesselation,"/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/IcosahedronTesselation_/inputs/tesselation.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tesselation values: "<< tesselation << std::endl;
  NumericVector origin  = RcppDeepState_NumericVector();
  qs::c_qsave(origin,"/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/IcosahedronTesselation_/inputs/origin.qs",
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

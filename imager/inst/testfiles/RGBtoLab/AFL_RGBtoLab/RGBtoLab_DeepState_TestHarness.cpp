// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// RGBtoLab_DeepState_TestHarness_generation.cpp and RGBtoLab_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector RGBtoLab(NumericVector im);

TEST(imager_deepstate_test,RGBtoLab_test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector im  = RcppDeepState_NumericVector();
  std::string im_t = "/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/RGBtoLab/AFL_RGBtoLab/afl_inputs/" + std::to_string(t) + "_im.qs";
  qs::c_qsave(im,im_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "im values: "<< im << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    RGBtoLab(im);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

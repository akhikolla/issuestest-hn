// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// HSItoRGB_DeepState_TestHarness_generation.cpp and HSItoRGB_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector HSItoRGB(NumericVector im);

TEST(imager_deepstate_test,HSItoRGB_test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector im  = RcppDeepState_NumericVector();
  std::string im_t = "/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/HSItoRGB/AFL_HSItoRGB/afl_inputs/" + std::to_string(t) + "_im.qs";
  qs::c_qsave(im,im_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "im values: "<< im << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    HSItoRGB(im);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// sRGBtoLab_DeepState_TestHarness_generation.cpp and sRGBtoLab_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector sRGBtoLab(NumericVector im);

TEST(imager_deepstate_test,sRGBtoLab_test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector im  = RcppDeepState_NumericVector();
  std::string im_t = "/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/sRGBtoLab/libFuzzer_sRGBtoLab/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_im.qs";
  qs::c_qsave(im,im_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "im values: "<< im << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    sRGBtoLab(im);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
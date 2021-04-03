// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// erode_square_DeepState_TestHarness_generation.cpp and erode_square_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector erode_square(NumericVector im, int size);

TEST(imager_deepstate_test,erode_square_test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector im  = RcppDeepState_NumericVector();
  std::string im_t = "/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/erode_square/libFuzzer_erode_square/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_im.qs";
  qs::c_qsave(im,im_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "im values: "<< im << std::endl;
  IntegerVector size(1);
  size[0]  = RcppDeepState_int();
  std::string size_t = "/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/erode_square/libFuzzer_erode_square/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_size.qs";
  qs::c_qsave(size,size_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "size values: "<< size << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    erode_square(im,size[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
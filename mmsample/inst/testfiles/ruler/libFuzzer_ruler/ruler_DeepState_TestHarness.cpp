// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// ruler_DeepState_TestHarness_generation.cpp and ruler_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector ruler(NumericMatrix vR, NumericVector uR, NumericMatrix ciR);

TEST(mmsample_deepstate_test,ruler_test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix vR  = RcppDeepState_NumericMatrix();
  std::string vR_t = "/home/akhila/fuzzer_packages/fuzzedpackages/mmsample/inst/testfiles/ruler/libFuzzer_ruler/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_vR.qs";
  qs::c_qsave(vR,vR_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vR values: "<< vR << std::endl;
  NumericVector uR  = RcppDeepState_NumericVector();
  std::string uR_t = "/home/akhila/fuzzer_packages/fuzzedpackages/mmsample/inst/testfiles/ruler/libFuzzer_ruler/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_uR.qs";
  qs::c_qsave(uR,uR_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "uR values: "<< uR << std::endl;
  NumericMatrix ciR  = RcppDeepState_NumericMatrix();
  std::string ciR_t = "/home/akhila/fuzzer_packages/fuzzedpackages/mmsample/inst/testfiles/ruler/libFuzzer_ruler/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_ciR.qs";
  qs::c_qsave(ciR,ciR_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ciR values: "<< ciR << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    ruler(vR,uR,ciR);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

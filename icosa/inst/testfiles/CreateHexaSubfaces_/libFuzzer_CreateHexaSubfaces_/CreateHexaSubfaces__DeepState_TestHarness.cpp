// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// CreateHexaSubfaces__DeepState_TestHarness_generation.cpp and CreateHexaSubfaces__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix CreateHexaSubfaces_(NumericMatrix n, NumericMatrix f, int nV);

TEST(icosa_deepstate_test,CreateHexaSubfaces__test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix n  = RcppDeepState_NumericMatrix();
  std::string n_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/CreateHexaSubfaces_/libFuzzer_CreateHexaSubfaces_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_n.qs";
  qs::c_qsave(n,n_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n values: "<< n << std::endl;
  NumericMatrix f  = RcppDeepState_NumericMatrix();
  std::string f_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/CreateHexaSubfaces_/libFuzzer_CreateHexaSubfaces_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_f.qs";
  qs::c_qsave(f,f_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "f values: "<< f << std::endl;
  IntegerVector nV(1);
  nV[0]  = RcppDeepState_int();
  std::string n_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/CreateHexaSubfaces_/libFuzzer_CreateHexaSubfaces_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_n.qs";
  std::string nV_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/CreateHexaSubfaces_/libFuzzer_CreateHexaSubfaces_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_nV.qs";
  qs::c_qsave(nV,nV_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nV values: "<< nV << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    CreateHexaSubfaces_(n,f,nV[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

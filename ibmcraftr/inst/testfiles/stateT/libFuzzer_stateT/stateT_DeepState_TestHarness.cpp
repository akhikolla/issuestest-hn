// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// stateT_DeepState_TestHarness_generation.cpp and stateT_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix stateT(int origin, IntegerVector newstates, NumericVector cumuprobs, NumericMatrix sMatrix);

TEST(ibmcraftr_deepstate_test,stateT_test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  IntegerVector origin(1);
  origin[0]  = RcppDeepState_int();
  std::string origin_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ibmcraftr/inst/testfiles/stateT/libFuzzer_stateT/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_origin.qs";
  qs::c_qsave(origin,origin_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "origin values: "<< origin << std::endl;
  IntegerVector newstates  = RcppDeepState_IntegerVector();
  std::string newstates_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ibmcraftr/inst/testfiles/stateT/libFuzzer_stateT/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_newstates.qs";
  qs::c_qsave(newstates,newstates_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "newstates values: "<< newstates << std::endl;
  NumericVector cumuprobs  = RcppDeepState_NumericVector();
  std::string cumuprobs_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ibmcraftr/inst/testfiles/stateT/libFuzzer_stateT/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_cumuprobs.qs";
  qs::c_qsave(cumuprobs,cumuprobs_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cumuprobs values: "<< cumuprobs << std::endl;
  NumericMatrix sMatrix  = RcppDeepState_NumericMatrix();
  std::string sMatrix_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ibmcraftr/inst/testfiles/stateT/libFuzzer_stateT/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_sMatrix.qs";
  qs::c_qsave(sMatrix,sMatrix_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sMatrix values: "<< sMatrix << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    stateT(origin[0],newstates,cumuprobs,sMatrix);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

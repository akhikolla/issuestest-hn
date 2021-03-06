// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// TriangleTesselation__DeepState_TestHarness_generation.cpp and TriangleTesselation__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List TriangleTesselation_(NumericVector v0, NumericVector v1, NumericVector v2, NumericVector origin, int lineBreak);

TEST(icosa_deepstate_test,TriangleTesselation__test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector v0  = RcppDeepState_NumericVector();
  std::string v0_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/TriangleTesselation_/libFuzzer_TriangleTesselation_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_v0.qs";
  qs::c_qsave(v0,v0_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "v0 values: "<< v0 << std::endl;
  NumericVector v1  = RcppDeepState_NumericVector();
  std::string v1_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/TriangleTesselation_/libFuzzer_TriangleTesselation_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_v1.qs";
  qs::c_qsave(v1,v1_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "v1 values: "<< v1 << std::endl;
  NumericVector v2  = RcppDeepState_NumericVector();
  std::string v2_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/TriangleTesselation_/libFuzzer_TriangleTesselation_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_v2.qs";
  qs::c_qsave(v2,v2_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "v2 values: "<< v2 << std::endl;
  NumericVector origin  = RcppDeepState_NumericVector();
  std::string origin_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/TriangleTesselation_/libFuzzer_TriangleTesselation_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_origin.qs";
  qs::c_qsave(origin,origin_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "origin values: "<< origin << std::endl;
  IntegerVector lineBreak(1);
  lineBreak[0]  = RcppDeepState_int();
  std::string lineBreak_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/TriangleTesselation_/libFuzzer_TriangleTesselation_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_lineBreak.qs";
  qs::c_qsave(lineBreak,lineBreak_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lineBreak values: "<< lineBreak << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    TriangleTesselation_(v0,v1,v2,origin,lineBreak[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

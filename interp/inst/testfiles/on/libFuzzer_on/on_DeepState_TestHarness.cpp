// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// on_DeepState_TestHarness_generation.cpp and on_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

LogicalVector on(double x1, double y1, double x2, double y2, NumericVector x0, NumericVector y0, double eps);

TEST(interp_deepstate_test,on_test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector x1(1);
  x1[0]  = RcppDeepState_double();
  std::string x1_t = "/home/akhila/fuzzer_packages/fuzzedpackages/interp/inst/testfiles/on/libFuzzer_on/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_x1.qs";
  qs::c_qsave(x1,x1_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x1 values: "<< x1 << std::endl;
  NumericVector y1(1);
  y1[0]  = RcppDeepState_double();
  std::string y1_t = "/home/akhila/fuzzer_packages/fuzzedpackages/interp/inst/testfiles/on/libFuzzer_on/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_y1.qs";
  qs::c_qsave(y1,y1_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y1 values: "<< y1 << std::endl;
  NumericVector x2(1);
  x2[0]  = RcppDeepState_double();
  std::string x2_t = "/home/akhila/fuzzer_packages/fuzzedpackages/interp/inst/testfiles/on/libFuzzer_on/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_x2.qs";
  qs::c_qsave(x2,x2_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x2 values: "<< x2 << std::endl;
  NumericVector y2(1);
  y2[0]  = RcppDeepState_double();
  std::string y2_t = "/home/akhila/fuzzer_packages/fuzzedpackages/interp/inst/testfiles/on/libFuzzer_on/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_y2.qs";
  qs::c_qsave(y2,y2_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y2 values: "<< y2 << std::endl;
  NumericVector x0  = RcppDeepState_NumericVector();
  std::string x0_t = "/home/akhila/fuzzer_packages/fuzzedpackages/interp/inst/testfiles/on/libFuzzer_on/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_x0.qs";
  qs::c_qsave(x0,x0_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x0 values: "<< x0 << std::endl;
  NumericVector y0  = RcppDeepState_NumericVector();
  std::string y0_t = "/home/akhila/fuzzer_packages/fuzzedpackages/interp/inst/testfiles/on/libFuzzer_on/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_y0.qs";
  qs::c_qsave(y0,y0_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y0 values: "<< y0 << std::endl;
  NumericVector eps(1);
  eps[0]  = RcppDeepState_double();
  std::string eps_t = "/home/akhila/fuzzer_packages/fuzzedpackages/interp/inst/testfiles/on/libFuzzer_on/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_eps.qs";
  qs::c_qsave(eps,eps_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "eps values: "<< eps << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    on(x1[0],y1[0],x2[0],y2[0],x0,y0,eps[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

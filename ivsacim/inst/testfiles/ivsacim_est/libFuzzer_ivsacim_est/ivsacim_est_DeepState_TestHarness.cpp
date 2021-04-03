// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// ivsacim_est_DeepState_TestHarness_generation.cpp and ivsacim_est_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

SEXP ivsacim_est(NumericVector time, NumericVector event, NumericVector stime, NumericVector Zc, NumericMatrix D_status, NumericMatrix eps_2, NumericMatrix Zc_dot);

TEST(ivsacim_deepstate_test,ivsacim_est_test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector time  = RcppDeepState_NumericVector();
  std::string time_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ivsacim/inst/testfiles/ivsacim_est/libFuzzer_ivsacim_est/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_time.qs";
  qs::c_qsave(time,time_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "time values: "<< time << std::endl;
  NumericVector event  = RcppDeepState_NumericVector();
  std::string event_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ivsacim/inst/testfiles/ivsacim_est/libFuzzer_ivsacim_est/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_event.qs";
  qs::c_qsave(event,event_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "event values: "<< event << std::endl;
  NumericVector stime  = RcppDeepState_NumericVector();
  std::string stime_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ivsacim/inst/testfiles/ivsacim_est/libFuzzer_ivsacim_est/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_stime.qs";
  qs::c_qsave(stime,stime_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "stime values: "<< stime << std::endl;
  NumericVector Zc  = RcppDeepState_NumericVector();
  std::string Zc_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ivsacim/inst/testfiles/ivsacim_est/libFuzzer_ivsacim_est/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_Zc.qs";
  qs::c_qsave(Zc,Zc_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Zc values: "<< Zc << std::endl;
  NumericMatrix D_status  = RcppDeepState_NumericMatrix();
  std::string D_status_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ivsacim/inst/testfiles/ivsacim_est/libFuzzer_ivsacim_est/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_D_status.qs";
  qs::c_qsave(D_status,D_status_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "D_status values: "<< D_status << std::endl;
  NumericMatrix eps_2  = RcppDeepState_NumericMatrix();
  std::string eps_2_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ivsacim/inst/testfiles/ivsacim_est/libFuzzer_ivsacim_est/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_eps_2.qs";
  qs::c_qsave(eps_2,eps_2_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "eps_2 values: "<< eps_2 << std::endl;
  NumericMatrix Zc_dot  = RcppDeepState_NumericMatrix();
  std::string Zc_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ivsacim/inst/testfiles/ivsacim_est/libFuzzer_ivsacim_est/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_Zc.qs";
  std::string Zc_dot_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ivsacim/inst/testfiles/ivsacim_est/libFuzzer_ivsacim_est/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_Zc_dot.qs";
  qs::c_qsave(Zc_dot,Zc_dot_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Zc_dot values: "<< Zc_dot << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    ivsacim_est(time,event,stime,Zc,D_status,eps_2,Zc_dot);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
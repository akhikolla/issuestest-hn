// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// B_est1_DeepState_TestHarness_generation.cpp and B_est1_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

SEXP B_est1(NumericVector time, NumericVector status, NumericVector stime, NumericVector stime1, NumericVector G, NumericVector X, double tau_bet, NumericMatrix epstheta, NumericMatrix Edot, double pdim);

TEST(ivtools_deepstate_test,B_est1_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector time  = RcppDeepState_NumericVector();
  qs::c_qsave(time,"/home/akhila/fuzzer_packages/fuzzedpackages/ivtools/inst/testfiles/B_est1/inputs/time.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "time values: "<< time << std::endl;
  NumericVector status  = RcppDeepState_NumericVector();
  qs::c_qsave(status,"/home/akhila/fuzzer_packages/fuzzedpackages/ivtools/inst/testfiles/B_est1/inputs/status.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "status values: "<< status << std::endl;
  NumericVector stime  = RcppDeepState_NumericVector();
  qs::c_qsave(stime,"/home/akhila/fuzzer_packages/fuzzedpackages/ivtools/inst/testfiles/B_est1/inputs/stime.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "stime values: "<< stime << std::endl;
  NumericVector stime1  = RcppDeepState_NumericVector();
  qs::c_qsave(stime1,"/home/akhila/fuzzer_packages/fuzzedpackages/ivtools/inst/testfiles/B_est1/inputs/stime1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "stime1 values: "<< stime1 << std::endl;
  NumericVector G  = RcppDeepState_NumericVector();
  qs::c_qsave(G,"/home/akhila/fuzzer_packages/fuzzedpackages/ivtools/inst/testfiles/B_est1/inputs/G.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "G values: "<< G << std::endl;
  NumericVector X  = RcppDeepState_NumericVector();
  qs::c_qsave(X,"/home/akhila/fuzzer_packages/fuzzedpackages/ivtools/inst/testfiles/B_est1/inputs/X.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "X values: "<< X << std::endl;
  NumericVector tau_bet(1);
  tau_bet[0]  = RcppDeepState_double();
  qs::c_qsave(tau_bet,"/home/akhila/fuzzer_packages/fuzzedpackages/ivtools/inst/testfiles/B_est1/inputs/tau_bet.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tau_bet values: "<< tau_bet << std::endl;
  NumericMatrix epstheta  = RcppDeepState_NumericMatrix();
  qs::c_qsave(epstheta,"/home/akhila/fuzzer_packages/fuzzedpackages/ivtools/inst/testfiles/B_est1/inputs/epstheta.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "epstheta values: "<< epstheta << std::endl;
  NumericMatrix Edot  = RcppDeepState_NumericMatrix();
  qs::c_qsave(Edot,"/home/akhila/fuzzer_packages/fuzzedpackages/ivtools/inst/testfiles/B_est1/inputs/Edot.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Edot values: "<< Edot << std::endl;
  NumericVector pdim(1);
  pdim[0]  = RcppDeepState_double();
  qs::c_qsave(pdim,"/home/akhila/fuzzer_packages/fuzzedpackages/ivtools/inst/testfiles/B_est1/inputs/pdim.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pdim values: "<< pdim << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    B_est1(time,status,stime,stime1,G,X,tau_bet[0],epstheta,Edot,pdim[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

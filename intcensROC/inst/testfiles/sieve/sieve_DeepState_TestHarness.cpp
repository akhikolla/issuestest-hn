// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// sieve_DeepState_TestHarness_generation.cpp and sieve_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector sieve(NumericVector Utmp, NumericVector Vtmp, NumericVector Markertmp, NumericVector Deltatmp, NumericVector KnotI, NumericVector KnotM, int ki);

TEST(intcensROC_deepstate_test,sieve_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector Utmp  = RcppDeepState_NumericVector();
  qs::c_qsave(Utmp,"/home/akhila/fuzzer_packages/fuzzedpackages/intcensROC/inst/testfiles/sieve/inputs/Utmp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Utmp values: "<< Utmp << std::endl;
  NumericVector Vtmp  = RcppDeepState_NumericVector();
  qs::c_qsave(Vtmp,"/home/akhila/fuzzer_packages/fuzzedpackages/intcensROC/inst/testfiles/sieve/inputs/Vtmp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Vtmp values: "<< Vtmp << std::endl;
  NumericVector Markertmp  = RcppDeepState_NumericVector();
  qs::c_qsave(Markertmp,"/home/akhila/fuzzer_packages/fuzzedpackages/intcensROC/inst/testfiles/sieve/inputs/Markertmp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Markertmp values: "<< Markertmp << std::endl;
  NumericVector Deltatmp  = RcppDeepState_NumericVector();
  qs::c_qsave(Deltatmp,"/home/akhila/fuzzer_packages/fuzzedpackages/intcensROC/inst/testfiles/sieve/inputs/Deltatmp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Deltatmp values: "<< Deltatmp << std::endl;
  NumericVector KnotI  = RcppDeepState_NumericVector();
  qs::c_qsave(KnotI,"/home/akhila/fuzzer_packages/fuzzedpackages/intcensROC/inst/testfiles/sieve/inputs/KnotI.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "KnotI values: "<< KnotI << std::endl;
  NumericVector KnotM  = RcppDeepState_NumericVector();
  qs::c_qsave(KnotM,"/home/akhila/fuzzer_packages/fuzzedpackages/intcensROC/inst/testfiles/sieve/inputs/KnotM.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "KnotM values: "<< KnotM << std::endl;
  IntegerVector ki(1);
  ki[0]  = RcppDeepState_int();
  qs::c_qsave(ki,"/home/akhila/fuzzer_packages/fuzzedpackages/intcensROC/inst/testfiles/sieve/inputs/ki.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ki values: "<< ki << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    sieve(Utmp,Vtmp,Markertmp,Deltatmp,KnotI,KnotM,ki[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

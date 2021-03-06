// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// truePos_DeepState_TestHarness_generation.cpp and truePos_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double truePos(NumericVector thetaTmp, double mtmp, double max_m_tmp, double ttmp, NumericVector KnotI, NumericVector KnotM);

TEST(intcensROC_deepstate_test,truePos_test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector thetaTmp  = RcppDeepState_NumericVector();
  std::string thetaTmp_t = "/home/akhila/fuzzer_packages/fuzzedpackages/intcensROC/inst/testfiles/truePos/AFL_truePos/afl_inputs/" + std::to_string(t) + "_thetaTmp.qs";
  qs::c_qsave(thetaTmp,thetaTmp_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "thetaTmp values: "<< thetaTmp << std::endl;
  NumericVector mtmp(1);
  mtmp[0]  = RcppDeepState_double();
  std::string mtmp_t = "/home/akhila/fuzzer_packages/fuzzedpackages/intcensROC/inst/testfiles/truePos/AFL_truePos/afl_inputs/" + std::to_string(t) + "_mtmp.qs";
  qs::c_qsave(mtmp,mtmp_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "mtmp values: "<< mtmp << std::endl;
  NumericVector max_m_tmp(1);
  max_m_tmp[0]  = RcppDeepState_double();
  std::string max_m_tmp_t = "/home/akhila/fuzzer_packages/fuzzedpackages/intcensROC/inst/testfiles/truePos/AFL_truePos/afl_inputs/" + std::to_string(t) + "_max_m_tmp.qs";
  qs::c_qsave(max_m_tmp,max_m_tmp_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "max_m_tmp values: "<< max_m_tmp << std::endl;
  NumericVector ttmp(1);
  ttmp[0]  = RcppDeepState_double();
  std::string ttmp_t = "/home/akhila/fuzzer_packages/fuzzedpackages/intcensROC/inst/testfiles/truePos/AFL_truePos/afl_inputs/" + std::to_string(t) + "_ttmp.qs";
  qs::c_qsave(ttmp,ttmp_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ttmp values: "<< ttmp << std::endl;
  NumericVector KnotI  = RcppDeepState_NumericVector();
  std::string KnotI_t = "/home/akhila/fuzzer_packages/fuzzedpackages/intcensROC/inst/testfiles/truePos/AFL_truePos/afl_inputs/" + std::to_string(t) + "_KnotI.qs";
  qs::c_qsave(KnotI,KnotI_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "KnotI values: "<< KnotI << std::endl;
  NumericVector KnotM  = RcppDeepState_NumericVector();
  std::string KnotM_t = "/home/akhila/fuzzer_packages/fuzzedpackages/intcensROC/inst/testfiles/truePos/AFL_truePos/afl_inputs/" + std::to_string(t) + "_KnotM.qs";
  qs::c_qsave(KnotM,KnotM_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "KnotM values: "<< KnotM << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    truePos(thetaTmp,mtmp[0],max_m_tmp[0],ttmp[0],KnotI,KnotM);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

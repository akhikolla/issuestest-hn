// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// surfConvHullTri_DeepState_TestHarness_generation.cpp and surfConvHullTri_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double surfConvHullTri(NumericMatrix v, NumericVector cent, NumericVector origin, double pi);

TEST(icosa_deepstate_test,surfConvHullTri_test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix v  = RcppDeepState_NumericMatrix();
  std::string v_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/surfConvHullTri/AFL_surfConvHullTri/afl_inputs/" + std::to_string(t) + "_v.qs";
  qs::c_qsave(v,v_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "v values: "<< v << std::endl;
  NumericVector cent  = RcppDeepState_NumericVector();
  std::string cent_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/surfConvHullTri/AFL_surfConvHullTri/afl_inputs/" + std::to_string(t) + "_cent.qs";
  qs::c_qsave(cent,cent_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cent values: "<< cent << std::endl;
  NumericVector origin  = RcppDeepState_NumericVector();
  std::string origin_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/surfConvHullTri/AFL_surfConvHullTri/afl_inputs/" + std::to_string(t) + "_origin.qs";
  qs::c_qsave(origin,origin_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "origin values: "<< origin << std::endl;
  NumericVector pi(1);
  pi[0]  = RcppDeepState_double();
  std::string pi_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/surfConvHullTri/AFL_surfConvHullTri/afl_inputs/" + std::to_string(t) + "_pi.qs";
  qs::c_qsave(pi,pi_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pi values: "<< pi << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    surfConvHullTri(v,cent,origin,pi[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
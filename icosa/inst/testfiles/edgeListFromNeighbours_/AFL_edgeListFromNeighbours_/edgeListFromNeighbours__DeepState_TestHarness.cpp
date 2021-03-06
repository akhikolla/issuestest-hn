// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// edgeListFromNeighbours__DeepState_TestHarness_generation.cpp and edgeListFromNeighbours__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix edgeListFromNeighbours_(NumericMatrix outN);

TEST(icosa_deepstate_test,edgeListFromNeighbours__test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix outN  = RcppDeepState_NumericMatrix();
  std::string outN_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/edgeListFromNeighbours_/AFL_edgeListFromNeighbours_/afl_inputs/" + std::to_string(t) + "_outN.qs";
  qs::c_qsave(outN,outN_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "outN values: "<< outN << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    edgeListFromNeighbours_(outN);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

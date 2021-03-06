// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// EdgesToFaces__DeepState_TestHarness_generation.cpp and EdgesToFaces__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix EdgesToFaces_(NumericMatrix edges);

TEST(icosa_deepstate_test,EdgesToFaces__test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix edges  = RcppDeepState_NumericMatrix();
  std::string edges_t = "/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/EdgesToFaces_/libFuzzer_EdgesToFaces_/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_edges.qs";
  qs::c_qsave(edges,edges_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "edges values: "<< edges << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    EdgesToFaces_(edges);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

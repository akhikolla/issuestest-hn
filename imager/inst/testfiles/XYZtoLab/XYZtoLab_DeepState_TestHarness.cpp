// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// XYZtoLab_DeepState_TestHarness_generation.cpp and XYZtoLab_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector XYZtoLab(NumericVector im);

TEST(imager_deepstate_test,XYZtoLab_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector im  = RcppDeepState_NumericVector();
  qs::c_qsave(im,"/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/XYZtoLab/inputs/im.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "im values: "<< im << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    XYZtoLab(im);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

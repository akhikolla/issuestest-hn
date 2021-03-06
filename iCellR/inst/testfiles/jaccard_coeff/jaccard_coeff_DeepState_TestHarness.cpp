#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix jaccard_coeff(NumericMatrix idx);

TEST(iCellR_deepstate_test,jaccard_coeff_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix idx  = RcppDeepState_NumericMatrix();
  qs::c_qsave(idx,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/iCellR/inst/testfiles/jaccard_coeff/inputs/idx.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "idx values: "<< idx << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    jaccard_coeff(idx);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

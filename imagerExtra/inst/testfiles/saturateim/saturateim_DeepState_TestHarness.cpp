#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericVector saturateim(Rcpp::NumericVector data, double max_im, double min_im, double max_range, double min_range);

TEST(imagerExtra_deepstate_test,saturateim_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector data  = RcppDeepState_NumericVector();
  qs::c_qsave(data,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/saturateim/inputs/data.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "data values: "<< data << std::endl;
  NumericVector max_im(1);
  max_im[0]  = RcppDeepState_double();
  qs::c_qsave(max_im,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/saturateim/inputs/max_im.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "max_im values: "<< max_im << std::endl;
  NumericVector min_im(1);
  min_im[0]  = RcppDeepState_double();
  qs::c_qsave(min_im,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/saturateim/inputs/min_im.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "min_im values: "<< min_im << std::endl;
  NumericVector max_range(1);
  max_range[0]  = RcppDeepState_double();
  qs::c_qsave(max_range,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/saturateim/inputs/max_range.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "max_range values: "<< max_range << std::endl;
  NumericVector min_range(1);
  min_range[0]  = RcppDeepState_double();
  qs::c_qsave(min_range,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/saturateim/inputs/min_range.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "min_range values: "<< min_range << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    saturateim(data,max_im[0],min_im[0],max_range[0],min_range[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

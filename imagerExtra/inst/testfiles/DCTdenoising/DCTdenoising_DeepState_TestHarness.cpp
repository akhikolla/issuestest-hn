#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericMatrix DCTdenoising(Rcpp::NumericMatrix ipixelsR, int width, int height, double sigma, int flag_dct16x16);

TEST(imagerExtra_deepstate_test,DCTdenoising_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix ipixelsR  = RcppDeepState_NumericMatrix();
  qs::c_qsave(ipixelsR,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/DCTdenoising/inputs/ipixelsR.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ipixelsR values: "<< ipixelsR << std::endl;
  IntegerVector width(1);
  width[0]  = RcppDeepState_int();
  qs::c_qsave(width,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/DCTdenoising/inputs/width.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "width values: "<< width << std::endl;
  IntegerVector height(1);
  height[0]  = RcppDeepState_int();
  qs::c_qsave(height,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/DCTdenoising/inputs/height.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "height values: "<< height << std::endl;
  NumericVector sigma(1);
  sigma[0]  = RcppDeepState_double();
  qs::c_qsave(sigma,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/DCTdenoising/inputs/sigma.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sigma values: "<< sigma << std::endl;
  IntegerVector flag_dct16x16(1);
  flag_dct16x16[0]  = RcppDeepState_int();
  qs::c_qsave(flag_dct16x16,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/DCTdenoising/inputs/flag_dct16x16.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "flag_dct16x16 values: "<< flag_dct16x16 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    DCTdenoising(ipixelsR,width[0],height[0],sigma[0],flag_dct16x16[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

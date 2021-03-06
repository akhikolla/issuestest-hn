#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::IntegerVector get_threshold_multilevel(Rcpp::NumericVector im_density, Rcpp::NumericVector im_integral_density, int n_thres, int sn, int mcn, int limit);

TEST(imagerExtra_deepstate_test,get_threshold_multilevel_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector im_density  = RcppDeepState_NumericVector();
  qs::c_qsave(im_density,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/get_threshold_multilevel/inputs/im_density.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "im_density values: "<< im_density << std::endl;
  NumericVector im_integral_density  = RcppDeepState_NumericVector();
  qs::c_qsave(im_integral_density,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/get_threshold_multilevel/inputs/im_integral_density.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "im_integral_density values: "<< im_integral_density << std::endl;
  IntegerVector n_thres(1);
  n_thres[0]  = RcppDeepState_int();
  qs::c_qsave(n_thres,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/get_threshold_multilevel/inputs/n_thres.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n_thres values: "<< n_thres << std::endl;
  IntegerVector sn(1);
  sn[0]  = RcppDeepState_int();
  qs::c_qsave(sn,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/get_threshold_multilevel/inputs/sn.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sn values: "<< sn << std::endl;
  IntegerVector mcn(1);
  mcn[0]  = RcppDeepState_int();
  qs::c_qsave(mcn,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/get_threshold_multilevel/inputs/mcn.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "mcn values: "<< mcn << std::endl;
  IntegerVector limit(1);
  limit[0]  = RcppDeepState_int();
  qs::c_qsave(limit,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/get_threshold_multilevel/inputs/limit.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "limit values: "<< limit << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    get_threshold_multilevel(im_density,im_integral_density,n_thres[0],sn[0],mcn[0],limit[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

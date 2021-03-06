#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericVector piecewise_transformation(Rcpp::NumericVector data, Rcpp::NumericVector F, int N, double smax, double smin, double max, double min, double max_range, double min_range);

TEST(imagerExtra_deepstate_test,piecewise_transformation_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector data  = RcppDeepState_NumericVector();
  qs::c_qsave(data,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/piecewise_transformation/inputs/data.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "data values: "<< data << std::endl;
  NumericVector F  = RcppDeepState_NumericVector();
  qs::c_qsave(F,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/piecewise_transformation/inputs/F.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "F values: "<< F << std::endl;
  IntegerVector N(1);
  N[0]  = RcppDeepState_int();
  qs::c_qsave(N,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/piecewise_transformation/inputs/N.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "N values: "<< N << std::endl;
  NumericVector smax(1);
  smax[0]  = RcppDeepState_double();
  qs::c_qsave(smax,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/piecewise_transformation/inputs/smax.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "smax values: "<< smax << std::endl;
  NumericVector smin(1);
  smin[0]  = RcppDeepState_double();
  qs::c_qsave(smin,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/piecewise_transformation/inputs/smin.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "smin values: "<< smin << std::endl;
  NumericVector max(1);
  max[0]  = RcppDeepState_double();
  qs::c_qsave(max,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/piecewise_transformation/inputs/max.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "max values: "<< max << std::endl;
  NumericVector min(1);
  min[0]  = RcppDeepState_double();
  qs::c_qsave(min,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/piecewise_transformation/inputs/min.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "min values: "<< min << std::endl;
  NumericVector max_range(1);
  max_range[0]  = RcppDeepState_double();
  qs::c_qsave(max_range,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/piecewise_transformation/inputs/max_range.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "max_range values: "<< max_range << std::endl;
  NumericVector min_range(1);
  min_range[0]  = RcppDeepState_double();
  qs::c_qsave(min_range,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/piecewise_transformation/inputs/min_range.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "min_range values: "<< min_range << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    piecewise_transformation(data,F,N[0],smax[0],smin[0],max[0],min[0],max_range[0],min_range[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

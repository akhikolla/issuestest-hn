#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List ChanVese(Rcpp::NumericMatrix im, double Mu, double Nu, double Lambda1, double Lambda2, double tol, int maxiter, double dt, Rcpp::NumericMatrix phi);

TEST(imagerExtra_deepstate_test,ChanVese_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix im  = RcppDeepState_NumericMatrix();
  qs::c_qsave(im,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/ChanVese/inputs/im.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "im values: "<< im << std::endl;
  NumericVector Mu(1);
  Mu[0]  = RcppDeepState_double();
  qs::c_qsave(Mu,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/ChanVese/inputs/Mu.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Mu values: "<< Mu << std::endl;
  NumericVector Nu(1);
  Nu[0]  = RcppDeepState_double();
  qs::c_qsave(Nu,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/ChanVese/inputs/Nu.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Nu values: "<< Nu << std::endl;
  NumericVector Lambda1(1);
  Lambda1[0]  = RcppDeepState_double();
  qs::c_qsave(Lambda1,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/ChanVese/inputs/Lambda1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Lambda1 values: "<< Lambda1 << std::endl;
  NumericVector Lambda2(1);
  Lambda2[0]  = RcppDeepState_double();
  qs::c_qsave(Lambda2,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/ChanVese/inputs/Lambda2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Lambda2 values: "<< Lambda2 << std::endl;
  NumericVector tol(1);
  tol[0]  = RcppDeepState_double();
  qs::c_qsave(tol,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/ChanVese/inputs/tol.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tol values: "<< tol << std::endl;
  IntegerVector maxiter(1);
  maxiter[0]  = RcppDeepState_int();
  qs::c_qsave(maxiter,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/ChanVese/inputs/maxiter.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "maxiter values: "<< maxiter << std::endl;
  NumericVector dt(1);
  dt[0]  = RcppDeepState_double();
  qs::c_qsave(dt,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/ChanVese/inputs/dt.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dt values: "<< dt << std::endl;
  NumericMatrix phi  = RcppDeepState_NumericMatrix();
  qs::c_qsave(phi,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/imagerExtra/inst/testfiles/ChanVese/inputs/phi.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "phi values: "<< phi << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    ChanVese(im,Mu[0],Nu[0],Lambda1[0],Lambda2[0],tol[0],maxiter[0],dt[0],phi);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

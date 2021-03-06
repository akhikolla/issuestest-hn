#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix timeMat(int nsub, int J, NumericVector time, NumericVector utime, NumericMatrix Xmat);

TEST(icensmis_deepstate_test,timeMat_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector nsub(1);
  nsub[0]  = RcppDeepState_int();
  qs::c_qsave(nsub,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/icensmis/inst/testfiles/timeMat/inputs/nsub.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nsub values: "<< nsub << std::endl;
  IntegerVector J(1);
  J[0]  = RcppDeepState_int();
  qs::c_qsave(J,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/icensmis/inst/testfiles/timeMat/inputs/J.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "J values: "<< J << std::endl;
  NumericVector time  = RcppDeepState_NumericVector();
  qs::c_qsave(time,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/icensmis/inst/testfiles/timeMat/inputs/time.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "time values: "<< time << std::endl;
  NumericVector utime  = RcppDeepState_NumericVector();
  qs::c_qsave(utime,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/icensmis/inst/testfiles/timeMat/inputs/utime.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "utime values: "<< utime << std::endl;
  NumericMatrix Xmat  = RcppDeepState_NumericMatrix();
  qs::c_qsave(Xmat,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/icensmis/inst/testfiles/timeMat/inputs/Xmat.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Xmat values: "<< Xmat << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    timeMat(nsub[0],J[0],time,utime,Xmat);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

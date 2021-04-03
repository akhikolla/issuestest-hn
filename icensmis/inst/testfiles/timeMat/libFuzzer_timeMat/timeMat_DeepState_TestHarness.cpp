#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix timeMat(int nsub, int J, NumericVector time, NumericVector utime, NumericMatrix Xmat);

TEST(icensmis_deepstate_test,timeMat_test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  IntegerVector nsub(1);
  nsub[0]  = RcppDeepState_int();
  std::string nsub_t = "/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/icensmis/inst/testfiles/timeMat/libFuzzer_timeMat/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_nsub.qs";
  qs::c_qsave(nsub,nsub_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nsub values: "<< nsub << std::endl;
  IntegerVector J(1);
  J[0]  = RcppDeepState_int();
  std::string J_t = "/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/icensmis/inst/testfiles/timeMat/libFuzzer_timeMat/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_J.qs";
  qs::c_qsave(J,J_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "J values: "<< J << std::endl;
  NumericVector time  = RcppDeepState_NumericVector();
  std::string time_t = "/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/icensmis/inst/testfiles/timeMat/libFuzzer_timeMat/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_time.qs";
  qs::c_qsave(time,time_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "time values: "<< time << std::endl;
  NumericVector utime  = RcppDeepState_NumericVector();
  std::string utime_t = "/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/icensmis/inst/testfiles/timeMat/libFuzzer_timeMat/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_utime.qs";
  qs::c_qsave(utime,utime_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "utime values: "<< utime << std::endl;
  NumericMatrix Xmat  = RcppDeepState_NumericMatrix();
  std::string Xmat_t = "/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/icensmis/inst/testfiles/timeMat/libFuzzer_timeMat/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_Xmat.qs";
  qs::c_qsave(Xmat,Xmat_t,
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
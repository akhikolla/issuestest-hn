#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix powerdmat1(double phi1, double phi0, int J, double negpred);

TEST(icensmis_deepstate_test,powerdmat1_test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector phi1(1);
  phi1[0]  = RcppDeepState_double();
  std::string phi1_t = "/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/icensmis/inst/testfiles/powerdmat1/AFL_powerdmat1/afl_inputs/" + std::to_string(t) + "_phi1.qs";
  qs::c_qsave(phi1,phi1_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "phi1 values: "<< phi1 << std::endl;
  NumericVector phi0(1);
  phi0[0]  = RcppDeepState_double();
  std::string phi0_t = "/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/icensmis/inst/testfiles/powerdmat1/AFL_powerdmat1/afl_inputs/" + std::to_string(t) + "_phi0.qs";
  qs::c_qsave(phi0,phi0_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "phi0 values: "<< phi0 << std::endl;
  IntegerVector J(1);
  J[0]  = RcppDeepState_int();
  std::string J_t = "/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/icensmis/inst/testfiles/powerdmat1/AFL_powerdmat1/afl_inputs/" + std::to_string(t) + "_J.qs";
  qs::c_qsave(J,J_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "J values: "<< J << std::endl;
  NumericVector negpred(1);
  negpred[0]  = RcppDeepState_double();
  std::string negpred_t = "/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/icensmis/inst/testfiles/powerdmat1/AFL_powerdmat1/afl_inputs/" + std::to_string(t) + "_negpred.qs";
  qs::c_qsave(negpred,negpred_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "negpred values: "<< negpred << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    powerdmat1(phi1[0],phi0[0],J[0],negpred[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericVector immer_cmml_derivative_designmatrix(Rcpp::NumericMatrix probs_der_par, Rcpp::NumericMatrix W_par, Rcpp::NumericVector par, Rcpp::NumericVector do_log);

TEST(immer_deepstate_test,immer_cmml_derivative_designmatrix_test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix probs_der_par  = RcppDeepState_NumericMatrix();
  std::string probs_der_par_t = "/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_cmml_derivative_designmatrix/AFL_immer_cmml_derivative_designmatrix/afl_inputs/" + std::to_string(t) + "_probs_der_par.qs";
  qs::c_qsave(probs_der_par,probs_der_par_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "probs_der_par values: "<< probs_der_par << std::endl;
  NumericMatrix W_par  = RcppDeepState_NumericMatrix();
  std::string W_par_t = "/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_cmml_derivative_designmatrix/AFL_immer_cmml_derivative_designmatrix/afl_inputs/" + std::to_string(t) + "_W_par.qs";
  qs::c_qsave(W_par,W_par_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "W_par values: "<< W_par << std::endl;
  NumericVector par  = RcppDeepState_NumericVector();
  std::string par_t = "/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_cmml_derivative_designmatrix/AFL_immer_cmml_derivative_designmatrix/afl_inputs/" + std::to_string(t) + "_par.qs";
  qs::c_qsave(par,par_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "par values: "<< par << std::endl;
  NumericVector do_log  = RcppDeepState_NumericVector();
  std::string do_log_t = "/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_cmml_derivative_designmatrix/AFL_immer_cmml_derivative_designmatrix/afl_inputs/" + std::to_string(t) + "_do_log.qs";
  qs::c_qsave(do_log,do_log_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "do_log values: "<< do_log << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    immer_cmml_derivative_designmatrix(probs_der_par,W_par,par,do_log);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

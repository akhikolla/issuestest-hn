#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double immer_ccml_opt_function(Rcpp::NumericMatrix b, Rcpp::NumericVector ll_index1, Rcpp::NumericVector item10, Rcpp::NumericVector item20, Rcpp::NumericVector cat1, Rcpp::NumericVector cat2, Rcpp::NumericVector n, Rcpp::NumericVector ntot, int max_ll_index);

TEST(immer_deepstate_test,immer_ccml_opt_function_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix b  = RcppDeepState_NumericMatrix();
  qs::c_qsave(b,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_opt_function/inputs/b.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "b values: "<< b << std::endl;
  NumericVector ll_index1  = RcppDeepState_NumericVector();
  qs::c_qsave(ll_index1,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_opt_function/inputs/ll_index1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ll_index1 values: "<< ll_index1 << std::endl;
  NumericVector item10  = RcppDeepState_NumericVector();
  qs::c_qsave(item10,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_opt_function/inputs/item10.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "item10 values: "<< item10 << std::endl;
  NumericVector item20  = RcppDeepState_NumericVector();
  qs::c_qsave(item20,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_opt_function/inputs/item20.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "item20 values: "<< item20 << std::endl;
  NumericVector cat1  = RcppDeepState_NumericVector();
  qs::c_qsave(cat1,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_opt_function/inputs/cat1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cat1 values: "<< cat1 << std::endl;
  NumericVector cat2  = RcppDeepState_NumericVector();
  qs::c_qsave(cat2,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_opt_function/inputs/cat2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cat2 values: "<< cat2 << std::endl;
  NumericVector n  = RcppDeepState_NumericVector();
  qs::c_qsave(n,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_opt_function/inputs/n.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n values: "<< n << std::endl;
  NumericVector ntot  = RcppDeepState_NumericVector();
  qs::c_qsave(ntot,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_opt_function/inputs/ntot.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ntot values: "<< ntot << std::endl;
  IntegerVector max_ll_index(1);
  max_ll_index[0]  = RcppDeepState_int();
  qs::c_qsave(max_ll_index,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_opt_function/inputs/max_ll_index.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "max_ll_index values: "<< max_ll_index << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    immer_ccml_opt_function(b,ll_index1,item10,item20,cat1,cat2,n,ntot,max_ll_index[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

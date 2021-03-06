#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericVector immer_ccml_probs_from_par(Rcpp::NumericMatrix b_fixed, Rcpp::NumericVector A_, Rcpp::NumericVector par, Rcpp::NumericVector ll_index1, Rcpp::NumericVector item10, Rcpp::NumericVector item20, Rcpp::NumericVector cat1, Rcpp::NumericVector cat2, int max_ll_index, int pp1, int pp2, double h1, double h2);

TEST(immer_deepstate_test,immer_ccml_probs_from_par_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix b_fixed  = RcppDeepState_NumericMatrix();
  qs::c_qsave(b_fixed,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_probs_from_par/inputs/b_fixed.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "b_fixed values: "<< b_fixed << std::endl;
  NumericVector A_  = RcppDeepState_NumericVector();
  qs::c_qsave(A_,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_probs_from_par/inputs/A_.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "A_ values: "<< A_ << std::endl;
  NumericVector par  = RcppDeepState_NumericVector();
  qs::c_qsave(par,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_probs_from_par/inputs/par.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "par values: "<< par << std::endl;
  NumericVector ll_index1  = RcppDeepState_NumericVector();
  qs::c_qsave(ll_index1,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_probs_from_par/inputs/ll_index1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ll_index1 values: "<< ll_index1 << std::endl;
  NumericVector item10  = RcppDeepState_NumericVector();
  qs::c_qsave(item10,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_probs_from_par/inputs/item10.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "item10 values: "<< item10 << std::endl;
  NumericVector item20  = RcppDeepState_NumericVector();
  qs::c_qsave(item20,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_probs_from_par/inputs/item20.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "item20 values: "<< item20 << std::endl;
  NumericVector cat1  = RcppDeepState_NumericVector();
  qs::c_qsave(cat1,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_probs_from_par/inputs/cat1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cat1 values: "<< cat1 << std::endl;
  NumericVector cat2  = RcppDeepState_NumericVector();
  qs::c_qsave(cat2,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_probs_from_par/inputs/cat2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cat2 values: "<< cat2 << std::endl;
  IntegerVector max_ll_index(1);
  max_ll_index[0]  = RcppDeepState_int();
  qs::c_qsave(max_ll_index,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_probs_from_par/inputs/max_ll_index.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "max_ll_index values: "<< max_ll_index << std::endl;
  IntegerVector pp1(1);
  pp1[0]  = RcppDeepState_int();
  qs::c_qsave(pp1,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_probs_from_par/inputs/pp1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pp1 values: "<< pp1 << std::endl;
  IntegerVector pp2(1);
  pp2[0]  = RcppDeepState_int();
  qs::c_qsave(pp2,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_probs_from_par/inputs/pp2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pp2 values: "<< pp2 << std::endl;
  NumericVector h1(1);
  h1[0]  = RcppDeepState_double();
  qs::c_qsave(h1,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_probs_from_par/inputs/h1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "h1 values: "<< h1 << std::endl;
  NumericVector h2(1);
  h2[0]  = RcppDeepState_double();
  qs::c_qsave(h2,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_ccml_probs_from_par/inputs/h2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "h2 values: "<< h2 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    immer_ccml_probs_from_par(b_fixed,A_,par,ll_index1,item10,item20,cat1,cat2,max_ll_index[0],pp1[0],pp2[0],h1[0],h2[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

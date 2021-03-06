#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericVector immer_latent_regression_calc_individual_likelihood_increment(Rcpp::NumericMatrix X, Rcpp::IntegerVector group, int G, Rcpp::NumericVector pars, Rcpp::NumericVector theta, Rcpp::NumericVector weights, Rcpp::NumericMatrix like, int pos1, double h1, int pos2, double h2);

TEST(immer_deepstate_test,immer_latent_regression_calc_individual_likelihood_increment_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix X  = RcppDeepState_NumericMatrix();
  qs::c_qsave(X,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_latent_regression_calc_individual_likelihood_increment/inputs/X.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "X values: "<< X << std::endl;
  IntegerVector group  = RcppDeepState_IntegerVector();
  qs::c_qsave(group,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_latent_regression_calc_individual_likelihood_increment/inputs/group.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "group values: "<< group << std::endl;
  IntegerVector G(1);
  G[0]  = RcppDeepState_int();
  qs::c_qsave(G,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_latent_regression_calc_individual_likelihood_increment/inputs/G.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "G values: "<< G << std::endl;
  NumericVector pars  = RcppDeepState_NumericVector();
  qs::c_qsave(pars,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_latent_regression_calc_individual_likelihood_increment/inputs/pars.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pars values: "<< pars << std::endl;
  NumericVector theta  = RcppDeepState_NumericVector();
  qs::c_qsave(theta,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_latent_regression_calc_individual_likelihood_increment/inputs/theta.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "theta values: "<< theta << std::endl;
  NumericVector weights  = RcppDeepState_NumericVector();
  qs::c_qsave(weights,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_latent_regression_calc_individual_likelihood_increment/inputs/weights.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weights values: "<< weights << std::endl;
  NumericMatrix like  = RcppDeepState_NumericMatrix();
  qs::c_qsave(like,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_latent_regression_calc_individual_likelihood_increment/inputs/like.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "like values: "<< like << std::endl;
  IntegerVector pos1(1);
  pos1[0]  = RcppDeepState_int();
  qs::c_qsave(pos1,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_latent_regression_calc_individual_likelihood_increment/inputs/pos1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pos1 values: "<< pos1 << std::endl;
  NumericVector h1(1);
  h1[0]  = RcppDeepState_double();
  qs::c_qsave(h1,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_latent_regression_calc_individual_likelihood_increment/inputs/h1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "h1 values: "<< h1 << std::endl;
  IntegerVector pos2(1);
  pos2[0]  = RcppDeepState_int();
  qs::c_qsave(pos2,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_latent_regression_calc_individual_likelihood_increment/inputs/pos2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pos2 values: "<< pos2 << std::endl;
  NumericVector h2(1);
  h2[0]  = RcppDeepState_double();
  qs::c_qsave(h2,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/immer/inst/testfiles/immer_latent_regression_calc_individual_likelihood_increment/inputs/h2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "h2 values: "<< h2 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    immer_latent_regression_calc_individual_likelihood_increment(X,group,G[0],pars,theta,weights,like,pos1[0],h1[0],pos2[0],h2[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

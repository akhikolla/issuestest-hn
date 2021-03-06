// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// extract_patches3D_DeepState_TestHarness_generation.cpp and extract_patches3D_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List extract_patches3D(NumericVector im, IntegerVector cx, IntegerVector cy, IntegerVector cz, IntegerVector wx, IntegerVector wy, IntegerVector wz, int boundary_conditions);

TEST(imager_deepstate_test,extract_patches3D_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector im  = RcppDeepState_NumericVector();
  qs::c_qsave(im,"/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/extract_patches3D/inputs/im.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "im values: "<< im << std::endl;
  IntegerVector cx  = RcppDeepState_IntegerVector();
  qs::c_qsave(cx,"/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/extract_patches3D/inputs/cx.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cx values: "<< cx << std::endl;
  IntegerVector cy  = RcppDeepState_IntegerVector();
  qs::c_qsave(cy,"/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/extract_patches3D/inputs/cy.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cy values: "<< cy << std::endl;
  IntegerVector cz  = RcppDeepState_IntegerVector();
  qs::c_qsave(cz,"/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/extract_patches3D/inputs/cz.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cz values: "<< cz << std::endl;
  IntegerVector wx  = RcppDeepState_IntegerVector();
  qs::c_qsave(wx,"/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/extract_patches3D/inputs/wx.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "wx values: "<< wx << std::endl;
  IntegerVector wy  = RcppDeepState_IntegerVector();
  qs::c_qsave(wy,"/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/extract_patches3D/inputs/wy.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "wy values: "<< wy << std::endl;
  IntegerVector wz  = RcppDeepState_IntegerVector();
  qs::c_qsave(wz,"/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/extract_patches3D/inputs/wz.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "wz values: "<< wz << std::endl;
  IntegerVector boundary_conditions(1);
  boundary_conditions[0]  = RcppDeepState_int();
  qs::c_qsave(boundary_conditions,"/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/extract_patches3D/inputs/boundary_conditions.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "boundary_conditions values: "<< boundary_conditions << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    extract_patches3D(im,cx,cy,cz,wx,wy,wz,boundary_conditions[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

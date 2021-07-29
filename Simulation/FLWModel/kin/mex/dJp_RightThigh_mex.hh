/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:53 GMT-05:00
 */

#ifndef DJP_RIGHTTHIGH_MEX_HH
#define DJP_RIGHTTHIGH_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void dJp_RightThigh_mex_raw(double *p_output1, const double *var1,const double *var2);

  inline void dJp_RightThigh_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 7);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dJp_RightThigh_mex_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DJP_RIGHTTHIGH_MEX_HH

/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:13 GMT-05:00
 */

#ifndef JB_HEAD_MEX_HH
#define JB_HEAD_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void Jb_Head_mex_raw(double *p_output1, const double *var1);

  inline void Jb_Head_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 7);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jb_Head_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JB_HEAD_MEX_HH

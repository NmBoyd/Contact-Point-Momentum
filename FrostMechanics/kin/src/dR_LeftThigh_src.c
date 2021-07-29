/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftThigh_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1390;
  double t1391;
  double t1392;
  double t1396;
  double t1397;
  double t1398;
  double t1399;
  double t1403;
  double t1404;
  double t1405;
  double t1409;
  double t1410;
  double t1411;
  double t1400;
  double t1401;
  double t1402;
  t1390 = Cos(var1[3]);
  t1391 = Sin(var1[2]);
  t1392 = -1.*t1390*t1391;
  t1396 = Cos(var1[2]);
  t1397 = Sin(var1[3]);
  t1398 = -1.*t1396*t1397;
  t1399 = t1392 + t1398;
  t1403 = -1.*t1396*t1390;
  t1404 = t1391*t1397;
  t1405 = t1403 + t1404;
  t1409 = t1396*t1390;
  t1410 = -1.*t1391*t1397;
  t1411 = t1409 + t1410;
  t1400 = var2[2]*t1399;
  t1401 = var2[3]*t1399;
  t1402 = t1400 + t1401;
  p_output1[0]=t1402;
  p_output1[1]=0;
  p_output1[2]=t1405*var2[2] + t1405*var2[3];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t1411*var2[2] + t1411*var2[3];
  p_output1[7]=0;
  p_output1[8]=t1402;
}



void dR_LeftThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

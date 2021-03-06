/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToe_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t1938;
  double t2335;
  double t900;
  double t2340;
  double t67;
  double t2334;
  double t2370;
  double t2410;
  double t2424;
  double t2413;
  double t2414;
  double t2415;
  double t2411;
  double t2427;
  double t2428;
  double t2429;
  t1938 = Cos(var1[3]);
  t2335 = Sin(var1[2]);
  t900 = Cos(var1[2]);
  t2340 = Sin(var1[3]);
  t67 = Cos(var1[4]);
  t2334 = t900*t1938;
  t2370 = -1.*t2335*t2340;
  t2410 = t2334 + t2370;
  t2424 = Sin(var1[4]);
  t2413 = t1938*t2335;
  t2414 = t900*t2340;
  t2415 = t2413 + t2414;
  t2411 = t67*t2410;
  t2427 = -1.*t1938*t2335;
  t2428 = -1.*t900*t2340;
  t2429 = t2427 + t2428;
  p_output1[0]=t2411 - 1.*t2415*t2424;
  p_output1[1]=0.;
  p_output1[2]=-1.*t2410*t2424 + t2429*t67;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=t2410*t2424 + t2415*t67;
  p_output1[7]=0.;
  p_output1[8]=t2411 + t2424*t2429;
}



void R_LeftToe_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

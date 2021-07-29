/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:16 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftHip_src.h"

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
  double t2437;
  double t2438;
  double t2439;
  double t2443;
  double t2444;
  double t2445;
  double t2446;
  double t2450;
  double t2451;
  double t2452;
  double t2456;
  double t2457;
  double t2458;
  double t2447;
  double t2448;
  double t2449;
  t2437 = Cos(var1[3]);
  t2438 = Sin(var1[2]);
  t2439 = -1.*t2437*t2438;
  t2443 = Cos(var1[2]);
  t2444 = Sin(var1[3]);
  t2445 = -1.*t2443*t2444;
  t2446 = t2439 + t2445;
  t2450 = -1.*t2443*t2437;
  t2451 = t2438*t2444;
  t2452 = t2450 + t2451;
  t2456 = t2443*t2437;
  t2457 = -1.*t2438*t2444;
  t2458 = t2456 + t2457;
  t2447 = var2[2]*t2446;
  t2448 = var2[3]*t2446;
  t2449 = t2447 + t2448;
  p_output1[0]=t2449;
  p_output1[1]=0;
  p_output1[2]=t2452*var2[2] + t2452*var2[3];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t2458*var2[2] + t2458*var2[3];
  p_output1[7]=0;
  p_output1[8]=t2449;
}



void dR_LeftHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

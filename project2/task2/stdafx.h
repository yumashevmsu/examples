// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
#pragma once
double **RungeKutt(double *a, double *y0, int countY, int countA, double T, double M, int selector);

double yrp1(double *a, double y1, double y2, double y3);

double yrp2(double *a, double y1, double y2, double y4);

double yrp3(double *a, double y1, double y2, double y3);

double yrp4(double *a, double y1, double y2, double y4);

double yvp1(double *a, double y1, double y2);

double yvp2(double *a, double y1, double y2, double y3);

double yvp3(double *a, double y1, double y2, double y3);

double yip1(double *a, double y2, double y3, double t);

double yip2(double *a, double t);

double yip3(double *a);

//double yip4(double *a, double t);

double ysp1(double *a, double y1, double y2);

double ysp2(double *a, double y1, double y2, double y3);

double ysp3(double *a, double y2);

double ydp1(double *a, double y2, double y3);

double ydp2(double *a, double y1, double y2);

double ydp3(double *a, double y1, double y2);

//const double PI = 3.1415926535897932384626433832795;

double* Mfunc(double **Yres, int N, int countY, int countA);

double** Znew(double *M, double **Yres, int countY, int countA, int N);

double sumRF(double **z, int N, int countY, int k, int fix);

double sumIF(double **z, int N, int countY, int k, int fix);

double **RealFurie(double **z, int N, int countY);

double **ImFurie(double **z, int N, int countY);

double **SpectrumFunc(double **Yres, int N, int countY, int countA);


// TODO: reference additional headers your program requires here

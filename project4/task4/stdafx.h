// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
#pragma once

// TODO: reference additional headers your program requires here
/*------------------------------------------------------------*/
double func(double x1, double x2, double x3, double x4, double x5, double x6);
/*double F(double x1, double x2, double x3, double x4, double x5, double x6, double k);*/
void gradF(double x, double y, double z, double t, double p, double q, double k, int flag, double *grad);
double stopflag(double x1, double x2, double x3, double x4, double x5, double x6, double k, int flag);
/*------------------------------------------------------------*/
double func1(double x, double y);
double F1(double x, double y, double k);
double *gradF1(double x, double y, double k);
double stopflag1(double x, double y, double k);
/*------------------------------------------------------------*/
double *penalty(double eps, double* x0, double r0, double beta, double step, int & iter);
double *gradient_const(double *ik, double step, double eps, double rk, int flag, int & iter);
int max(double *ak1, double *ak2, int n);
double norma(double *a, int n);
double exactitude(double *ak1, double *ak2, int n);

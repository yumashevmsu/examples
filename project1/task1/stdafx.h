// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
#pragma once
double yf(double, int, double*);
double pn(int n, double* a, double x, int alpha);
double Fa(double *a, double *x, double k[9], int N, int alpha, int n);
double dF(double *a, int n, int N, double *x, int alpha, double k[9], int j);
double* mingradF(double *a, int n, int N, double *x, int alpha, double k[9]);
double* gradF(double *a, int n, int N, double *x, int alpha, double k[9]);
double lambda(double *a, double* amv, double* apv, double *x, double k[9], int N, int alpha, int n, int b);
int max(double *ak1, double *ak2, int n);
double norma(double *a, int n);
double exactitude(double *ak1, double *ak2, int n);
double* steepestdescent (double C, double D, double N, double eps, int n, double *k, double *a0, int &ki, double &Fres, int &alp);
double* conjugategradient (double C, double D, double N, double eps, int n, double *k, double *a0, int &ki, double &Fres, int &alp);
//System::String^ * CharToSystemString(char* ch);
// TODO: reference additional headers your program requires here

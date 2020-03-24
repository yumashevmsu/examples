#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <cstddef> 
#include <cstdlib>
#include <cmath>
using namespace System;
using namespace System::Runtime::InteropServices;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Windows::Forms::DataVisualization::Charting;

double yf(double x, int alpha, double *k) { 
	return k[0]*sin(k[1]*alpha*x)+k[2]*cos(k[3]*alpha*x)+k[4]*exp(k[5]*alpha*x)+k[6]*alpha*alpha*x*x+k[7]*alpha*x+k[8];
} 

double pn(int n, double* a, double x, int alpha) { 
	double res = a[0];
	for(int i = 1; i<=n; ++i) {
		res = res*x*alpha+a[i];
	}
	return res;
}

double Fa(double *a, double *x, double *k, int N, int alpha, int n) { 
	double res = 0;
	for(int i=0; i<=N; i++) { // i<=N
		res = res + pow(yf(x[i], alpha, k) - pn(n, a, x[i], alpha), 2); 
	}
	return res;
}

double dF(double *a, int n, int N, double *x, int alpha, double *k, int j) {
	double res = 0;
	for (int i=0; i<=N; i++) { //i<=N
		res = res + (yf(x[i], alpha, k) - pn(n, a, x[i], alpha))*pow(x[i]*alpha, (n-j));
	}
	res = res*(-2);
	return res;
}

double* gradF(double *a, int n, int N, double *x, int alpha, double *k) {
	double *grdF = new double[n+1];
	for (int j=0; j<=n; j++) {
		grdF[j] = 0;
	}
	for (int j=0; j<=n; j++) {
		grdF[j] = dF(a, n, N, x, alpha, k, j);
	}
	return grdF;
}

double* mingradF(double *a, int n, int N, double *x, int alpha, double *k) {
	double *grdF = new double[n+1];
	for (int j=0; j<=n; j++) {
		grdF[j] = 0;
	}
	for (int j=0; j<=n; j++) {
		grdF[j] = - dF(a, n, N, x, alpha, k, j);
	}
	return grdF;
}

double lambda(double *a, double* amv, double* apv, double *x, double *k, int N, int alpha, int n, int b) {
	return b*(Fa(amv, x, k, N, alpha, n)-Fa(apv, x, k, N, alpha, n))/(2*(Fa(amv, x, k, N, alpha, n)-2*Fa(a, x, k, N, alpha, n)+Fa(apv, x, k, N, alpha, n)));
}

int max(double *ak1, double *ak2, int n) {
	double p = 0;
	int index = 0;
	for (int i=0; i<=n; i++) {
		if (abs(ak1[i]-ak2[i]) > p) {
			p = abs(ak1[i]-ak2[i]);
			index = i;
		}
	}
	return index;
}

double norma(double *a, int n) {
	double res = 0;
	for (int i = 0; i<=n; i++) {
		res = res + a[i]*a[i];
	}
	res = sqrt(res);
	if (res == 0) { res = 0.0000000001; }
	return res;
}

double exactitude(double *ak1, double *ak2, int n) {
	int index = max(ak1, ak2, n);
	double exac = abs(ak2[index] - ak1[index])/norma(ak1, n);
	return exac;
}

/*System::String^ CharToSystemString(char* ch) 
{
char * chr=new char[]=ch;
System::String^ str;
for(int i=0;chr[i]!='\0';i++)
{
     str+=wchar_t(ch[i]);
}
return str;
}*/






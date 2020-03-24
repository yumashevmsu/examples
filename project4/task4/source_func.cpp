#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <cstddef> 
#include <cstdlib>
#include <math.h>

double func(double x1, double x2, double x3, double x4, double x5, double x6) {
	return (150*(pow(x2-2*x1, 4) + pow(x3-3*x1, 4) + pow(x4-4*x1, 4) + pow(x5-5*x1, 4) + pow(x6-6*x1, 4)) + pow(x1-2, 4));
}

double stopflag(double x1, double x2, double x3, double x4, double x5, double x6, double k, int flag) {
	if (flag == 1) {
		return (k*(-363 + x1*x1+x2*x2+x3*x3+x4*x4+x5*x5+x6*x6));
	}
	else {
		return 0;
	}
}

/*double F(double x1, double x2, double x3, double x4, double x5, double x6, double k) {
	if ((363-x1*x1-x2*x2-x3*x3-x4*x4-x5*x5-x6*x6) != 0) {
		return (150*(pow(x2-2*x1, 4) + pow(x3-3*x1, 4) + pow(x4-4*x1, 4) + pow(x5-5*x1, 4) + pow(x6-6*x1, 4)) + pow(x1-2, 4) + k*(1/(363-x1*x1-x2*x2-x3*x3-x4*x4-x5*x5-x6*x6)));
	}
	else {
		return (150*(pow(x2-2*x1, 4) + pow(x3-3*x1, 4) + pow(x4-4*x1, 4) + pow(x5-5*x1, 4) + pow(x6-6*x1, 4)) + pow(x1-2, 4) + k*(1/(0.000000000000000000000000000000000000000001)));
	}
}*/

void gradF(double x, double y, double z, double t, double p, double q, double k, int flag, double *grad) {
	//double *grad = nullptr;
	//grad = new double[6];
	if (flag == 0) {
		grad[0] = 150*(-20*pow(p-5*x, 3) - 24*pow(q-6*x, 3) - 16*pow(t-4*x, 3) - 8*pow(y-2*x, 3) - 12*pow(z-3*x, 3)) + 4*pow(x - 2, 3);
		grad[1] = 600*pow(y-2*x, 3);
		grad[2] = 600*pow(z-3*x, 3);
		grad[3] = 600*pow(t-4*x, 3);
		grad[4] = 600*pow(p-5*x, 3);
		grad[5] = 600*pow(q-6*x, 3);
	}
	else {
		grad[0] =  2*x*k + 150*(-20*pow(p-5*x, 3) - 24*pow(q-6*x, 3) - 16*pow(t-4*x, 3) - 8*pow(y-2*x, 3) - 12*pow(z-3*x, 3)) + 4*pow(x - 2, 3);
		grad[1] =  2*y*k + 600*pow(y-2*x, 3);
		grad[2] =  2*z*k + 600*pow(z-3*x, 3);
		grad[3] =  2*t*k + 600*pow(t-4*x, 3);
		grad[4] =  2*p*k + 600*pow(p-5*x, 3);
		grad[5] =  2*q*k + 600*pow(q-6*x, 3);
	}
	return;
}
/*--------------------------------------------------------------------------------------*/
/*double func(double x, double y) {
	return (x*x+x*y+y*y);
}

double F(double x, double y, double k) {
	return (x*x+x*y+y*y+k*((x+y-2)*(x+y-2)));
}

double *gradF(double x, double y, double k) {
	double *grad = new double[2];
	grad[0] = 2*x+y+2*k*(x+y-2);
	grad[1] = x+2*y+2*k*(x+y-2);
	return grad;
}

double stopflag(double x, double y, double k) {
	return (k*((x+y-2)*(x+y-2)));
}*/

/*-------------------------------------------------------------------------------------*/

double func1(double x, double y) {
	return (pow(x-2, 4)+pow(x-2*y, 2));
}

double F1(double x, double y, double k) {
	return (pow(x-2, 4)+pow(x-2*y, 2)+k*pow((x*x-y), 2));
}

double *gradF1(double x, double y, double k) {
	double *grad = new double[2];
	grad[0] = 2*(2*k*x*(x*x-y)+2*(x-2)*(x-2)*(x-2)+x-2*y);
	grad[1] = -2*k*x*x+2*(k+4)*y-4*x;
	return grad;
}

double stopflag1(double x, double y, double k) {
	return (k*pow((x*x-y), 2));
}

/*------------------------------------------------------------------*/

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

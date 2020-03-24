#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <cstddef> 
#include <cstdlib>
#include <math.h>

double *penalty(double eps, double* x0, double r0, double beta, double step, int & iter) {
	double *pk = nullptr;
	pk = new double[6]; //1
	double stoptest;
	double testtest;
	pk[0] = x0[0];
	pk[1] = x0[1];
	pk[2] = x0[2];
	pk[3] = x0[3];
	pk[4] = x0[4];
	pk[5] = x0[5];
	double *pk1 = nullptr;
	pk1 = new double[6]; //2
	double rk = r0;
	int k = 1; //ok
	int flag = 0;
	while (1) {
		if ((-363 + pk[0]*pk[0]+pk[1]*pk[1]+pk[2]*pk[2]+pk[3]*pk[3]+pk[4]*pk[4]+pk[5]*pk[5]) <= 0) { 
			flag = 0;
		}
		else {
			flag = 1;
		}
		pk1 = gradient_const(pk, step, eps, rk, flag, iter) ; //ok
		//stoptest = stopflag(pk1[0], pk1[1], pk1[2], pk1[3], pk1[4], pk1[5], rk, flag);
		//testtest = stoptest;
		if (abs(stopflag(pk1[0], pk1[1], pk1[2], pk1[3], pk1[4], pk1[5], rk, flag)) < eps) {
			break; //ok 
		}
		else {
			rk = rk*beta; //ok
			//k = k+1;
			pk[0] = pk1[0];
			pk[1] = pk1[1];
			pk[2] = pk1[2];
			pk[3] = pk1[3];
			pk[4] = pk1[4];
			pk[5] = pk1[5];
			iter++;
		}
	}

	delete [] pk;
	pk = nullptr;

	return pk1;
}
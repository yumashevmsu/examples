#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <cstddef> 
#include <cstdlib>
#include <math.h>

double *gradient_const(double *ik, double step, double eps, double rk, int flag, int & iter) {
	double *pk = nullptr;
	pk = new double [6];
	double funcabs;
	double *pk1 = nullptr;
	pk1 = new double [6];
	double testtest;
	int n = 6;
	double *tempgrad = nullptr;
	tempgrad = new double [6];
	pk[0] = ik[0];
	pk[1] = ik[1];
	pk[2] = ik[2];
	pk[3] = ik[3];
	pk[4] = ik[4];
	pk[5] = ik[5];
	while (1) { 
		iter ++;
		gradF(pk[0], pk[1], pk[2], pk[3], pk[4], pk[5], rk, flag, tempgrad);
		pk1[0] = pk[0] - step*tempgrad[0];
		pk1[1] = pk[1] - step*tempgrad[1];
		pk1[2] = pk[2] - step*tempgrad[2];
		pk1[3] = pk[3] - step*tempgrad[3];
		pk1[4] = pk[4] - step*tempgrad[4];
		pk1[5] = pk[5] - step*tempgrad[5];
		//funcabs = exactitude(pk, pk1, n);
		//testtest = funcabs;
		while (func(pk1[0], pk1[1], pk1[2], pk1[3], pk1[4], pk1[5]) - func(pk[0], pk[1], pk[2], pk[3], pk[4], pk[5]) > 0) {
			step = step/2;
			gradF(pk[0], pk[1], pk[2], pk[3], pk[4], pk[5], rk, flag, tempgrad);
			pk1[0] = pk[0] - step*tempgrad[0];
			pk1[1] = pk[1] - step*tempgrad[1];
			pk1[2] = pk[2] - step*tempgrad[2];
			pk1[3] = pk[3] - step*tempgrad[3];
			pk1[4] = pk[4] - step*tempgrad[4];
			pk1[5] = pk[5] - step*tempgrad[5];
		}
		if (abs(func(pk1[0], pk1[1], pk1[2], pk1[3], pk1[4], pk1[5]) - func(pk[0], pk[1], pk[2], pk[3], pk[4], pk[5])) < eps  )  {
			break;
		}
		else {
			pk[0] = pk1[0];
			pk[1] = pk1[1];
			pk[2] = pk1[2];
			pk[3] = pk1[3];
			pk[4] = pk1[4];
			pk[5] = pk1[5];
		}
	}

	delete [] pk;
	pk = nullptr;
	delete [] tempgrad;
	tempgrad = nullptr;

	return pk1;
}
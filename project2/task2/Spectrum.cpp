#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <cstddef> 
#include <cstdlib>
#include <math.h>

const double PI = 3.1415926535897932384626433832795;

double* Mfunc(double **Yres, int N, int countY, int countA) {
	double* M = new double [countY];
	double sum = 0;

	for (int i = 0; i < countY; i++) {
		for(int j = 0; j < N; j++) {
			sum = sum + Yres[j][i]; //проверить индексы
		}
		M[i] = sum/N;
		sum = 0;
	}

	return M;

}

double** Znew(double *M, double **Yres, int countY, int countA, int N) {
	double **Z = new double* [N];
	for (int i = 0; i < N; i++) {
        Z[i] = new double [countY];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < countY; j++) {
			Z[i][j] = Yres[i][j] - M[j]; //проверить индексы
		}
	}

	return Z;

}

double sumRF(double **z, int N, int countY, int k, int fix) {
	int w;
	double a = 0;
	for (int i = 0; i < N; i++) {
		a = a + (z[i][fix])*cos((2*PI*k*i)/N);
		w = 1;
		
	}

	return a;
}

double sumIF(double **z, int N, int countY, int k, int fix) {
	int w;
	double a = 0;
	for (int i = 0; i < N; i++) {
		a = a + (z[i][fix])*sin((2*PI*k*i)/N);
		w = 1;
	}

	return a;
}


double **RealFurie(double **z, int N, int countY) {
	int w;
	double **RF = new double* [N];
	double *sumF = new double [countY];
	for (int i = 0; i < N; i++) {
        RF[i] = new double [countY];
	}

	double dN = N;

	for (int i = 0; i<N; i++) {
		for (int j = 0; j < countY; j++) {
			RF[i][j] =  (1/sqrt(dN))*sumRF(z, N, countY, i, j);
			w = 1;
		}
	}

	return RF;
}

double **ImFurie(double **z, int N, int countY) {
	int w;
	double **IF = new double* [N];
	for (int i = 0; i < N; i++) {
        IF[i] = new double [countY];
	}

	double dN = N;

	for (int i = 0; i<N; i++) {
		for (int j = 0; j < countY; j++) {
			IF[i][j] = (1/sqrt(dN))*sumIF(z, N, countY, i, j);
			w = 1;
		}
	}

	return IF;
}

double **SpectrumFunc(double **Yres, int N, int countY, int countA) {
	int w;
	double **SP = new double* [N];
	for (int i = 0; i < N; i++) {
        SP[i] = new double [countY];
	}
	
	double *M;
	double **z;
	double **Rea, **Ima;

	M = Mfunc(Yres, N, countY, countA);
	z = Znew(M, Yres, countY, countA, N);
	Rea = RealFurie(z, N, countY);
	Ima = ImFurie(z, N, countY);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < countY; j++) {
			SP[i][j] = Rea[i][j]*Rea[i][j] + Ima[i][j]*Ima[i][j];
			w = 1;
		}
	}

	return SP;
}







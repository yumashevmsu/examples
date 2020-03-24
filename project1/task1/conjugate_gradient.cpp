#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <cstddef> 
#include <cstdlib>
#include <math.h>

double* conjugategradient (double C, double D, double N, double eps, int n, double *k, double *a0, int &ki, double &Fres, int &alp) {
	double *apred = new double [n+1];
	double *ak = new double [n+1];
	double *aknext = new double [n+1];
	//double h = (D-C)/N;
	int alpha;
	if ((abs(C)>10) || (abs(D)>10) || (D-C > 10)) {
		alpha = floor(abs((D-C)/10) + 0.5);
	}
	else {alpha = 1;}
	
	alp = alpha;
	//alpha = 
	D = D/alpha;
	C = C/alpha;
	double h = (D-C)/N;
	double *x = new double [N+1];
	double *vk; 
	double *vpred = new double [n+1];
	double *amv = new double [n+1];
	double *apv = new double [n+1];
	for (int i = 0; i<=N; i++) {
		x[i] = C + i*h;
	}
	int b;
	for (int i = 0; i<=n; i++) {
		aknext[i] = a0[i];
	}
	ki = 0;
    do {
		++ki;
		b = 1;
		for (int i = 0; i <= n; i++) {
			ak[i] = aknext[i];
		}
		/*--------------------------------------*/
		if (ki == 1) {
			vk = mingradF(ak, n, N, x, alpha, k);
		}
		else {
			vk = mingradF(ak, n, N, x, alpha, k);
			for (int i = 0; i<=n; i++) {
				vk[i] = vk[i] + pow((norma(gradF(ak, n, N, x, alpha, k), n))/(norma(gradF(apred, n, N, x, alpha, k), n)) , 2)*vpred[i];
			}
		}
		/*--------------------------------------*/
		for (int i = 0; i<=n; i++) {
			amv [i] = ak[i] - b*vk[i];
			apv[i] = ak[i] + b*vk[i];
		}
		while ((2*(Fa(amv, x, k, N, alpha, n)-2*Fa(ak, x, k, N, alpha, n)+Fa(apv, x, k, N, alpha, n))) == 0) {
			b++;
			for (int i = 0; i<=n; i++) {
				amv [i] = ak[i] - b*vk[i];
				apv[i] = ak[i] + b*vk[i];
			}
		}
		for (int i = 0; i <= n; i++) {
			aknext[i] = ak[i] + lambda(ak, amv, apv, x, k, N, alpha, n, b)*vk[i];
		}
		for (int i = 0; i<=n; i++) {
			vpred[i] = vk[i];
			apred[i] = ak[i];
		}
	}
	while ((exactitude(ak, aknext, n))>=eps);

	/*for (int i = 0; i<=n; i++) {
		aknext[i] = aknext[i]/alpha;
	}*/

	Fres = Fa(aknext, x, k, N, alpha, n);
	return aknext;
}
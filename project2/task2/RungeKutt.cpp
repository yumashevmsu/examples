#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <cstddef> 
#include <cstdlib>
#include <math.h>

double **RungeKutt(double *a, double *y0, int countY, int countA, double T, double M, int selector) {
	double **Yres = new double* [M+1];
	for (int i = 0; i < M+1; i++) {
        Yres[i] = new double [countY];
	}

	for (int i = 0; i < countY; i++) {
		Yres[0][i] = y0[i];
	}

	double h = T/M;
    double x0 = 0;
	double k1[4], k2[4], k3[4], k4[4];

	if (selector == 1) {

		for (int i = 1; i < M+1; i++) {

			k1[0] = h*yrp1(a, Yres[i-1][0], Yres[i-1][1], Yres[i-1][2]);
			k1[1] = h*yrp2(a, Yres[i-1][0], Yres[i-1][1], Yres[i-1][3]);
			k1[2] = h*yrp3(a, Yres[i-1][0], Yres[i-1][1], Yres[i-1][2]);
			k1[3] = h*yrp4(a, Yres[i-1][0], Yres[i-1][1], Yres[i-1][3]);

			k2[0] = h*yrp1(a, Yres[i-1][0]+k1[0]/2, Yres[i-1][1]+k1[1]/2, Yres[i-1][2]+k1[2]/2);
			k2[1] = h*yrp2(a, Yres[i-1][0]+k1[0]/2, Yres[i-1][1]+k1[1]/2, Yres[i-1][3]+k1[3]/2);
			k2[2] = h*yrp3(a, Yres[i-1][0]+k1[0]/2, Yres[i-1][1]+k1[1]/2, Yres[i-1][2]+k1[2]/2);
			k2[3] = h*yrp4(a, Yres[i-1][0]+k1[0]/2, Yres[i-1][1]+k1[1]/2, Yres[i-1][3]+k1[3]/2);
		
			k3[0] = h*yrp1(a, Yres[i-1][0]+k2[0]/2, Yres[i-1][1]+k2[1]/2, Yres[i-1][2]+k2[2]/2);
			k3[1] = h*yrp2(a, Yres[i-1][0]+k2[0]/2, Yres[i-1][1]+k2[1]/2, Yres[i-1][3]+k2[3]/2);
			k3[2] = h*yrp3(a, Yres[i-1][0]+k2[0]/2, Yres[i-1][1]+k2[1]/2, Yres[i-1][2]+k2[2]/2);
			k3[3] = h*yrp4(a, Yres[i-1][0]+k2[0]/2, Yres[i-1][1]+k2[1]/2, Yres[i-1][3]+k2[3]/2);

			k4[0] = h*yrp1(a, Yres[i-1][0]+k3[0], Yres[i-1][1]+k3[1], Yres[i-1][2]+k3[2]);
			k4[1] = h*yrp2(a, Yres[i-1][0]+k3[0], Yres[i-1][1]+k3[1], Yres[i-1][3]+k3[3]);
			k4[2] = h*yrp3(a, Yres[i-1][0]+k3[0], Yres[i-1][1]+k3[1], Yres[i-1][2]+k3[2]);
			k4[3] = h*yrp4(a, Yres[i-1][0]+k3[0], Yres[i-1][1]+k3[1], Yres[i-1][3]+k3[3]);

			Yres[i][0] = Yres[i-1][0] + (k1[0]+2*k2[0]+2*k3[0]+k4[0])/6;
			Yres[i][1] = Yres[i-1][1] + (k1[1]+2*k2[1]+2*k3[1]+k4[1])/6;
			Yres[i][2] = Yres[i-1][2] + (k1[2]+2*k2[2]+2*k3[2]+k4[2])/6;
			Yres[i][3] = Yres[i-1][3] + (k1[3]+2*k2[3]+2*k3[3]+k4[3])/6;

		}
	}

	if (selector == 2) {

		for (int i = 1; i < M+1; i++) {

			k1[0] = h*yip1(a, Yres[i-1][1], Yres[i-1][2], i*h);
			k1[1] = h*yip2(a, i*h);
			k1[2] = h*yip3(a);
			//k1[3] = h*yip4(a, i*h);

			k2[0] = h*yip1(a, Yres[i-1][1]+k1[1]/2, Yres[i-1][2]+k1[2]/2, i*h+h/2);
			k2[1] = h*yip2(a, i*h+h/2);
			k2[2] = h*yip3(a);
			//k2[3] = h*yip4(a, i*h+h/2);
		
			k3[0] = h*yip1(a, Yres[i-1][1]+k2[1]/2, Yres[i-1][2]+k2[2]/2, i*h+h/2);
			k3[1] = h*yip2(a, i*h+h/2);
			k3[2] = h*yip3(a);
			//k3[3] = h*yip4(a, i*h+h/2);

			k4[0] = h*yip1(a, Yres[i-1][1]+k3[1], Yres[i-1][2]+k3[2], i*h+h);
			k4[1] = h*yip2(a, i*h+h);
			k4[2] = h*yip3(a);
			//k4[3] = h*yip4(a, i*h+h);

			Yres[i][0] = Yres[i-1][0] + (k1[0]+2*k2[0]+2*k3[0]+k4[0])/6;
			Yres[i][1] = Yres[i-1][1] + (k1[1]+2*k2[1]+2*k3[1]+k4[1])/6;
			Yres[i][2] = Yres[i-1][2] + (k1[2]+2*k2[2]+2*k3[2]+k4[2])/6;
			Yres[i][3] = Yres[i-1][3] + (k1[3]+2*k2[3]+2*k3[3]+k4[3])/6;

		}
	}

	if (selector == 3) {

		for (int i = 1; i < M+1; i++) {

			k1[0] = h*yvp1(a, Yres[i-1][0], Yres[i-1][1]);
			k1[1] = h*yvp2(a, Yres[i-1][0], Yres[i-1][1], Yres[i-1][2]);
			k1[2] = h*yvp3(a, Yres[i-1][0], Yres[i-1][1], Yres[i-1][2]);

			k2[0] = h*yvp1(a, Yres[i-1][0]+k1[0]/2, Yres[i-1][1]+k1[1]/2);
			k2[1] = h*yvp2(a, Yres[i-1][0]+k1[0]/2, Yres[i-1][1]+k1[1]/2, Yres[i-1][2]+k1[2]/2);
			k2[2] = h*yvp3(a, Yres[i-1][0]+k1[0]/2, Yres[i-1][1]+k1[1]/2, Yres[i-1][2]+k1[2]/2);
		
			k3[0] = h*yvp1(a, Yres[i-1][0]+k2[0]/2, Yres[i-1][1]+k2[1]/2);
			k3[1] = h*yvp2(a, Yres[i-1][0]+k2[0]/2, Yres[i-1][1]+k2[1]/2, Yres[i-1][2]+k2[2]/2);
			k3[2] = h*yvp3(a, Yres[i-1][0]+k2[0]/2, Yres[i-1][1]+k2[1]/2, Yres[i-1][2]+k2[2]/2);
			
			k4[0] = h*yvp1(a, Yres[i-1][0]+k3[0], Yres[i-1][1]+k3[1]);
			k4[1] = h*yvp2(a, Yres[i-1][0]+k3[0], Yres[i-1][1]+k3[1], Yres[i-1][2]+k3[2]);
			k4[2] = h*yvp3(a, Yres[i-1][0]+k3[0], Yres[i-1][1]+k3[1], Yres[i-1][2]+k3[2]);

			Yres[i][0] = Yres[i-1][0] + (k1[0]+2*k2[0]+2*k3[0]+k4[0])/6;
			Yres[i][1] = Yres[i-1][1] + (k1[1]+2*k2[1]+2*k3[1]+k4[1])/6;
			Yres[i][2] = Yres[i-1][2] + (k1[2]+2*k2[2]+2*k3[2]+k4[2])/6;

		}
	}

	if (selector == 4) {

		for (int i = 1; i < M+1; i++) {

			k1[0] = h*ysp1(a, Yres[i-1][0], Yres[i-1][1]);
			k1[1] = h*ysp2(a, Yres[i-1][0], Yres[i-1][1], Yres[i-1][2]);
			k1[2] = h*ysp3(a, Yres[i-1][1]);

			k2[0] = h*ysp1(a, Yres[i-1][0]+k1[0]/2, Yres[i-1][1]+k1[1]/2);
			k2[1] = h*ysp2(a, Yres[i-1][0]+k1[0]/2, Yres[i-1][1]+k1[1]/2, Yres[i-1][2]+k1[2]/2);
			k2[2] = h*ysp3(a, Yres[i-1][1]+k1[1]/2);
		
			k3[0] = h*ysp1(a, Yres[i-1][0]+k2[0]/2, Yres[i-1][1]+k2[1]/2);
			k3[1] = h*ysp2(a, Yres[i-1][0]+k2[0]/2, Yres[i-1][1]+k2[1]/2, Yres[i-1][2]+k2[2]/2);
			k3[2] = h*ysp3(a, Yres[i-1][1]+k2[1]/2);
			
			k4[0] = h*ysp1(a, Yres[i-1][0]+k3[0], Yres[i-1][1]+k3[1]);
			k4[1] = h*ysp2(a, Yres[i-1][0]+k3[0], Yres[i-1][1]+k3[1], Yres[i-1][2]+k3[2]);
			k4[2] = h*ysp3(a, Yres[i-1][1]+k3[1]);

			Yres[i][0] = Yres[i-1][0] + (k1[0]+2*k2[0]+2*k3[0]+k4[0])/6;
			Yres[i][1] = Yres[i-1][1] + (k1[1]+2*k2[1]+2*k3[1]+k4[1])/6;
			Yres[i][2] = Yres[i-1][2] + (k1[2]+2*k2[2]+2*k3[2]+k4[2])/6;

		}
	}

	if (selector == 5) {

		for (int i = 1; i < M+1; i++) {

			k1[0] = h*ydp1(a, Yres[i-1][1], Yres[i-1][2]);
			k1[1] = h*ydp2(a, Yres[i-1][0], Yres[i-1][1]);
			k1[2] = h*ydp3(a, Yres[i-1][0], Yres[i-1][1]);

			k2[0] = h*ydp1(a, Yres[i-1][1]+k1[1]/2, Yres[i-1][2]+k1[2]/2);
			k2[1] = h*ydp2(a, Yres[i-1][0]+k1[0]/2, Yres[i-1][1]+k1[1]/2);
			k2[2] = h*ydp3(a, Yres[i-1][0]+k1[0]/2, Yres[i-1][1]+k1[1]/2);
		
			k3[0] = h*ydp1(a, Yres[i-1][1]+k2[1]/2, Yres[i-1][2]+k2[2]/2);
			k3[1] = h*ydp2(a, Yres[i-1][0]+k2[0]/2, Yres[i-1][1]+k2[1]/2);
			k3[2] = h*ydp3(a, Yres[i-1][0]+k2[0]/2, Yres[i-1][1]+k2[1]/2);
			
			k4[0] = h*ydp1(a, Yres[i-1][1]+k3[1], Yres[i-1][2]+k3[2]);
			k4[1] = h*ydp2(a, Yres[i-1][0]+k3[0], Yres[i-1][1]+k3[1]);
			k4[2] = h*ydp3(a, Yres[i-1][0]+k3[0], Yres[i-1][1]+k3[1]);

			Yres[i][0] = Yres[i-1][0] + (k1[0]+2*k2[0]+2*k3[0]+k4[0])/6;
			Yres[i][1] = Yres[i-1][1] + (k1[1]+2*k2[1]+2*k3[1]+k4[1])/6;
			Yres[i][2] = Yres[i-1][2] + (k1[2]+2*k2[2]+2*k3[2]+k4[2])/6;

		}
	}

	return Yres;

}


		









	
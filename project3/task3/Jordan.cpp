#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <cstddef> 
#include <cstdlib>
#include <math.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

void jordan_step(double **a, double **a1, int *upd, int *leftd, array<String^>^ upc, array<String^>^ leftc, int m, int n, int r, int s) {
	int bufd;
	String^ bufc;
	a1[r][s] = 1/a[r][s]; //поверить границы между r, s и i //ok
	for (int i = 0; i < m; i++) {
		if (i != r) { 
			a1[i][s] = a[i][s]/(-a[r][s]);
		}
	}//ok
	//p[s] = p[s]/(-a[r][s]);
	for (int j = 0; j < n; j++) { 
		if (j != s) { 
			a1[r][j] = a[r][j]/(a[r][s]);
		}
	} //проверить условие //!!!!!!
	//b[r] = b[r]/(a[r][s]);
	//cout << r << endl;
	//cout << s << endl;
    for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if ((j != s) && (i != r)) {
				a1[i][j] = a[i][j] - a[r][j]*a[i][s]/a[r][s];
			}
		}
	}
	//for (int i = 0; i < m; i ++) {
		//if (i != r) {
			//b[i] = b[i] - b[r]*a[i][s]/a[r][s];
		//}
	//}
	//for (int i = 0; i < n; i++) {
		//if (i != s) {
			//p[i] = p[i] - a[r][i]*p[s]/a[r][s];
		//}
	bufd = leftd[r];
	leftd[r] = upd[s];
	upd[s] = bufd;
	bufc = leftc[r];
	leftc[r] = upc[s];
	upc[s] = bufc;
}



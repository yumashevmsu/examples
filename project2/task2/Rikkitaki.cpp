#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <cstddef> 
#include <cstdlib>
#include <math.h>

double yrp1(double *a, double y1, double y2, double y3) {
	return (-a[0]*y1+y2*y3);
}

double yrp2(double *a, double y1, double y2, double y4) {
	return (-a[0]*y2+y1*y4);
}

double yrp3(double *a, double y1, double y2, double y3) {
	return (1-y1*y2-a[1]*y3);
}

double yrp4(double *a, double y1, double y2, double y4) {
	return (1-y1*y2-a[2]*y4);
}

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <cstddef> 
#include <cstdlib>
#include <math.h>

double ydp1(double *a, double y2, double y3) {
	return (1+a[0]*y2*y3);
}

double ydp2(double *a, double y1, double y2) {
	return (y1-y2);
}

double ydp3(double *a, double y1, double y2) {
	return (1-y1*y2);
}



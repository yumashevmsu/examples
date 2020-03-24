#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <cstddef> 
#include <cstdlib>
#include <math.h>

double yip1(double *a, double y2, double y3, double t) {
	return (y2*y3+sin(t));
}

double yip2(double *a, double t) {
	return (a[0]*sin(t));
}

double yip3(double *a) {
	return (1);
}

//double yip4(double *a, double t) {
	//return (t);
//}

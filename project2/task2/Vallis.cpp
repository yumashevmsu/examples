#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <cstddef> 
#include <cstdlib>
#include <math.h>

double yvp1(double *a, double y1, double y2) {
	return (a[0]*y2-a[1]*y1);
}

double yvp2(double *a, double y1, double y2, double y3) {
	return (y1*y3-y2);
}

double yvp3(double *a, double y1, double y2, double y3) {
	return (1-y1*y2-y3);
}

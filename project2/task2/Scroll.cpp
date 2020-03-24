#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <cstddef> 
#include <cstdlib>
#include <math.h>

double ysp1(double *a, double y1, double y2) {
	return (a[0]*(y2-a[2]*y1-(0.5)*(a[3]-a[2])*(abs(y1+1)-abs(y1-1))));
}

double ysp2(double *a, double y1, double y2, double y3) {
	return (y1-y2+y3);
}

double ysp3(double *a, double y2) {
	return (-a[1]*y2);
}



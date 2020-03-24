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

void simplex_step_reliance(double **a, double *b, double *reliance,  int &flag, bool &error, int &r, int &s, int *upd, int *leftd, array<String^>^ upc, array<String^>^ leftc, int m, int n) {
	// flag == 0 - 
	// flag == 1 - опорное решение найдено
	// flag == 2 - пустая область
	int k = 0; //err
	bool isneg = false;
	bool flagk = false;
	double min;
	//flag = 9; 
	for (int i = 0; i < m; i++) {
		if (b[i] < 0) {
			isneg = true;
			k = i; //r
			break; //ok
		}
	}

	for (int i = 0; i < n; i++) { //ошибка?
		if (upc[i] == "x") { //проверить формат записи символа
			reliance[upd[i] - 1] = 0;
		} //ok 
	}
	for (int i = 0; i < m; i++) { 
		if (leftc[i] == "x") {
			reliance[leftd[i] - 1] = b[i];
		} //ok
	}
    if (isneg == false) {
		flag = 1;
	}
	else { 
		for (int j = 0; j < n; j++) {
			if (a[k][j] < 0) {
				flagk = true; //ok 
				s = j;
				break;
			}
		}
		if (flagk == false) {
			flag = 2; //ok
		}
		else {
			flag = 0;
			min = 999999999;
			r = 0;
			if ((b[0]/a[0][s] >= 0) && (a[0][s] != 0)) { 
				min = b[0]/a[0][s]; //ok
				r = 0;
			}
			for (int i = 0; i < m; i++) { //деление на нуль
				    if ((b[i] == 0) && (a[i][s]>0)) {
						r = i;
						break;
					}
					if ((min > b[i]/a[i][s]) && (b[i]/a[i][s] >= 0) && (a[i][s] != 0) && (a[i][s] > 0)) {
						min = b[i]/a[i][s];
						r = i;
					}
			}
		}
	}
}

void simplex_step_optimal(double **a, double *b, double *p, double *optimal, int &flag, bool &error, int &r, int &s, int *upd, int *leftd, array<String^>^ upc, array<String^>^ leftc, int m, int n) {
	// flag == 0 - 
	// flag == 1 - оптимальное решение найдено
	// flag == 2 - целевая функция неограничена 
	int k;
	bool isneg = false;
	bool flagk = false;
	double max;
	for (int i = 0; i < n; i++) {
		if (p[i] > 0) {
			isneg = true;
			//k = i;
			break;
		}
	}
	for (int i = 0; i < n; i++) { //ошибка?
		if (upc[i] == "x") { //проверить формат записи символа
			optimal[upd[i] - 1] = 0;
		}
	}
	for (int i = 0; i < m; i++) { 
		if (leftc[i] == "x") {
			optimal[leftd[i] - 1] = b[i];
		}
	}
    if (isneg == false) {
		flag = 1;
	}
	//else { 
		/*for (int j = 0; j < n; j++) {
			if (p[j] > 0) { //смена знака
				flagk = true;
				break;
			}
		}
		if (flagk == false) {
			flag = 2;
		}*/
	 else {
			max = p[0];
			s = 0;
			for (int i = 0; i < n; i++) {
				if (p[i] > max) {
					max = p[i];
					s = i;
				}
			}
			for (int i = 0; i < m; i++) {
				if (a[i][s] > 0) {
					flagk = true;
					break;
				}
			}
			if (flagk == false) {
			flag = 2;
			}
			else {
				double min = 999999;
				//if (b[0]/a[0][s] < 0) {
					//max = b[0]/a[0][s];
					//r = 0;
				//}
				for (int i = 0; i < m; i++) {
					if ((b[i]/a[i][s] >= 0) && (b[i]/a[i][s] < min) && (a[i][s] != 0) && (a[i][s] > 0)) {
						min = b[i]/a[i][s];
						r = i;
					}
				}
			flag = 0;
			}
		}
}

void bubble_sort(int *a, int length)
{
     for (int i = 0; i < length-1; i++) {
         for (int j = 0; j < length-i-1; j++) {
             if (a[j] > a[j+1]) {
                 int b = a[j]; 
                 a[j] = a[j+1];
                 a[j+1] = b;
             }
         }
     }
 }
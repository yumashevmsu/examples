// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
#pragma once
void jordan_step(double **a, double **a1, int *upd, int *leftd, array<String^>^ upc, array<String^>^ leftc, int m, int n, int r, int s);
void simplex_step_reliance(double **a, double *b, double *reliance,  int &flag, bool &error, int &r, int &s, int *upd, int *leftd, array<String^>^ upc, array<String^>^ leftc, int m, int n);
void simplex_step_optimal(double **a, double *b, double *p, double *optimal, int &flag, bool &error, int &r, int &s, int *upd, int *leftd, array<String^>^ upc, array<String^>^ leftc, int m, int n);
void bubble_sort(int *a, int length);
// TODO: reference additional headers your program requires here


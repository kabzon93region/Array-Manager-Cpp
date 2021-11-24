#pragma once

#include <string>

using namespace std;

//up down
void amsUP(string *a[], string c[], int size_a_current, int size_a_new);
void amsDOWN(string *a[], string c[], int size_a_current, int size_a_new);
void amiUP(int *a[], int c[], int size_a_current, int size_a_new);
void amiDOWN(int *a[], int c[], int size_a_current, int size_a_new);
void amfUP(float *a[], float c[], int size_a_current, int size_a_new);
void amfDOWN(float *a[], float c[], int size_a_current, int size_a_new);
void amdUP(double *a[], double c[], int size_a_current, int size_a_new);
void amdDOWN(double *a[], double c[], int size_a_current, int size_a_new);
void amcUP(char *a[], char c[], int size_a_current, int size_a_new);
void amcDOWN(char *a[], char c[], int size_a_current, int size_a_new);
void ambUP(bool *a[], bool c[], int size_a_current, int size_a_new);
void ambDOWN(bool *a[], bool c[], int size_a_current, int size_a_new);
void amwUP(wchar_t *a[], wchar_t c[], int size_a_current, int size_a_new);
void amwDOWN(wchar_t *a[], wchar_t c[], int size_a_current, int size_a_new);
void amstUP(short *a[], short c[], int size_a_current, int size_a_new);
void amstDOWN(short *a[], short c[], int size_a_current, int size_a_new);
void amlUP(long *a[], long c[], int size_a_current, int size_a_new);
void amlDOWN(long *a[], long c[], int size_a_current, int size_a_new);


//insert drop
void amsIns(string *a, int insertIndex, int size_a_current, string insertData);

	


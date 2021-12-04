#pragma once

#include <string>

using namespace std;

//up down
void amsUP(string *a[], int size_a_current, int size_a_new);
void amsDOWN(string *a[], int size_a_current, int size_a_new);
void amiUP(int *a[], int size_a_current, int size_a_new);
void amiDOWN(int *a[], int size_a_current, int size_a_new);
void amfUP(float *a[], int size_a_current, int size_a_new);
void amfDOWN(float *a[], int size_a_current, int size_a_new);
void amdUP(double *a[], int size_a_current, int size_a_new);
void amdDOWN(double *a[], int size_a_current, int size_a_new);
void amcUP(char *a[], int size_a_current, int size_a_new);
void amcDOWN(char *a[], int size_a_current, int size_a_new);
void ambUP(bool *a[], int size_a_current, int size_a_new);
void ambDOWN(bool *a[], int size_a_current, int size_a_new);
void amwUP(wchar_t *a[], int size_a_current, int size_a_new);
void amwDOWN(wchar_t *a[], int size_a_current, int size_a_new);
void amstUP(short *a[], int size_a_current, int size_a_new);
void amstDOWN(short *a[], int size_a_current, int size_a_new);
void amlUP(long *a[], int size_a_current, int size_a_new);
void amlDOWN(long *a[], int size_a_current, int size_a_new);
void amllUP(long long *a[], int size_a_current, int size_a_new);
void amllDOWN(long long *a[], int size_a_current, int size_a_new);


//insert drop
void amsIns(string *a[], int insertIndex, int size_a_current, string insertData);
void amsDrop(string *a[], int dropIndex, int size_a_current);

	


﻿#include <iostream>
#include "Array_Manager.h"

using namespace std;

int length(string *ar[])
{
	bool searshing = true;
	int iteral = 0;
	string *s = *ar;

	while (searshing)
	{
		if (s[iteral].be == true)
		{
			iteral++;
		}
		else
		{
			searshing = false;
		}
	}

	return iteral;
}

//up down
//string
void amsUP(string *a[], int size_a_current, int size_a_new)
{
	string *amstemp;
	int *amsUPi = new int;
	*amsUPi = 0;
	string *c = *a;
	string *b = new string[size_a_new];

	while (*amsUPi < size_a_current)
	{
		b[*amsUPi] = c[*amsUPi];
		*amsUPi = *amsUPi + 1;
	}

	amstemp = *a;

	*a = b;

	b = amstemp;

	delete[] b;
	b = nullptr;

	delete amsUPi;
	amsUPi = nullptr;
}
void amsDOWN(string *a[], int size_a_current, int size_a_new)
{
	string *amstemp;
	int *amsDOWNi = new int;
	*amsDOWNi = 0;
	string *c = *a;
	string *b = new string[size_a_new];

	while (*amsDOWNi < (size_a_new))
	{
		b[*amsDOWNi] = c[*amsDOWNi];
		*amsDOWNi = *amsDOWNi + 1;

	}

	amstemp = *a;

	*a = b;

	b = amstemp;

	delete[] b;
	b = nullptr;

	delete amsDOWNi;
	amsDOWNi = nullptr;

}
//int
void amiUP(int *a[], int size_a_current, int size_a_new)
{
	int *amitemp;
	int *amiUPi = new int;
	*amiUPi = 0;
	int *c = *a;
	int *b = new int[size_a_new];

	while (*amiUPi < size_a_current)
	{
		b[*amiUPi] = c[*amiUPi];
		*amiUPi = *amiUPi + 1;
	}

	amitemp = *a;

	*a = b;

	b = amitemp;

	delete[] b;
	b = nullptr;

	delete amiUPi;
	amiUPi = nullptr;
}
void amiDOWN(int *a[], int size_a_current, int size_a_new)
{
	int *amitemp;
	int *amiDOWNi = new int;
	*amiDOWNi = 0;
	int *c = *a;
	int *b = new int[size_a_new];

	while (*amiDOWNi < (size_a_new))
	{
		b[*amiDOWNi] = c[*amiDOWNi];
		*amiDOWNi = *amiDOWNi + 1;

	}

	amitemp = *a;

	*a = b;

	b = amitemp;

	delete[] b;
	b = nullptr;

	delete amiDOWNi;
	amiDOWNi = nullptr;
}
//float
void amfUP(float *a[], int size_a_current, int size_a_new)
{
	float *amftemp;
	int *amfUPi = new int;
	*amfUPi = 0;
	float *c = *a;
	float *b = new float[size_a_new];

	while (*amfUPi < size_a_current)
	{
		b[*amfUPi] = c[*amfUPi];
		*amfUPi = *amfUPi + 1;
	}

	amftemp = *a;

	*a = b;

	b = amftemp;

	delete[] b;
	b = nullptr;

	delete amfUPi;
	amfUPi = nullptr;
}
void amfDOWN(float *a[], int size_a_current, int size_a_new)
{
	float *amftemp;
	int *amfDOWNi = new int;
	*amfDOWNi = 0;
	float *c = *a;
	float *b = new float[size_a_new];

	while (*amfDOWNi < (size_a_new))
	{
		b[*amfDOWNi] = c[*amfDOWNi];
		*amfDOWNi = *amfDOWNi + 1;

	}

	amftemp = *a;

	*a = b;

	b = amftemp;

	delete[] b;
	b = nullptr;

	delete amfDOWNi;
	amfDOWNi = nullptr;
}
//double
void amdUP(double *a[], int size_a_current, int size_a_new)
{
	double *amdtemp;
	int *amdUPi = new int;
	*amdUPi = 0;
	double *c = *a;
	double *b = new double[size_a_new];

	while (*amdUPi < size_a_current)
	{
		b[*amdUPi] = c[*amdUPi];
		*amdUPi = *amdUPi + 1;
	}

	amdtemp = *a;

	*a = b;

	b = amdtemp;

	delete[] b;
	b = nullptr;

	delete amdUPi;
	amdUPi = nullptr;
}
void amdDOWN(double *a[], int size_a_current, int size_a_new)
{
	double *amdtemp;
	int *amdDOWNi = new int;
	*amdDOWNi = 0;
	double *c = *a;
	double *b = new double[size_a_new];

	while (*amdDOWNi < (size_a_new))
	{
		b[*amdDOWNi] = c[*amdDOWNi];
		*amdDOWNi = *amdDOWNi + 1;

	}

	amdtemp = *a;

	*a = b;

	b = amdtemp;

	delete[] b;
	b = nullptr;

	delete amdDOWNi;
	amdDOWNi = nullptr;
}
//char
void amcUP(char *a[], int size_a_current, int size_a_new)
{
	char *amctemp;
	int *amcUPi = new int;
	*amcUPi = 0;
	char *c = *a;
	char *b = new char[size_a_new];

	while (*amcUPi < size_a_current)
	{
		b[*amcUPi] = c[*amcUPi];
		*amcUPi = *amcUPi + 1;
	}

	amctemp = *a;

	*a = b;

	b = amctemp;

	delete[] b;
	b = nullptr;

	delete amcUPi;
	amcUPi = nullptr;
}
void amcDOWN(char *a[], int size_a_current, int size_a_new)
{
	char *amctemp;
	int *amcDOWNi = new int;
	*amcDOWNi = 0;
	char *c = *a;
	char *b = new char[size_a_new];

	while (*amcDOWNi < (size_a_new))
	{
		b[*amcDOWNi] = c[*amcDOWNi];
		*amcDOWNi = *amcDOWNi + 1;

	}

	amctemp = *a;

	*a = b;

	b = amctemp;

	delete[] b;
	b = nullptr;

	delete amcDOWNi;
	amcDOWNi = nullptr;
}
//bool
void ambUP(bool *a[], int size_a_current, int size_a_new)
{
	bool *ambtemp;
	int *ambUPi = new int;
	*ambUPi = 0;
	bool *c = *a;
	bool *b = new bool[size_a_new];

	while (*ambUPi < size_a_current)
	{
		b[*ambUPi] = c[*ambUPi];
		*ambUPi = *ambUPi + 1;
	}

	ambtemp = *a;

	*a = b;

	b = ambtemp;

	delete[] b;
	b = nullptr;

	delete ambUPi;
	ambUPi = nullptr;
}
void ambDOWN(bool *a[], int size_a_current, int size_a_new)
{
	bool *ambtemp;
	int *ambDOWNi = new int;
	*ambDOWNi = 0;
	bool *c = *a;
	bool *b = new bool[size_a_new];

	while (*ambDOWNi < (size_a_new))
	{
		b[*ambDOWNi] = c[*ambDOWNi];
		*ambDOWNi = *ambDOWNi + 1;

	}

	ambtemp = *a;

	*a = b;

	b = ambtemp;

	delete[] b;
	b = nullptr;

	delete ambDOWNi;
	ambDOWNi = nullptr;
}
//wchar_t
void amwUP(wchar_t *a[], int size_a_current, int size_a_new)
{
	wchar_t *amwtemp;
	int *amwUPi = new int;
	*amwUPi = 0;
	wchar_t *c = *a;
	wchar_t *b = new wchar_t[size_a_new];

	while (*amwUPi < size_a_current)
	{
		b[*amwUPi] = c[*amwUPi];
		*amwUPi = *amwUPi + 1;
	}

	amwtemp = *a;

	*a = b;

	b = amwtemp;

	delete[] b;
	b = nullptr;

	delete amwUPi;
	amwUPi = nullptr;
}
void amwDOWN(wchar_t *a[], int size_a_current, int size_a_new)
{
	wchar_t *amwtemp;
	int *amwDOWNi = new int;
	*amwDOWNi = 0;
	wchar_t *c = *a;
	wchar_t *b = new wchar_t[size_a_new];

	while (*amwDOWNi < (size_a_new))
	{
		b[*amwDOWNi] = c[*amwDOWNi];
		*amwDOWNi = *amwDOWNi + 1;

	}

	amwtemp = *a;

	*a = b;

	b = amwtemp;

	delete[] b;
	b = nullptr;

	delete amwDOWNi;
	amwDOWNi = nullptr;
}
//short
void amstUP(short *a[], int size_a_current, int size_a_new)
{
	short *amsttemp;
	int *amstUPi = new int;
	*amstUPi = 0;
	short *c = *a;
	short *b = new short[size_a_new];

	while (*amstUPi < size_a_current)
	{
		b[*amstUPi] = c[*amstUPi];
		*amstUPi = *amstUPi + 1;
	}

	amsttemp = *a;

	*a = b;

	b = amsttemp;

	delete[] b;
	b = nullptr;

	delete amstUPi;
	amstUPi = nullptr;
}
void amstDOWN(short *a[], int size_a_current, int size_a_new)
{
	short *amsttemp;
	int *amstDOWNi = new int;
	*amstDOWNi = 0;
	short *c = *a;
	short *b = new short[size_a_new];

	while (*amstDOWNi < (size_a_new))
	{
		b[*amstDOWNi] = c[*amstDOWNi];
		*amstDOWNi = *amstDOWNi + 1;

	}

	amsttemp = *a;

	*a = b;

	b = amsttemp;

	delete[] b;
	b = nullptr;

	delete amstDOWNi;
	amstDOWNi = nullptr;
}
//long
void amlUP(long *a[], int size_a_current, int size_a_new)
{
	long *amltemp;
	int *amlUPi = new int;
	*amlUPi = 0;
	long *c = *a;
	long *b = new long[size_a_new];

	while (*amlUPi < size_a_current)
	{
		b[*amlUPi] = c[*amlUPi];
		*amlUPi = *amlUPi + 1;
	}

	amltemp = *a;

	*a = b;

	b = amltemp;

	delete[] b;
	b = nullptr;

	delete amlUPi;
	amlUPi = nullptr;
}
void amlDOWN(long *a[], int size_a_current, int size_a_new)
{
	long *amltemp;
	int *amlDOWNi = new int;
	*amlDOWNi = 0;
	long *c = *a;
	long *b = new long[size_a_new];

	while (*amlDOWNi < (size_a_new))
	{
		b[*amlDOWNi] = c[*amlDOWNi];
		*amlDOWNi = *amlDOWNi + 1;

	}

	amltemp = *a;

	*a = b;

	b = amltemp;

	delete[] b;
	b = nullptr;

	delete amlDOWNi;
	amlDOWNi = nullptr;
}
//long long
void amllUP(long long *a[], int size_a_current, int size_a_new)
{
	long long *amltemp;
	int *amlUPi = new int;
	*amlUPi = 0;
	long long *c = *a;
	long long *b = new long long[size_a_new];

	while (*amlUPi < size_a_current)
	{
		b[*amlUPi] = c[*amlUPi];
		*amlUPi = *amlUPi + 1;
	}

	amltemp = *a;

	*a = b;

	b = amltemp;

	delete[] b;
	b = nullptr;

	delete amlUPi;
	amlUPi = nullptr;
}
void amllDOWN(long long *a[], int size_a_current, int size_a_new)
{
	long long *amltemp;
	int *amlDOWNi = new int;
	*amlDOWNi = 0;
	long long *c = *a;
	long long *b = new long long[size_a_new];

	while (*amlDOWNi < (size_a_new))
	{
		b[*amlDOWNi] = c[*amlDOWNi];
		*amlDOWNi = *amlDOWNi + 1;

	}

	amltemp = *a;

	*a = b;

	b = amltemp;

	delete[] b;
	b = nullptr;

	delete amlDOWNi;
	amlDOWNi = nullptr;
}
//up down

//insert drop
//string
void amsIns(string *a[], int insertIndex, int size_a_current, string insertData)
{
	int size_a_new = size_a_current + 1;
	string *c = *a;
	
		//
		string *amstemp;
		int *amsUPi = new int;
		*amsUPi = 0;
		string *b = new string[size_a_new];

	while (*amsUPi < size_a_current)
	{
		b[*amsUPi] = c[*amsUPi];
		*amsUPi = *amsUPi + 1;
	}

		//
		for (int i = size_a_current; i > insertIndex; i--)
		{
			b[i] = b[i - 1];
		}
		b[insertIndex] = insertData;
		//

	amstemp = *a;
	*a = b;
	b = amstemp;

	delete[] b;
	b = nullptr;

	delete amsUPi;
	amsUPi = nullptr;
	//
}
void amsDrop(string *a[], int dropIndex, int size_a_current)
{
	int size_a_new = size_a_current - 1;
	string *c = *a;

	//
	string *amstemp;
	int *amsDOWNi = new int;
	*amsDOWNi = 0;
	string *b = new string[size_a_new];

		//
		for (int i = dropIndex; i < size_a_new; i++)
		{
			c[i] = c[i + 1];
		}
		//

	while (*amsDOWNi < (size_a_new))
	{
		b[*amsDOWNi] = c[*amsDOWNi];
		*amsDOWNi = *amsDOWNi + 1;

	}

	amstemp = *a;
	*a = b;
	b = amstemp;

	delete[] b;
	b = nullptr;

	delete amsDOWNi;
	amsDOWNi = nullptr;
	//
}




int main()
{




	string *s = new string[5];
	s[0] = "s0";
	s[1] = "s1";
	s[2] = "s2";
	s[3] = "s3";
	s[4] = "s4";

	amsIns(&s, 3, 5, "dsadas");

	//
	int di = 2;
	int sac = 5;

	//

	for (int i = 0; i < 6; i++)
	{
		cout << s[i] << endl;
	}

	cout << "\n" << endl;


	amsDrop(&s, 2, 6);


	for (int i = 0; i < 5; i++)
	{
		cout << s[i] << endl;
	}



	//system("pause");
	delete[] s;
	s = nullptr;

	return 0;
}

/*
int main()
{

	//string
	string *s = new string[3];
	amsUP(&s, s, 3, 10000000);
	amsDOWN(&s, s, 10000000, 0);
	delete[] s;
	s = nullptr;
	//string

	//int
	int *i = new int[3];
	amiUP(&i, i, 3, 10000000);
	amiDOWN(&i, i, 10000000, 1);
	delete[] i;
	i = nullptr;
	//int

	//float
	float *f = new float[3];
	amfUP(&f, f, 3, 10000000);
	amfDOWN(&f, f, 10000000, 1);
	delete[] f;
	f = nullptr;
	//float

	//double
	double *d = new double[3];
	amdUP(&d, d, 3, 10000000);
	amdDOWN(&d, d, 10000000, 1);
	delete[] d;
	d = nullptr;
	//double

	//char
	char *c = new char[3];
	amcUP(&c, c, 3, 10000000);
	amcDOWN(&c, c, 10000000, 1);
	delete[] c;
	c = nullptr;
	//char
	   
	//bool
	bool *b = new bool[3];
	ambUP(&b, b, 3, 10000000);
	ambDOWN(&b, b, 10000000, 1);
	delete[] b;
	b = nullptr;
	//bool

	//wchar_t
	wchar_t *w = new wchar_t[3];
	amwUP(&w, w, 3, 10000000);
	amwDOWN(&w, w, 10000000, 1);
	delete[] w;
	w = nullptr;
	//wchar_t

	//short
	short *st = new short[3];
	amstUP(&st, st, 3, 10000000);
	amstDOWN(&st, st, 10000000, 1);
	delete[] st;
	st = nullptr;
	//short

	//long
	long *l = new long[3];
	amlUP(&l, l, 3, 10000000);
	amlDOWN(&l, l, 10000000, 1);
	delete[] l;
	l = nullptr;
	//long

	return 0;
}
*/


#include <iostream>
#include <string>
#include <stdlib.h>



using namespace std;

string *amstemp;




void amsUP(string *a[], string c[], int size_a)
{
	int *amsUPi = new int;
	*amsUPi = 0;

	string *b = new string[size_a + 1];

	while (*amsUPi < size_a)
	{
		b[*amsUPi] = c[*amsUPi];
		*amsUPi = *amsUPi + 1;
	}

	amstemp = *a;

	*a = b;

	b = amstemp;

	delete[] b;
	b = nullptr;

	delete[] amsUPi;
	amsUPi = nullptr;

}

void amsDOWN(string *a[], string c[], int size_a)
{
	int *amsDOWNi = new int;
	*amsDOWNi = 0;

	string *b = new string[size_a - 1];

	while (*amsDOWNi < (size_a - 1))
	{
		b[*amsDOWNi] = c[*amsDOWNi];
		*amsDOWNi = *amsDOWNi + 1;
	}

	amstemp = *a;

	*a = b;

	b = amstemp;

	delete[] b;
	b = nullptr;

	delete[] amsDOWNi;
	amsDOWNi = nullptr;

}


int main()
{

	string *a = new string[3];


	a[0] = "a0";
	a[1] = "a1";
	a[2] = "a2";



	amsUP(&a, a, 3);
	
	amsDOWN(&a, a, 4);

	amsUP(&a, a, 3);
	
	amsDOWN(&a, a, 4);


	delete[] a;
	a = nullptr;

	return 0;
}




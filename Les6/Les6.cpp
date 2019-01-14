

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_AANTAL  = 15;
const int MAX_AANTAL2 = 10;
const int MAX_AANTAL3 = 5;

float gemiddelde(int a[]);
void  grootstewaarde(const int a[], int* p);
void  kopieer(const int bron[], int bestemming[], int lengte);
void  som(const int a[], const int b[], int c[], int lengte);
void  verwijder(int getal, int a[], int lengte);

int main()
{

}

// Vraag 1.
/*
	int a[5];
	for (int i = 0; i < 5; i++) {
		cout << "Waarde " << (i + 1) << ": ";
		cin >> a[i];
	}
	cout << "Gemiddelde: " << setprecision(1) << fixed << showpoint << gemiddelde(a);
*/
float gemiddelde(int a[]) {
	float som = 0;
	for (int i = 0; i < 5; i++) {
		som += a[i];
	}
	return (som / 5);
}

// Vraag 6.
/*
	int r[2];
	int *p = r;
	int b[MAX_AANTAL];
	for (int bi = 0; bi < 15; bi++) {
		b[bi] = (rand() % 9);
	}
	grootstewaarde(b, p);
	cout << "Array: [" << b[0];
	for (int bt = 1; bt < 15; bt++) {
		cout << ", " << b[bt];
	}
	cout << "]\nGrootste: " << r[0] << "\nHoevaak: " << r[1] << endl;
*/
void grootstewaarde(const int a[], int* p) {
	int grootste = a[0], hoeveel = 1;
	for (int i = 0; i < 15; i++) {
		if (a[i] > grootste) {
			grootste = a[i];
			hoeveel = 1;
		} else if (a[i] == grootste) {
			hoeveel++;
		}
	}
	p[0] = grootste;
	p[1] = hoeveel;
}

// Vraag 8.
/*
	int bron[MAX_AANTAL]       = { 1, 15, 2, 14, 3, 13, 4, 12, 5, 11, 6, 10, 7, 9, 8 };
	int bestemming[MAX_AANTAL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	cout << "bestemming origineel | Array: [" << bestemming[0];
	for (int be = 1; be < 15; be++) {
		cout << ", " << bestemming[be];
	}
	kopieer(bron, bestemming, MAX_AANTAL);
	cout << "]\nbron                 | Array: [" << bron[0];
	for (int br = 1; br < 15; br++) {
		cout << ", " << bron[br];
	}
	cout << "]\nbestemming nieuw     | Array: [" << bestemming[0];
	for (int be = 1; be < 15; be++) {
		cout << ", " << bestemming[be];
	}
	cout << "]" << endl;
*/
void kopieer(const int bron[], int bestemming[], int lengte) {
	int *l = bestemming;
	for (int i = 0; i < lengte; i++) {
		l[i] = bron[i];
	}
}

// Vraag 11.
/*
	int a[MAX_AANTAL3] = {1,  9,  5, 10, 15};
	int b[MAX_AANTAL3] = {6, 60, 53,  6,  2};
	int c[MAX_AANTAL3];
	cout << "a: [" << setw(2) << a[0];
	for (int i = 1; i < (2 * MAX_AANTAL3); i++) {
		if (i < MAX_AANTAL3) {
			cout << ", " << setw(2) << a[i];
		} else if (i == MAX_AANTAL3) {
			cout << "]\nb: [" << setw(2) << b[0];
		} else {
			cout << ", " << setw(2) << b[(i % 5)];
		}
	}
	cout << "]\nsom(a, b, c, MAX_AANTAL3); uitvoeren...";
	som(a, b, c, MAX_AANTAL3);
	cout << "\nc: [" << setw(2) << c[0];
	for (int i = 1; i < MAX_AANTAL3; i++) {
		cout << ", " << setw(2) << c[i];
	}
	cout << "]" << endl;
*/
void som(const int a[], const int b[], int c[], int lengte) {
	int *s = c;
	for (int si = 0; si < lengte; si++) {
		s[si] = a[si] + b[si];
	}
}

// Vraag 15.
/*
	int a[MAX_AANTAL2] = { 8, 7, 4, 10, 8, 8, 1, 7, 9, 3 };
	int vg = 7;
	cout << "MAX_AANTAL2: " << MAX_AANTAL2 << "\nvg: " << vg << "\na: [" << setw(2) << a[0];
	for (int i = 1; i < MAX_AANTAL2; i++) {
		cout << ", " << setw(2) << a[i];
	}
	cout << "]\nverwijder(vg, a, MAX_AANTAL2); uitvoeren...";
	verwijder(vg, a, MAX_AANTAL2);
	cout << "\na: [" << setw(2) << a[0];
	for (int i = 1; i < MAX_AANTAL2; i++) {
		cout << ", " << setw(2) << a[i];
	}
	cout << "]" << endl;
*/
void verwijder(int getal, int a[], int lengte) {
	int *av = a;
	for (int i = 0; i < lengte; i++) {
		if (av[i] == getal) {
			for (int j = 0; (i+j) < lengte; j++) {
				av[i + j] = av[(i + (j + 1))];
				
			}
			av[(lengte - 1)] = 0;
			i--;
		}
	}
}
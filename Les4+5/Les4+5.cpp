// Les4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double discriminant(double a = 2, double b = 4, double c = 2);
char   volgendeletter(char in = 'A');
int    som(int n = 0);
double conversie(double v = 16, int m = 1);
int    max(int a = 1, int b = 2, int c = 3);
void   datum(int dag = 1, int maand = 1, int jaar = 1930);
void   max(double a, double b, double& m);
void   fac(int n, long long& resultaat);

int main()
{
	long long a, b;
	fac(20, a);
	fac(10, b);
	cout << "A: " << a << "\nB: " << b << endl;
}

// Vraag 1.
/*
	cout << "Discriminant: " << discriminant() << "\n";
	cout << "Discriminant: " << discriminant(5, 1, 3) << endl;
*/
double discriminant(double a, double b, double c) {
	return (pow(b, 2) - (4 * a * c));
}

// Vraag 2.
/*
	char a = 'a';
	while (a != '@') {
		cout << "Input (Typ \'@\' om te stoppen): ";
		cin >> a;
		cout << "\nOutput: " << volgendeletter(a) << endl;
	}
*/
char volgendeletter(char in) {
	if ((in >= 'A' && in < 'Z') || (in >= 'a' && in < 'z')) {
		return ++in;
	} else { 
		return '@';
	}
}

// Vraag 4.
/*
	int n = 0;
	while (n != -1) {
		cout << "Input (Typ \'-1\' om te stoppen): ";
		cin >> n;
		cout << "Som van getallen tussen 1 en " << n << "\nSom: " << som(n) << endl;
	}
*/
int som(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += i;
	}
	return s;
}

// Vraag 5.
/*
	double in = 0;
	int m = 0;
	while (in != -1) {
		cout << "Input (Typ \'-1\' om te stoppen): ";
		cin >> in;
		if (in == -1) {
			break;
		}
		cout << "Conversie (Typ 1 of 100): ";
		cin >> m;
		if (m == 1) {
			cout << "Verbruik: 1 liter op " << noshowpoint << conversie(in, m) << "km" << endl;
		} else {
			cout << "Verbruik: " << showpoint << setw(4) << setprecision(3) << conversie(in, m) << " liter per 100km" << endl;
		}
	}
*/
double conversie(double v, int m) {
	double r = (100 / v);
	if (m == 1) {
		return static_cast<double>(static_cast<int>(r));
	} else {
		return r;
	}
}

// Vraag 6.
/*
	int a = 0, b, c;
	while (a != -1) {
		cout << "(Typ \'-1\' om te stoppen)\nGetal 1: ";
		cin >> a;
		if (a == -1) {
			break;
		}
		cout << "Getal 2: ";
		cin >> b;
		cout << "Getal 3: ";
		cin >> c;
		cout << "Grootste getal van (" << a << ", " << b << ", " << c << "): " << max(a, b, c) << endl;
	}
*/
int max(int a, int b, int c) {
	if ((a > b) && (a > c)) {
		return a;
	} else if ((b > a) && (b > c)) {
		return b;
	} else {
		return c;
	}
}

// Vraag 7.
/*
	datum();
	datum(29, 2, 2000);
	datum(29, 2, 2001);
	datum(31, 10, 2031);
	datum(14, 10, 2000);
*/
void datum(int dag, int maand, int jaar) {
	const char mn[13][10] = { "", "Januari", "Februari", "Maart", "April", "Mei", "Juni", "Juli", "Augustus", "September", "Oktober", "Novemeber", "December" };
	int mad[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (jaar < 1930) {
		if (jaar > 100) {
			jaar = 1930;
		} else if ((jaar > 0) && (jaar < 29) || jaar == 0) {
			jaar = 2000 + jaar;
		} else if ((jaar > 0) && (jaar > 29)) {
			jaar = 1900 + jaar;
		}
	} else if (jaar > 2029) {
		jaar = 2029;
	}

	if (maand < 1) {
		maand = 1;
	} else if (maand > 12) {
		maand = 12;
	}

	if ((jaar % 4) == 0) {
		mad[2]++;
	}

	if (dag < 1) {
		dag = 1;
	}
	else if (dag > mad[maand]) {
		dag = mad[maand];
	}
	cout << dag << " " << mn[maand] << " " << jaar << endl;
}

// Vraag 8.
/*
	double g, a, b;
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	max(a, b, g);
	cout << "\nGrootste: " << g << endl;
*/
void max(double a, double b, double& m) {
	if (a > b) {
		m = a;
	} else {
		m = b;
	}
}

// Vraag 9.
/*
	long long a, b;
	fac(20, a);
	fac(10, b);
	cout << "A: " << a << "\nB: " << b << endl;
*/
void fac(int n, long long& resultaat) {
	resultaat = 1;
	if (n < 0) {
		resultaat = 0;
		return;
	}
	for (int i = 1; ((i <= n) && (resultaat < LLONG_MAX)); i++) {
		resultaat = (resultaat * i);
	}
}
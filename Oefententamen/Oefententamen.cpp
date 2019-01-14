// Oefententamen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_2_1 = 7;

double metersNaarMijlen(double meters);
void printAfstanden(double beginpunt, double snelheid, double tijdsinterval, int aantalwaarden);
char hoogsteLetter(const char a[], int lengte);
char bepaalHoogsteEnLaagsteLetter(char a[], int lengte);

void opdr1();
void opdr2();
void opdr3();

int main()
{
	// 1
	// opdr1();

	// 2
	// opdr2();

	// 3
	opdr3();
}

void opdr1() {
	// 1.1
	double waarde;
	cout << "1.1\nVoer waarde in: ";
	cin >> waarde;
	cout << "Waarde: " << waarde << endl;

	// 1.2
	cout << "\n1.2\n1km = " << metersNaarMijlen(1000) << "mi";
	cout << "\n150.5m = " << metersNaarMijlen(150.5) << "mi" << endl;

	// 1.3
	cout << "\n1.3\n";
	printAfstanden(5.0, 60.0, 0.5, 10);
}

void opdr2() {
	char a[MAX_2_1] = { 'a', 'b', 't', 'a', 'z', 'Z', 'X' };
	char h, l;

	// 2.1
	h = hoogsteLetter(a, MAX_2_1);

	// 2.2
	l = bepaalHoogsteEnLaagsteLetter(a, MAX_2_1);

	cout << "Hoogste letter: " << h << endl;
	cout << "Laagste letter: " << l << endl;

}

void opdr3() {
	char grafiek[8][10] = {};
	double waardes[8];
	for (int i = 0; i < 8; i++) {
		cout << "Waarde " << i << ": ";
		cin >> waardes[i];
	}

	double hoogste = waardes[0];
	for (int j = 0; j < 8; j++) {
		if (waardes[j] > hoogste) {
			hoogste = waardes[j];
		}
	}
	int interval = 1;
	if (hoogste > 10) {
		interval = static_cast<int>(hoogste) / 10;
		for (int k = 0; k < 8; k++) {
			waardes[k] = waardes[k] / interval;
		}
	}
	
	for (int c = 0; c < 8; c++) {
		for (int k = 0; k < 10; k++) {
			if ((waardes[c] * interval) >= ((10 - k) * interval)) {
				grafiek[c][k] = '*';
			}
			else {
				grafiek[c][k] = ' ';
			}
		}
	}

	for (int r = 0; r < 10; r++) {
		for (int c = 0; c < 8; c++) {
			cout << grafiek[c][r];
		}
		cout << "\n";
	}
	cout << endl;
}

char hoogsteLetter(const char a[], int lengte) {
	char hf = a[0];
	for (int i = 1; i < lengte; i++) {
		if (a[i] > hf) {
			hf = a[i];
		}
	}
	return hf;
}

char bepaalHoogsteEnLaagsteLetter(char a[], int lengte) {
	char hoogste = hoogsteLetter(a, lengte);
	char laagste = hoogste;
	for (int i = 0; i < lengte; i++) {
		if (a[i] < laagste) {
			laagste = a[i];
		}
	}
	return laagste;
}

double metersNaarMijlen(double meters) {
	double mijlen = meters * 0.00062137;
	return mijlen;
}

void printAfstanden(double beginpunt, double snelheid, double tijdsinterval, int aantalwaarden) {
	cout << "Beginpunt:      " << setw(5) << setprecision(1) << fixed << beginpunt << " km"
		<< "\nSnelheid:       " << setw(5) << setprecision(1) << fixed << snelheid << " km/h"
		<< "\nTijdsinterval:  " << setw(5) << setprecision(1) << fixed << tijdsinterval << " min"
		<< "\nAantal waarden: " << setw(5) << aantalwaarden;

	cout << "\n\n" << left << setw(15) << "Tijd [min]" << left << setw(15) << "Afstand [km]" << left << setw(15) << "Afstand [mi]";
	for (int i = 0; i < aantalwaarden; i++) {
		cout << "\n" << setw(15) << left << setprecision(1) << fixed << (0 + (tijdsinterval * i))
			<< setw(15) << left << setprecision(1) << fixed << (beginpunt + ((snelheid / 60) * (tijdsinterval * i)))
			<< setw(15) << left << setprecision(1) << fixed << metersNaarMijlen(((beginpunt + ((snelheid / 60) * (tijdsinterval * i))) * 1000));
	}
}
// Les3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

void h2p17v1() {
	int x = 2;
	cout << "x != 2 && x > 0 | " << (x != 2 && x > 0) << "\n";
	cout << "x == 2 && x > 0 | " << (x == 2 && x > 0) << "\n";
	cout << "x != 2 || x > 0 | " << (x != 2 || x > 0) << "\n";
	cout << "x == 2 || x > 0 | " << (x == 2 || x > 0) << "\n";
	cout << "!(x != 2)       | " << !(x != 2) << endl;
}

void h2p17v4() {
	cout << "(-1 == true)  | " << (static_cast<bool>(-1) == true)  << "\n";
	cout << "(-1 == false) | " << (static_cast<bool>(-1) == false) << endl;
}

void h2p17v10() {
	char ch = 'Z';
	for (int a = 52; a >= 27; a--) {
		cout << ch;
		ch--;
	}
}

void h2p17v11() {
	for (int i = 1; i <= 23; i++) {
		if (i > 1 && i < 23 && (i % 2) == 1) {
			cout << i << endl;
		}
	}
}

void h2p17v13() {
	int getal;
	cout << "Tik een oneven getal kleiner dan 100:" << endl;
	cin >> getal;
	cin.get();
	while (getal != 101) {
		cout << setw(5) << getal;
		getal += 2;
	}
}

void h2p17v18() {
	int getal;
	int rij = 1, kol = 1;
	do {
		do {
			getal = rij * kol;
			cout << setw(4) << getal;
			kol++;
		} while (kol <= 10);
		kol = 1;
		rij++;
		cout << endl;
	} while (rij <= 5);
}

void h2p18v1() {
	int a, b;
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	if (a > b) {
		cout << "Grootste: " << a << endl;
	}
	else {
		cout << "Grootste: " << b << endl;
	}
}

void h2p18v2() {
	float c = 0.0F;
	for (int i = 1; i <= 5; i++) {
		cin >> c;
		if (c > 10.0F) {
			c = 10.0F;
		} else if (c < 1.0F) {
			c = 1.0F;
		}
		if (c > 5.5F) {
			cout << c << " is voldoende.\n";
		} else {
			cout << c << " is onvoldoende.\n";
		}
	}
	cout << endl;
}

void h2p18v6() {
	int som = 0;
	for (int i = 2; i <= 24; i++) {
		if ((i % 2) == 0) {
			cout << setw(4) << i;
			som += i;
		}
	}
	cout << "\nSom: " << som << endl;
}

void h2p18v8() {
	cout << "x  " << setw(16) << "kwadraat" << setw(16) << "derde macht\n";
	cout << setprecision(2) << showpoint << fixed;
	float x = 1.00F;
	for (; x <= 7.50F; x += 0.50F) {
		cout << x;
		cout << setw(14) << (x * x);
		cout << setw(16) << (x * x * x) << "\n";
	}
	cout << endl;
	cin.get();
}

void h2p18v10() {
	const float jaar_rente =    1.005F;
	const float storting   = 1000.00F;
	      float bedrag     =    0.00F;
	cout << "Rente: " << ((jaar_rente - 1) * 100) << "%\nStartbedrag: " << showpoint << storting << "\n";
	cout << setw(12) << "Nieuw bedrag" << setw(12) << "Jaar\n";
	bedrag = storting;
	for (int i = 1; i <= 10; i++) {
		bedrag = bedrag * jaar_rente;
		cout << setw(12) << setprecision(6) << showpoint << bedrag << setw(11) << (2018 + i) << endl;
	}
	cin.get();
}

void h2p18v12() {
	char ch = 'j';
	double cijfer, som = 0.0, gemiddelde;
	int aantal = 0;
	while (ch != 'n') {
		cout << "Voer cijfer in: ";
		cin >> cijfer;
		cin.get();
		if (cijfer < 1.0 || cijfer > 10.0) {
			cout << "Dit was geen geldig cijfer" << endl;
			break;
		}
		aantal++;
		som += cijfer;
		cout << "Meer cijfers invoeren? (j of n): ";
		cin >> ch;
		while (cin.get() != '\n')
		cout << endl;
	}

	cout << "Er zijn " << aantal
		 << " geldige cijfers ingevoerd." << endl;
	if (aantal > 0) {
		gemiddelde = som / aantal;
		cout << "Het gemiddelde is: " << gemiddelde << endl;
	}
}

void h2p18v13() {
	double cijfer = 1;
	int voldoende = 0, onvoldoende = 0, aantal = 0;
	while (cijfer != 0) {
		cout << "Voer tentamencijfer in (Voer 0 als er niks komt): ";
		cin >> cijfer;
		cin.get();
		if ((cijfer < 1.0 || cijfer > 10.0) && cijfer != 0) {
			cout << "Dit was geen geldig cijfer" << endl;
		} else if (cijfer == 0) {
			break;
		} else {
			aantal++;
			if (cijfer < 5.5) {
				onvoldoende++;
			} else {
				voldoende++;
			}
		}
	}

	cout << "Er zijn " << aantal
		 << " geldige cijfers ingevoerd." << endl;
	if (aantal > 0) {
		cout << "Aantal voldoendes:   " << voldoende   << "\n"
			 << "Aantal onvoldoendes: " << onvoldoende << endl;
	}
}

void h2p18v21() {
	for (int i = 1; i <= 11; i++) {
		if (i <= 6) {
			cout << setw(7 - i);
			for (int j = 1; j <= i; j++) {
				cout << "*";
			}
			for (int k = 1; k < i; k++) {
				cout << "*";
			}
			cout << "\n";
		} else {
			cout << setw(6 - (11 % i));
			for (int m = 0; m <= (11 % i); m++) {
				cout << "*";
			}
			for (int n = 0; n < (11 % i); n++) {
				cout << "*";
			}
			cout << "\n";
		}
	}
}

void h2p18v24() {
	const float  groei  = 1.014;
	      float  dgroei = groei;
	const double opp    = 30e12;
	const double sb     = 6e9;
	         int ropp   = 5000;
		  double bev    = sb;
		     int j      = 1;

	for (int i = 1; i <= 10; i++) {
		dgroei *= groei;
	}
	cout << "Jaar" << setw(14) << "Bevolking" << "     Oppervlakte per mens in m2\n";
	cout << 2000 << setw(13) << setprecision(3) << showpoint << bev << setw(10) << ropp << "\n";
	while (ropp > 10) {
		bev = bev * dgroei;
		ropp = opp / bev;
		cout << (2000 + (j * 10)) << setw(13) << setprecision(3) << showpoint << bev << setw(10) << ropp << "\n";
		j++;
	}
}

int main()
{
	h2p18v24();
	/*
		h2p17v1();
		h2p17v4();
		h2p17v10();
		h2p17v11();
		h2p17v13();
		h2p17v18();
		h2p18v1();
		h2p18v2();
		h2p18v6();
		h2p18v6();
		h2p18v8();
		h2p18v10();
		h2p18v12();
		h2p18v13();
		h2p18v21();
		h2p18v24();
	*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

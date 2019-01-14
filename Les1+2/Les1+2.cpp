// Les1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void h1p9v9() {
	cout << "\"21 + 43\" | " << "21 + 43" << "\n";
	cout << "(21 + 43) | "   << (21 + 43) << endl;
}

void h1p9v13() {
	int x = 13, y = 7;
	double resultaat1, resultaat2;
	resultaat1 = x / y;
	resultaat2 = x % y;
	cout << "Resultaat 1: " << resultaat1 << "\nResultaat 2: " << resultaat2 << endl;
}

void h1p9v15() {
	int x = 13, y = 7;
	double resultaat;
	resultaat = static_cast<double>(x) / y;
	cout << "Resultaat: " << resultaat << endl;
}

void h1p9v16() {
	short     s  = 5;
	int       i  = 1000;
	long long lg = 12000000000L;
	double    totaal;
	totaal = (s + i) * lg;
	cout << "Totaal: " << totaal << endl;
}

void h1p9v20() {
	int x = 3, y = 5, som = 100;
	x++;
	y += 5;
	som += x;
	som += y;
	cout << som << endl;
}

void h1p10v1b() {
	cout << "10 / 2 * 5 | " << 10 / 2 * 5 << "\n";
	cout << " 4 / 5 * 2 | " << 4 / 5 * 2 << "\n";
	cout << " 2 * 4 / 5 | " << 2 * 4 / 5 << endl;
}

void h1p10v2() {
	int i = 2147483647, j = 0;
	j = i + 1;
	cout << "i     | " << i << "\n";
	cout << "i + 1 | " << j << endl;
}

void h1p10v3() {
	int i = -2147483647, j = -2;
	
	cout << "i | " << i << "\n";
	cout << "j | " << j << "\n\n";
	cout << "i + j = " << (i + j) << endl;
}

void h1p10v4() {
	unsigned int i = -1;
	cout << "'unsigned int i = -1;' => " << i << endl;
}

void h1p10v5() {
	float i = 123.456F, j = 654.321F;
	float  resultaatF = i + j;
	double resultaatD = i + j;
	cout << "Float:  " << resultaatF << "\n";
	cout << "Double: " << resultaatD << endl;
}

void h1p10v6() {
	float i = 1.3e38, j = 2.2e38;
	float resultaatF = i + j;
	cout << "Resultaat:  " << resultaatF << "\n";
}

void h1p10v7() {
	double i = 0.1e-10;
	double j = 1.7e308;
	double resultaatD = i / j;
	cout << "Resultaat:  " << resultaatD << "\n";
}

void h1p10vn8en9(int vraag) {
	const int maanden_in_jaar = 12;
	const float percentage_vakantiegeld = 0.08;
	float maandsalaris, jaarsalaris;
	cin >> maandsalaris;
	jaarsalaris = maanden_in_jaar * maandsalaris;
	if (vraag == 9) {
		jaarsalaris += (jaarsalaris * percentage_vakantiegeld);
	} else {
		vraag = 8;
	}
	cout << "Maandsalaris: €" << maandsalaris << "\n";
	cout << "Jaarsalaris:  €" << jaarsalaris  << "\n";
	cout << "Opdracht: " << vraag << endl;
}

void h1p10v10() {
	const int dagen_in_jaar = 365;
	const int uren_in_dag = 24;
	const int minuten_in_uur = 60;
	const int seconden_in_minuut = 60;
	int aantalSecondenInJaar = dagen_in_jaar * uren_in_dag * minuten_in_uur * seconden_in_minuut;
	cout << "Aantal seconedn in jaar: " << aantalSecondenInJaar << " seconden" << endl;
}

void h1p10vn11en12(int vraag = 11) {
	const float btw = 1.21;
	float prijs_exc_btw, prijs_inc_btw;

	if (vraag != 11 && vraag != 12) {
		vraag = 11;
	}

	if (vraag == 11) {
		cin >> prijs_exc_btw;
		prijs_inc_btw = prijs_exc_btw * btw;
	} else if (vraag == 12) {
		cin >> prijs_inc_btw;
		prijs_exc_btw = prijs_inc_btw / btw;
	}
	cout << "    BTW: " << btw << "%\n";
	cout << "exc BTW: " << prijs_exc_btw << "\n";
	cout << "inc BTW: " << prijs_inc_btw << "\n";
	cout << "Opdracht: " << vraag << endl;
}

int main()
{
	h1p10vn11en12(11);
	h1p10vn11en12(12);
	/*
		h1p9v9();
		h1p9v13();
		h1p9v15();
		h1p9v16();
		h1p9v20();

		h1p10v1b();
		h1p10v2();
		h1p10v3();
		h1p10v4();
		h1p10v5();
		h1p10v6();
		h1p10v7();
		h1p10vn8en9(vraag);
		h1p10v10();
		h1p10vn11en12(vraag);
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

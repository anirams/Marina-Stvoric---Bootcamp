// funkcije.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*void ninetyNineBottles();

int main()
{
	ninetyNineBottles();
	return 0;
}
*/
void ninetyNineBottles() {

	for (int i = 1; i < 100; i++) {
		if (i == 1) {
			cout << i << " bottle of beer on the wall" << endl;
		}
		else {
			cout << i << " bottles of beer on the wall" << endl;
		}
	}

}
/*
int zbroj();

int main() {

	zbroj();
	return 0;
}
*/
int zbroj() {
	int broj;
	int suma=0;
	do {
		cin >> broj;
		suma += broj;

	} while (broj != 0);

	cout << suma;
	return 0;
}
/*
int lozinka();

int main() {

	lozinka();
	return 0;
}
*/
int lozinka() {

	int tocnalozinka = 1234;
	int korisnikovunos;
	for (int i = 1; i <= 3; i++) {
		cin >> korisnikovunos;
		if (tocnalozinka == korisnikovunos) {
			cout << "unijeli ste tocnu lozinku";
		}
		else {
			cout << "unijeli ste netocnu lozinku, imate jos " << 3 - i << " pokusaja.";
		}
	}
	return 0;

} 
/*
int tablica();

int main() {

	tablica();
	return 0;
}
 */
int tablica() {

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << i * j << "\t";
		}
		cout << endl;
	}

	return 0;
}


int zbrajanje();
int oduzimanje();
int mnozenje();
int dijeljenje();

int kalkulator();
void izbornik();


int main() {

	izbornik();

	return 0;
}

void izbornik() {
	

	int brojfunkcije;
	do {
		system("cls");
	cout << "unesite ime funkcije koju zelite:  ";
	cin >> brojfunkcije;
	
		switch (brojfunkcije) {
		case 1:
			ninetyNineBottles();
			break;
		case 2:
			zbroj();
			break;
		case 3:
			tablica();
			break;
		case 4:
			lozinka();
			break;
		case 5:
			kalkulator();
			break;
		case 0:
			break;
		}
		system("PAUSE");
	} while (brojfunkcije != 0);
}

int zbrajanje(int a, int b) {
	cout << a + b;
	return 0;
}

int oduzimanje(int a, int b) {
	cout << a - b;
	return 0;
}

int mnozenje(int a, int b) {
	cout << a * b;
	return 0;
}

int dijeljenje(int a, int b) {
	cout << a / b;
	return 0;
}

int kalkulator() {
	int a;
	int b;
	char operat= ' ';
	cout << "molimo unesite 2 broja; ";
	cin >> a >> b;
	cout << "molimo unesite operator: ";
	cin >> operat;

	if (operat == '+') {
		zbrajanje(a,b);
	}
	else if (operat == '-') {
		oduzimanje(a,b);
	}
	else if (operat == '*') {
		mnozenje(a,b);
	}
	else if (operat == '/') {
		dijeljenje(a,b);
	}
	
	return 0;
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

// bankomat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

class Bankomat {
private:
	int stanjeRacuna = 0;
	int svotaZaPodignuti;
	int svotaZaUplatiti;
	void ispisiListic(int stanjeRacuna) {
		cout << "Listic: Stanje racuna je:" << stanjeRacuna << endl;
	}
public:
	void ispisStanja() {
		cout << "Stanje vaseg racuna: " << stanjeRacuna << endl;
	}
	void podizanje(int x) {
		svotaZaPodignuti = x;
		stanjeRacuna -= x;
		cout << "Podignuli ste: " << svotaZaPodignuti << " novca!" << endl;
		ispisiListic(stanjeRacuna);
	}
	void uplacivanje(int x) {
		svotaZaUplatiti = x;
		stanjeRacuna += x;
		cout << "Uplatili ste: " << svotaZaUplatiti << " novca!" << endl;
		ispisiListic(stanjeRacuna);
	}
};

class Vrata {
private:
	bool otvoren = false;
public:
	void stanje() {
		if (otvoren == false) {
			cout << "Prozor je zatvoren!" << endl;
		}
		else {
			cout << "Prozor je otvoren!" << endl;
		}
	}
	void promjenaStanja() {
		if (otvoren == false) {
			otvoren = true;
		}
		else {
			otvoren = false;
		}
	}
};

int main()
{
	Bankomat b1;
	Vrata v1;
	int y;
	int z;

	do {
		cout << "Unesite: " << endl << "1 - Podizanje novca" << endl << "2 - Uplacivanje novca" 
			<< endl << "3 - Stanje racuna" << endl << "4 - Otvori vrata" << endl << "0 - Izlaz" << endl;
		cin >> y;
		switch (y)
		{
		case 1: 
			cout << "Unesite svotu za podizanje: " << endl;
			cin >> z;
			b1.podizanje(z);
			break;
		case 2:
			cout << "Unesite svotu koju cete uplatiti: " << endl;
			cin >> z;
			b1.uplacivanje(z);
			break;
		case 3:
			b1.ispisStanja();
			break;
		case 4: 
			v1.promjenaStanja();
			v1.stanje();
			break;
		case 0:
			break;
		default:
			cout << "Netocan unos!" << endl;
			break;
		}
		system("pause");
		system("cls");
	} while (y != 0);

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

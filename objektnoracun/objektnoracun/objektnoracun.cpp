// objektnoracun.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

class Racun {
protected: 
	int brojRacuna;
	float stanjeRacuna = 0;
public: 
	void setRacun(int x) {
		brojRacuna = x;
	}
	int getRacun() {
		return brojRacuna;
	}
	void polaganjeNovca(int x) {
		stanjeRacuna += x;
		cout << "Polozili ste " << x << " novca na racun!" << endl;
	}
	void podizanjeNovca(int x) {
		stanjeRacuna -= x;
		cout << "podignuli ste " << x << " novca sa racuna!" << endl;
	}
	int dajStanjeRacuna() {
		return stanjeRacuna;
	}
};

class TekuciRacun : public Racun {
private:
	float kamatnaStopa = 0.0005;
	int brojMjeseci;
public:
	void set_brojMjeseci(int x) {
		brojMjeseci = x;
	}
	int iznosSKamatom() {
		return stanjeRacuna += kamatnaStopa * (float)brojMjeseci;
	}
};

class StedniRacun : public Racun {
private:
	float kamatnaStopa = 0.05;
	int brojGodina;
public:
	void set_brojGodina(int x) {
		brojGodina = x;
	}
	int iznosSKamatom() {
		return stanjeRacuna += kamatnaStopa * (float)brojGodina;
	}
};

void tekuciMeni() {

	TekuciRacun tr1;
	int y, z, x;

	do {
		cout << "Unesite: " << endl << "1 - Podizanje novca" << endl << "2 - Uplacivanje novca"
			<< endl << "3 - Stanje racuna" << endl << "4 - Izracun mjesecne kamate" << "5 - Unos broja racuna" << endl << "0 - Izlaz" << endl;
		cin >> y;
		switch (y)
		{
		case 1:
			cout << "Unesite svotu za podizanje: " << endl;
			cin >> z;
			tr1.podizanjeNovca(z);
			break;
		case 2:
			cout << "Unesite svotu koju cete uplatiti: " << endl;
			cin >> z;
			tr1.polaganjeNovca(z);
			break;
		case 3:
			cout << "Stanje vaseg racuna je: " << tr1.dajStanjeRacuna() << " novaca!" << endl;
			break;
		case 4:
			cout << "Unesite broj mjeseci za koji zelite izracunati kamatu: " << endl;
			cin >> z;
			tr1.set_brojMjeseci(z);
			tr1.iznosSKamatom();
			break;
		case 5:
			cout << "Unesite broj racuna: " << endl;
			cin >> z;
			tr1.setRacun(z);
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
}

void stedniMeni() {

	StedniRacun sr1;
	int y, z;

	do {
		cout << "Unesite: " << endl << "1 - Podizanje novca" << endl << "2 - Uplacivanje novca"
			<< endl << "3 - Stanje racuna" << endl << "4 - Izracun godisnje kamate" << "5 - Unos broja racuna" << endl << "0 - Izlaz" << endl;
		cin >> y;
		switch (y)
		{
		case 1:
			cout << "Unesite svotu za podizanje: " << endl;
			cin >> z;
			sr1.podizanjeNovca(z);
			break;
		case 2:
			cout << "Unesite svotu koju cete uplatiti: " << endl;
			cin >> z;
			sr1.polaganjeNovca(z);
			break;
		case 3:
			cout << "Stanje vaseg racuna je: " << sr1.dajStanjeRacuna() << " novaca!" << endl;
			break;
		case 4:
			cout << "Unesite broj mjeseci za koji zelite izracunati kamatu: " << endl;
			cin >> z;
			sr1.set_brojGodina(z);
			sr1.iznosSKamatom();
			break;
		case 5:
			cout << "Unesite broj racuna: " << endl;
			cin >> z;
			sr1.setRacun(z);
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
}

int main()
{
	int y;
	do {
		cout << "Unesite: " << endl << "1 - Stedni Racun" << endl << "2 - Tekuci Racun" << endl << "0 - Izlaz" << endl;
		cin >> y;
		if (y == 1) {
			stedniMeni();
		}
		else if (y == 2) {
			tekuciMeni();
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

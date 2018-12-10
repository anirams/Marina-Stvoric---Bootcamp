// casinozadatak.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <string>
#include <fstream>

using namespace std;

void unosImena(string &ime, int &novac);
void izbornik();
int uplataNovca(string ime, int &novac, int &chipovi);
int isplataNovca(string ime, int &novac, int &chipovi);
void odabirIgre(string ime, int &novac, int &chipovi);

int jednorukiJack(string ime, int &novac, int &chipovi);
int bacanjeKockica(string ime, int &novac, int &chipovi);
void duploIliNista(string ime, int &novac, int &chipovi);

int main()
{
	string ime;
	int novac;
	int chipovi=0;
	int izbor=0;

	unosImena(ime, novac);

	//system("cls");
	
	do {
		cout << ime << ", vase trenutacno stanje je: " << novac << " novca i: " << chipovi << " chipova!" << endl;
		izbornik();
		cin >> izbor;
		system("cls");
		switch (izbor)
		{
		case 1: 
			uplataNovca(ime, novac, chipovi);
			break;
		case 2: 
			isplataNovca(ime, novac, chipovi);
			break;
		case 3:
			odabirIgre(ime, novac, chipovi);
		case 5:
			unosImena(ime, novac);
			break;
		default:
			break;
		}
	} while (izbor != 5);

	return 0;
}

void unosImena(string &ime, int &novac) {


	cout << "Molimo unesite vase ime: ";
	cin >> ime;
	cout << "Molimo unesite kolicinu novca s kojim zelite igrati: ";
	cin >> novac;

}

void izbornik() {
	
	cout << "Molimo unesite: " << endl << "1 za uplatu novca" << endl << "2 za isplatu novca" << endl
		<< "3 za odabir igre" << endl << "4 za highscore" << endl << "5 za izlaz iz programa" << endl;
	
}

int uplataNovca(string ime, int &novac, int &chipovi) {
	int novacuchipove;
	cout << "Unesite koliko novca zelite zamijeniti za chipove: " << endl;
	cin >> novacuchipove;
	if (novacuchipove > novac) {
		cout << ime << ", nemate toliko novca!" << endl;
		uplataNovca(ime, novac, chipovi);
	}
	else {
		chipovi += novacuchipove / 5;
		novac = novac - novacuchipove + (novacuchipove % 5);
	}
	cout << ime << " sada imate: " << chipovi << " chipova i: " << novac << " novca." << endl;
	return 0;
}

int isplataNovca(string ime, int &novac, int &chipovi) {
	string isplata;
	cout << ime << ", imate " << novac << " novca i " << chipovi << " chipova" << endl
		<< "Zelite li isplatiti svoje chipove unesite \"DA\": " << endl;
	cin >> isplata;

	novac += chipovi * 5;
	chipovi = 0;
	
	cout << "Novo stanje je: " << novac << " novca i " << chipovi << " chipova" << endl;

	return 0;
}

void odabirIgre(string ime, int &novac, int &chipovi) {
	int igra = -1;
	
	while (igra !=0) {
		
		cout << ime << ", vase trenutacno stanje je: " << novac << " novca i: " << chipovi << " chipova!" << endl;
		cout << "Unesite broj za odabir igre: " << endl << "1 jednoruki jack" << endl
			<< "2 bacanje kockica" << endl << "3 duplo ili ništa" << endl << "0 za povratak u prethodni izbornik" << endl;
		cin >> igra;
		switch (igra)
		{
		case 1: 
			jednorukiJack(ime, novac, chipovi);
			break;
		case 2: 
			bacanjeKockica(ime, novac, chipovi);
			break;
		case 3:
			duploIliNista(ime, novac, chipovi);
			break;
		case 0: 
			izbornik();
			break;
		}
	} 

}

int jednorukiJack(string ime, int &novac, int &chipovi) {

	char polje[4] = { '+', 'X', 'O', '*' };
	char polje1, polje2, polje3;
	int izbor = -1;
		
		while (izbor != 0) {
			if (chipovi > 0) {
				cout << "unesite 1 za igru ili 0 za izlaz: " << endl;
				cin >> izbor;
				switch (izbor) {
				case 1:
					srand(time(NULL));
					polje1 = rand() % 4 + 1;
					polje2 = rand() % 4 + 1;
					polje3 = rand() % 4 + 1;
					cout << "\t" << polje[polje1] << "\t" << polje[polje2] << "\t" << polje[polje3] << endl;
					if (polje1 == polje2 && polje2 == polje3) {
						chipovi += 10;
					}
					else {
						chipovi--;
					}
					cout << ime << " vase trenutacno stanje je: " << chipovi << "chipova!" << endl;
					break;
				case 0:
					odabirIgre(ime, novac, chipovi);
					break;
				}
			
			}
			else {
				cout << ime << "Nemate dovoljno chipova!" << endl;
				break;
			}
		} 

	return 0;
}

int bacanjeKockica(string ime, int &novac, int &chipovi) {
	int izbor = -1;
	int korisnik1, korisnik2, racunalo1, racunalo2, kukupno, rukupno;

	while (izbor != 0 && chipovi > 0) {
		
			cout << "Unesite 1 za igru, 0 za izlazak iz igre: " << endl;
			cin >> izbor;
			
			switch (izbor) {
			case 1:
				srand(time(NULL));
				korisnik1 = rand() % 6 + 1;
				korisnik2 = rand() % 6 + 1;
				racunalo1 = rand() % 6 + 1;
				racunalo2 = rand() % 6 + 1;
				kukupno = korisnik1 + korisnik2;
				rukupno = racunalo1 + racunalo2;
				cout << "1.krug: \t" << ime << ": " << korisnik1 << "\t" << "Racunalo: " << racunalo1 << endl;
				cout << "2.krug: \t" << ime << ": " << korisnik2 << "\t" << "Racunalo: " << racunalo2 << endl;
				if (kukupno < rukupno) {
					cout << "Pobjednik je Racunalo: " << rukupno << endl;
					chipovi--;
					cout << ime << " trenutno imate: " << chipovi << " chipova!" << endl;
					break;
				}
				else if (kukupno > rukupno) {
					cout << "Pobjednik je " << ime << ": " << kukupno << endl;
					chipovi++;
					cout << ime << " trenutno imate: " << chipovi << " chipova!" << endl;
					break;
				}
				else if (kukupno == rukupno) {
					cout << "Nerijeseno!" << endl;
					cout << ime << " trenutno imate: " << chipovi << " chipova!" << endl;
					break;
				}
				break;
				system("cls");
			case 0:
				odabirIgre(ime, novac, chipovi);
				break;
			}
	}
	return 0;
}

void duploIliNista(string ime, int &novac, int &chipovi) {
	int brojuspilu = 0;
	
	string boje[4] = { "pik", "karo", "tref", "herc" };
	string karte[13] = { "2","3","4","5","6","7","8","9","10","J","Q","K","A" };
	vector <string> spil;

	string kartaigrac;
	string kartaracunalo;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			string karta;
			karta = boje[i] + " " + karte[j];
			spil.push_back(karta);
			brojuspilu++;
		}
	}

	/*cout << brojuspilu <<endl;
	for (int i = 0; i < spil.size(); i++) {
		cout << spil[i] << endl;
	}*/

	/*
	string kartakboja, kartakkarta, kartarboja, kartarkarta;
	string kartak, kartar;

	while (izbor != 0) {
		switch (izbor) {
		case 1:
			
			cout << "Unesite 1 za bacanje karata ili 0 za izlaz: " << endl;
			srand(time(NULL));
			kartakboja = boje[rand() % 4 + 1]; 
			kartakkarta = karte[rand() % 13 + 1];
			kartarboja = boje[rand() % 4 + 1]; 
			kartarkarta = karte[rand() % 13 + 1];
			kartar = kartarboja + kartarkarta;
			kartak = kartakboja + kartakkarta;
			if (kartakkarta < kartarkarta) {

				cout << "Racunalo: " << kartar << endl;
				cout << ime << kartak << endl << "Izgubili ste!" << endl;
				chipovi--;
				cout << ime << " trenutno imate: " << chipovi << " chipova!" << endl;
				break;
			}
			else if (kartarkarta < kartakkarta) {
				cout << "Racunalo: " << kartar << endl;
				cout << ime << kartak << endl << "Pobijedili ste!" << endl;
				chipovi++;
				cout << ime << " trenutno imate: " << chipovi << " chipova!" << endl;
				break;
			}
			else if (kartakkarta == kartarkarta) {
				cout << "Racunalo: " << kartar << endl;
				cout << ime << kartak << endl << "Nerijeseno!" << endl;
				cout << ime << " trenutno imate: " << chipovi << " chipova!" << endl;
				break;
			}
			break;
		case 0:
			odabirIgre(ime, novac, chipovi);
			break;
		}
	}*/
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

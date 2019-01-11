// knjiznica.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Knjiga {
private:
	int ISBN;
	string imeAutora = "";
	string prezimeAutora = "";
	string naziv = "";
	string posudjena = "0";

public:

	void set_ISBN(int x) {
		ISBN = x;
	}
	int get_ISBN() {
		return ISBN;
	}
	void set_imeAutora(string ime) {
		imeAutora = ime;
	}
	string get_imeAutora() {
		return imeAutora;
	}
	void set_prezimeAutora(string prezime) {
		prezimeAutora = prezime;
	}
	string get_prezimeAutora() {
		return prezimeAutora;
	}
	void set_naziv(string nazivKnjige) {
		naziv = nazivKnjige;
	}
	string get_naziv() {
		return naziv;
	}
	void set_posudjena(string x) {
		posudjena = x;
	}
	string get_posudjena() {
		return posudjena;
	}

	Knjiga() {
		cout << "Stvorili ste novu knjigu!" << endl;
	}
	~Knjiga() {
		//delete
	}
};

class Korisnik {
private:
	int OIB;
	string ime = "";
	string prezime = "";
public:

	void set_OIB(int x) {
		OIB = x;
	}
	int get_OIB() {
		return OIB;
	}
	void set_ime(string imeKorisnika) {
		ime = imeKorisnika;
	}
	string get_ime() {
		return ime;
	}
	void set_prezime(string prezimeKorisnika) {
		ime = prezimeKorisnika;
	}
	string get_prezime() {
		return prezime;
	}
	Korisnik() {
		cout << "Stvorili ste novog korisnika!" << endl;
	}

};

class Posudba {
private:
	Knjiga *posudjenaKnjiga;
	Korisnik *korisnik;
public:
	void set_posudjenaKnjiga(Knjiga *k) {
		posudjenaKnjiga = k;
	}
	Knjiga get_posudjenaKnjiga() {
		return *posudjenaKnjiga;
	}
	void set_korisnik(Korisnik *k) {
		korisnik = k;
	}
	Korisnik get_korisnik() {
		return *korisnik;
	}
};

vector <Knjiga> popisKnjiga;
vector <Korisnik> popisKorisnika;
vector <Posudba*> posudjeneKnjige;

void unosKnjige() {

	Knjiga k1;
	int ISBN;
	string imeAutora, prezimeAutora, naziv, posudjena = "";

	cout << "Unesite ISBN: " << endl;
	cin >> ISBN;
	k1.set_ISBN(ISBN);
	cout << "Unesite ime autora: " << endl;
	cin >> imeAutora;
	k1.set_imeAutora(imeAutora);
	cout << "Unesite prezime autora: " << endl;
	cin >> prezimeAutora;
	k1.set_prezimeAutora(prezimeAutora);
	cout << "Unesite naziv knjige: " << endl;
	cin.ignore();
	getline(cin, naziv);
	k1.set_naziv(naziv);

	posudjena = k1.get_posudjena();

	popisKnjiga.push_back(k1);
}

void unosKorisnika() {

	Korisnik k1;
	int OIB;
	string ime, prezime = "";

	cout << "Unesite OIB: " << endl;
	//cin.ignore();
	cin >> OIB;
	k1.set_OIB(OIB);

	cout << "Unesite ime korisnika: " << endl;
	//cin.ignore();
	cin >> ime;
	k1.set_ime(ime);


	cout << "Unesite prezime korisnika: " << endl;
	//cin.ignore();
	cin >> prezime;;
	k1.set_prezime(prezime);

	popisKorisnika.push_back(k1);

}

void ispisKnjiga() {

	for (int i = 0; i < popisKnjiga.size(); i++)
	{
		cout << popisKnjiga[i].get_ISBN()
			<< " " << popisKnjiga[i].get_imeAutora()
			<< " " << popisKnjiga[i].get_prezimeAutora()
			<< " " << popisKnjiga[i].get_naziv()
			<< " " << popisKnjiga[i].get_posudjena()
			<< endl;
	}

	system("pause");
}

void ispisKorisnika() {

	for (int i = 0; i < popisKorisnika.size(); i++) {
		cout << popisKorisnika[i].get_OIB()
			<< " " << popisKorisnika[i].get_ime()
			<< " " << popisKorisnika[i].get_prezime()
			<< endl;
	}
	system("pause");
}

void posudbaKnjige() {

	int x;
	int y;

	Posudba *temp = new Posudba;

	cout << "Unesite ISBN knjige koju zelite posuditi: " << endl;
	cin >> x;
	cout << "Unesite OIB korisnika: " << endl;
	cin >> y;

	for (int i = 0; i < popisKorisnika.size(); i++) {
		if (popisKorisnika[i].get_OIB() == y) {
			temp->set_korisnik(&popisKorisnika[i]); // ???????????????????????????????????????????????????????
		}
		else {
			cout << "Nije pronadjen korisnik s tim OIB-om!" << endl;
		}
	}

	for (int i = 0; i < popisKnjiga.size(); i++) {
		if (popisKnjiga[i].get_ISBN() == x) {
			if (popisKnjiga[i].get_posudjena() == "0") {
				cout << "Posudili ste knjigu: " << popisKnjiga[i].get_ISBN() << endl << popisKnjiga[i].get_imeAutora() << endl
					<< popisKnjiga[i].get_prezimeAutora() << endl << popisKnjiga[i].get_naziv() << endl;
				popisKnjiga[i].set_posudjena("1");
				temp->set_posudjenaKnjiga(&popisKnjiga[i]); //??????????????????????????????????????????????????
			}
			else {
				cout << "Knjiga je vec posudjena!";
			}
		}
		else {
			cout << "Unijeli ste netocan ISBN!" << endl;
		}
	}

	posudjeneKnjige.push_back(temp);

	system("pause");
}

void vracanjeKnjige() {



	int x;
	cout << "Unesite ISBN knjige koju zelite posuditi: " << endl;
	cin >> x;

	for (int i = 0; i < popisKnjiga.size(); i++) {
		if (popisKnjiga[i].get_ISBN() == x) {
			if (popisKnjiga[i].get_posudjena() == "1") {
				cout << "Vratili ste knjigu: " << popisKnjiga[i].get_ISBN() << endl << popisKnjiga[i].get_imeAutora() << endl
					<< popisKnjiga[i].get_prezimeAutora() << endl << popisKnjiga[i].get_naziv() << endl;
				popisKnjiga[i].set_posudjena("0");
			}
			else {
				cout << "Knjiga nije posudjena!" << endl;
			}
		}
		else {
			cout << "Unijeli ste netocan ISBN" << endl;
		}
	}

}

void ispisPosudbi() {
	Knjiga knjiga1;
	Korisnik korisnik1;

	for (int i = 0; i < posudjeneKnjige.size(); i++) {
		korisnik1 = posudjeneKnjige[i]->get_korisnik();
		knjiga1 = posudjeneKnjige[i]->get_posudjenaKnjiga();
		cout << korisnik1.get_ime() << endl << knjiga1.get_naziv() << endl;

	}
	system("pause");
}

int main()
{
	int x;


	do {
		system("cls");
		cout << "Unesite:" << endl << "1 - Unos nove knjige u sustav" << endl << "2 - Unos novog korisnika u sustav" << endl
			<< "3 - Posudba knjige" << endl << "4 - Vracanje knjige u knjiznicu" << endl << "5 - Ispis knjiga" << endl
			<< "6 - Ispis korisnika" << endl << "7 - Ispis posudbi" << endl;
		cin >> x;
		switch (x)
		{
		case 1:
			unosKnjige();
			break;
		case 2:
			unosKorisnika();
			break;
		case 3:
			posudbaKnjige();
			break;
		case 4:
			vracanjeKnjige();
			break;
		case 5:
			ispisKnjiga();
			break;
		case 6:
			ispisKorisnika();
			break;
		case 7:
			ispisPosudbi();
			break;
		case 0:
			break;
		default:
			cout << "Netocan unos!";
			break;
		}
	} while (x != 0);

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

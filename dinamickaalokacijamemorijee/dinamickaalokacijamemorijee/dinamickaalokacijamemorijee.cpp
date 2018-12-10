// dinamickaalokacijamemorijee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int *uvecajPolje(int *p_vrijednosti, int velicina);
	void povecanjePolja() {
		int brojac = 0;
		int velicina = 5;
		// stvorili varijaablu-- dali memorijsku lokkaciju sa new int[];
		//pokazivac je u biti varijabla koja moze drzati samo adresu
		int *p_vrijednosti = new int[velicina]; //p_vrijednosti=daje adresu jer je za sada stvoreno samo polje;
		int vrijednost;

		do {
			cout << "Unesite broj (ili 0 za izlaz): ";
			cin >> vrijednost;

			if (velicina == brojac + 1) {
				p_vrijednosti = uvecajPolje(p_vrijednosti, velicina);
				velicina *= 2;
			}
			p_vrijednosti[brojac] = vrijednost;
			brojac++;
		} while (vrijednost != 0);

		for (int i = 0; i < velicina; i++) {
			cout << p_vrijednosti[i] << endl;
		}
	}

	int *uvecajPolje(int *p_vrijednosti, int velicina) { //---prosljedjivanje po referenci/pokazivacu
		int *p_nove_vrijednosti = new int[velicina * 2];
		for (int i =0; i<velicina;i++) {
			p_nove_vrijednosti[i] = p_vrijednosti[i]; //pomocno polje za adresu, kasnije ovu novu adresu prebacimo u stari pointer array 
			delete p_vrijednosti;
			return p_nove_vrijednosti; //pointer funkcija mora return pointer
	
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

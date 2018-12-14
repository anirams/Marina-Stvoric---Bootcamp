// cekaonicalijecnik.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

void unosPacjenta(queue <string> &pacjenti);
void ulazakKodLijecnika(queue <string> &pacjenti);
void zaSljedeciPut(queue <string> pacjenti);

int main()
{
	system("cls");
	queue <string> pacjenti;
	int izbor;
	do {
		cout << "1 za unos pacjenta" << endl << "2 za ulazak kod lijecnika" << endl << "3 za preostali pacjenti" << endl;
		cin >> izbor;
		switch (izbor)
		{
		case 1:
			unosPacjenta(pacjenti);
			break;
		case 2:
			ulazakKodLijecnika(pacjenti);
			break;
		case 3:
			zaSljedeciPut(pacjenti);
			break;
		case 0:
			break;
		}
	} while (izbor != 0);
	return 0;
}

void unosPacjenta(queue <string> &pacjenti) {
	system("cls");
	string pacjent="";
	cout << "Unesite ime pacjenta: " << endl;
	cin >> pacjent;
	pacjenti.push_back(pacjent);
}

void ulazakKodLijecnika(vector <string> &pacjenti) {
	ifstream input("pacjenti.txt");
}

void zaSljedeciPut(vector<string>pacjenti) {

	ofstream output;
	output.open("pacjenti.txt", ios::out | ios::app);
	for (int i = 0; i < pacjenti.size(); i++) {
		output << pacjenti(i);
	}
	output.close();
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

// joker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int jackpot = 0;
	int polje[6];
	int dobitni[3];
	int mnozitelj = 100000;

	cin >> polje[0] >> polje[1] >> polje[2] >> polje[3] >> polje[4] >> polje[5]; // command line razmak gleda isto kao i enter

	//spaja zadnju znamenku u jedan br; npr 25%10=5 i * 100000= 500000 -> na taj nacin dobije prvu znamenku
	for (int i = 0; i < 6; i++) {
			jackpot += (polje[i] % 10) * mnozitelj;
			mnozitelj /= 10;
		}

	for (int i = 0; i < 3; i++) {
		cin >> dobitni[i];
	}

	for (int i = 0; i < 3; i++) {
		
		if (jackpot == dobitni[i]) {
			cout << "I. vrsta" << endl;
		}
		else if (jackpot % 100000 == dobitni[i] % 100000) {
			cout << "II. vrsta" << endl;
		}
		else if (jackpot % 10000 == dobitni[i] % 10000) {
			cout << "III. vrsta" << endl;
		}
		else if (jackpot % 1000 == dobitni[i] % 1000) {
			cout << "IV. vrsta" << endl;
		}
		else if (jackpot % 100 == dobitni[i] % 100) {
			cout << "V. vrsta" << endl;
		}
		else {
			cout << "Nedobitan" << endl;
		}
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

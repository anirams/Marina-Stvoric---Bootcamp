// bacanjekockice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int izbor;
	srand(time(NULL));
	int igrac1;
	int igrac2;
	string temp;
	vector <string> rezultat;
	
	do {
		cout << "unesite 1 za bacanje kockice, 0 za izlaz: ";
		cin >> izbor;

		ofstream output;
		output.open("primjer.txt", ios::out | ios::app);
		
		if (izbor == 1) {
			system("cls");
			for (int i = 0; i < 2; i++) {
				if (i == 0) {
					igrac1 = rand() % 6 + 1;
					output << igrac1 << "\n";
					cout << igrac1 << endl;
				}
				else if (i == 1) {
					igrac2 = rand() % 6 + 1;
					output << igrac2 << "\n";
					cout << igrac2 << endl;
				}

			}
			if (igrac1 < igrac2) {
				output << "Igrac 2" << "\n";
				cout << "Igrac 2" << endl;
			}
			else if (igrac2 < igrac1) {
				output << "Igrac 1" << "\n";
				cout << "Igrac 1" << endl;
			}
			else if (igrac1 == igrac2) {
				output << "Nerijeseno" << "\n";
				cout << "Nerijeseno" << endl;
			}

		}
		else {
			cout << "Igra je gotova";
		}

		output.close();

	} while (izbor != 0);
	
	
	
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

// selectionsort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

void selectionSort(int polje[], int velicina);
int main()
{
	srand(time(NULL));
	int velicina = 20;
	int polje[20];

	for (int i = 0; i < 20; i++) {
		polje[i] = rand() % 100 + 1;
	}
	for (int i = 0; i < velicina; i++) {
		cout << polje[i] << "\t";
	}
	cout << endl;
	selectionSort(polje, velicina);
	

	
	return 0;
}

void selectionSort(int polje[], int velicina) {
	int pos_minimum;
	int temp;
	for (int i = 0; i < (velicina - 1); i++) {
		pos_minimum = i;
		for (int j = i+1; j < velicina; j++) {

			if (polje[j] < polje[pos_minimum]) {
				pos_minimum = j;
			}
		
		}
		if (pos_minimum != i) {
			temp = polje[i];
			polje[i] = polje[pos_minimum];
			polje[pos_minimum] = temp;
		}
	}

	for (int i = 0; i < velicina; i++) {
		cout << polje[i] << "\t";
	}
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

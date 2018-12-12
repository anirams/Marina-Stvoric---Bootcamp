// insertionsort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

void insertionSort(int polje[], int velicina);

int main()
{
	int velicina = 20;
	int polje[20];

	for (int i = 0; i < 20; i++) {
		polje[i] = rand() % 100 + 1;
	}

	for (int i = 0; i < 20; i++) {
		cout << polje[i] << "\t";
	}
	cout << endl;
	insertionSort(polje, velicina);

	return 0;
}

void insertionSort(int polje[], int velicina) {
	int temp, i, j;
	
	for (i = 0; i < velicina; i++) {
		temp = polje[i];
		for (j = i; j >= 1 && polje[j - 1] > temp; j--) {
			polje[j] = polje[j - 1];
		}
		polje[j] = temp;
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

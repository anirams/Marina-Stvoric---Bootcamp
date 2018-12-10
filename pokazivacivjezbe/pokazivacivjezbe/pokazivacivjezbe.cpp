// pokazivacivjezbe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void zamjena(int &a, int &b);
int main()
{
	/*int x, y, z;
	cout << &x <<endl;
	cout << &y << endl;
	cout << &z << endl;
	*/

	/*int a;
	cin >> a;
	int *polje = new int[a];
	cout << polje;
		*/

	int a = 1;
	int b = 2;
	cout << a << b << endl;
		cout << &a << &b <<endl;
	zamjena(a, b);
	cout << a << b << endl;
	cout << &a << &b << endl;
		return 0;
}
// ako se proslijedjuje po referenci tj pokazivacu onda ne mijenjamo vrijednost kopije nne radi se kopija za novu funkciju 
// vec se radi s onim sto je na toj adresi
void zamjena(int &a, int &b) {
	
	int temp = a;
	a = b;
	b = temp;

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

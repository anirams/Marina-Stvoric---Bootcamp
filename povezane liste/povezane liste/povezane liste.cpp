// povezane liste.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

struct Node {
	int value;
	Node *next;
};

void insertElementFront(Node *&head, int value);
void pobrojiElemente(Node *temp);
void funkcijaZaPretrazivanje(Node *temp, int element);
void brisanjeNtogElementa(Node *&head, int zaBrisanje);

int main()
{
	Node *head = nullptr;
	Node *tail = nullptr;
	int element;
	int zaBrisanje;
	insertElementFront(head, 1);
	insertElementFront(head, 2);
	insertElementFront(head, 3);

	pobrojiElemente(head);
	cout << "Element: " << endl;
		cin >> element;
	funkcijaZaPretrazivanje(head, element);
	cout << "Koji element zelite izbrisati?" << endl;
	cin >> zaBrisanje;
	brisanjeNtogElementa(head, zaBrisanje);
	system("pause");

	return 0;
}

void insertElementFront(Node *&head, int value) {
	Node *temp = new Node;
	temp->value = value;
	temp->next = head;
	head = temp;
}

void pobrojiElemente(Node *temp) {
	int count = 0;
	if (temp == NULL) {
		cout << "lista je prazna" << endl;
	}
	else {
		while (temp != nullptr) {
			count++;
			temp = temp->next;
		}
	}
	cout << " U listi se nalazi " << count << " elemenata." << endl;
	system("pause");
}

void funkcijaZaPretrazivanje(Node *temp, int element) {
	int count = 0;
	while (temp) {
			if (count == element) {
			cout << temp->value << endl;
		}
		temp = temp->next;
		count++;
	}
	
}

void brisanjeNtogElementa(Node *&head, int zaBrisanje) {
	Node *temp = head;
	int count = -1;
	while (temp) {
		if (count == zaBrisanje) {
			temp;
		}
		temp = temp->next;
		count++;
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

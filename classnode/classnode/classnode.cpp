// classnode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

class Node
{
private:
	Node* next;
	int vrijednost;
	static int broj_nodeova;
public:
	Node();
	~Node();
	void set_podatak(int vrijednost);
	int get_podatak();
	void set_next(Node *nnn);
	Node *get_next();
	static int get_broj_nodeova();
};

class LinkedList
{
private:
	Node* head;
public:
	LinkedList();
	~LinkedList();
	void add_start(int data);
	void del_start();
	void add_tail(int data);
	void del_tail();
	void print();
};

int Node::broj_nodeova = 0;



LinkedList::LinkedList() {
	this->length = 0;
	this->head = NULL;
}

LinkedList::~LinkedList() {
	Node* next = head;
	Node* cur = NULL;
	while (next != NULL) {
		cur = next;
		next = next->next;
		delete cur;
	}
}

void LinkedList::add_start(int data) {
	Node* temp = new Node();
	temp->set_podatak(vrijednost);

}

void LinkedList::print() {
	Node* head = this->head;
	int i = 1;
	while (head) {
		std::cout << i << ": " << head->data << std::endl;
		head = head->next;
		i++;
	}
}

int main(int argc, char const *argv[])
{
	LinkedList* list = new LinkedList();
	for (int i = 0; i < 100; ++i)
	{
		list->add(rand() % 100);
	}
	list->print();
	std::cout << "List Length: " << list->length << std::endl;
	delete list;
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

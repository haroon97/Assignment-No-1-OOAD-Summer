#pragma once
#include "Node.h"

class LinkedList
{
private:
	// Member variables of a linked list
	Node* head;
	Node* tail;

public:
	// Prototype for deafult constructor
	LinkedList();

	// Prototype for Destructor
	~LinkedList();

	// Prototype for insert into LL
	void insertIntoList(int element);

	// Prototype for delete from LL
	int deleteFromList(int element);

	// Prototype for display data
	void display();
};


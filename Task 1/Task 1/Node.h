#pragma once
#include <iostream>
using namespace std;
class Node
{
public:
	// Variables of a single Node
	int data;
	Node* next;

public:
	// Prototype for default constructor
	Node();

	// Prototype for parameterized constructor
	Node(int data);

	// Prototype for Destructor
	~Node();
};


#pragma once
#include <iostream>
using namespace std;

class Stack {
private:
	// Member variables
	int *data;
	int nextIndex;
	int capacity;

public:
	// Default Constructor
	Stack();

	// Parameterized Constructor
	Stack(int size);

	// Copy Constructor
	Stack(Stack& s);

	// Destructor
	~Stack();

	// Push element into stack
	void push(int element);

	// Pop element from stack
	int pop();

	// Is Stack empty
	bool isEmpty();

	// Is Stack full
	bool isFull();

	// return top element of Stack
	int top();

	// Display elements of stack
	void display();
};
#pragma once
#include <iostream>
using namespace std;

class Queue
{
private:
	// Member varibles
	int *data;
	int nextIndex;
	int frontIndex;
	int size;
	int capacity;

public:
	// Prototype for default constructor
	Queue();

	// Prototype for Destructor
	~Queue();

	// Prototype for parameterized constructor
	Queue(int size);

	// Prototype for copy constructor
	Queue(Queue &q);

	// Prototype for size of queue
	int getSize();

	// Prototype for empty
	bool isQueueEmpty();

	// Rearrange queue elements
	void rearrageQueue();

	// Prototype for push function
	void push(int element);

	// Prototype for pop function
	int pop();

	// Prototype for get top element of queue
	int getTop();

	// Prototype for display queue elements
	void display();
};


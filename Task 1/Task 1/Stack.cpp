#include "Stack.h"

// Function Definition for default constructor
Stack::Stack() {
	data = new int[10];
	nextIndex = 0;
	capacity = 10;
}

// Finction definition for parameterized constructor
Stack::Stack(int size) {
	if (size < 1) {
		cout << "Invalid input. Set to default 10" << endl;
		data = new int[10];
		nextIndex = 0;
		capacity = 10;
	}
	else {
		data = new int[size];
		nextIndex = 0;
		capacity = size;
	}

}

// Function definition for copy constructor
Stack::Stack(Stack& s) {
	data = new int[s.capacity];
	for (int i = 0; i < s.nextIndex; i++) {
		data[i] = s.data[i];
	}
	nextIndex = s.nextIndex;
	capacity = s.capacity;
}

// Function definition for destructor
Stack::~Stack() {
	data = nullptr;
	delete[]data;
}


// Function definition for pushing element into stack
void Stack::push(int element) {
	if (nextIndex == capacity) {
		cout << "Stack is full" << endl;
		return;
	}
	data[nextIndex] = element;
	nextIndex++;
}

// Function definition for pop
int Stack::pop() {
	if (nextIndex == 0) {
		cout << "Stack is empty" << endl;
		return 'e';
	}
	nextIndex--;
	return data[nextIndex];
}

// Function definition for isEmpty
bool Stack::isEmpty() {
	return nextIndex == 0;
}

// Function definition for isFull
bool Stack::isFull() {
	return nextIndex == capacity;
}

// Function definition for top element of stack
int Stack::top() {
	if (isEmpty()) {
		cout << "Stack is empty" << endl;
		return -1;
	}
	return data[nextIndex - 1];
}

// Function definition for display elements of stack
void Stack::display() {
	if (nextIndex == 0) {
		cout << "Stack is empty" << endl;
		return;
	}
	int index = nextIndex - 1;
	while (index != -1) {
		cout << data[index] << " ";
		index--;
	}
	cout << endl;
}




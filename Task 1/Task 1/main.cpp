#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
	Stack s1;
	int size = 0, data = 0;
	cout << "Enter the number of elements in the stack" << endl;
	cin >> size;
	Stack s2(size);
	cout << "Enter the elements into the stack" << endl;
	for (int i = 0; i < size; i++) {
		cin >> data;
		s2.push(data);
	}
	cout << "The element at the top is: " << endl;
	cout << s2.top() << endl;
	s2.pop();
	cout << "After popping an element the element at the top is: " << endl;
	cout << s2.top() << endl;
	cout << "Elements in the stack are: " << endl;
	s2.display();
}
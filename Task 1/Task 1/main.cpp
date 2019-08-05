#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
using namespace std;

int main() {
	cout << "Testing Stack" << endl;
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

	system("pause");
	system("cls");

	cout << "Testing Queue" << endl;
	Queue q1;
	int size1 = 0, data1 = 0;
	cout << "Enter the number of elements in the queue" << endl;
	cin >> size1;
	Queue q2(size1);
	cout << "Enter the elements into the queue" << endl;
	for (int i = 0; i < size1; i++) {
		cin >> data1;
		q2.push(data1);
	}
	cout << "The element at the front is: " << endl;
	cout << q2.getTop() << endl;
	q2.pop();
	cout << "After popping an element the element at the front is: " << endl;
	cout << q2.getTop() << endl;
	cout << "Elements in the queue are: " << endl;
	q2.display();

	system("pause");
	system("cls");

	cout << "Testing Linked List" << endl;
	LinkedList l;
	l.insertIntoList(2);
	l.insertIntoList(3);
	l.insertIntoList(4);
	l.insertIntoList(5);
	l.display();
	cout << endl;
	l.deleteFromList(2);
	l.display();
	cout << endl;
	l.deleteFromList(2);
	l.display();
}
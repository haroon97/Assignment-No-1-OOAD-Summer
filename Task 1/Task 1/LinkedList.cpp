#include "LinkedList.h"


LinkedList::LinkedList()
{
	head = NULL;
	tail = NULL;
}


LinkedList::~LinkedList()
{
	head = NULL;
	tail = NULL;
	delete head;
	delete tail;
}

void LinkedList::insertIntoList(int element) {
	Node* newNode = new Node(element);
	if (head == NULL) {
		head = newNode;
		tail = newNode;
	}
	else {
		tail->next = newNode;
		tail = newNode;
	}
	newNode = NULL;
	delete newNode;
}

int LinkedList::deleteFromList(int element) {
	if (head == NULL) {
		cout << "List is empty" << endl;
		return -1;
	}
	Node* prev = NULL;
	Node* temp = head;
	while (temp != NULL) {
		if (temp->data == element) {
			if (prev == NULL) {
				int elementToDelete = temp->data;
				head = temp->next;
				temp = NULL;
				delete temp;
				delete prev;
				return elementToDelete;
			}
			int elementToDelete = temp->data;
			prev->next = temp->next;
			temp = NULL;
			prev = NULL;
			delete prev;
			delete temp;
			return elementToDelete;
		}
		prev = temp;
		temp = temp->next;
	}
	temp = NULL;
	prev = NULL;
	delete temp;
	delete prev;
	cout << "Element doesnt exists" << endl;
	return -1;
}

void LinkedList::display() {
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	temp = NULL;
	delete temp;
}

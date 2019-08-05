#include "Queue.h"

// Definition for default constructor
Queue::Queue()
{
	data = new int[10];
	nextIndex = 0;
	capacity = 10;
	size = 0;
}

// Definition for Destructor
Queue::~Queue()
{
	delete[]data;
}

// Definition for parameterized constructor
Queue::Queue(int s) {
	if (s < 1) {
		cout << "Minumum size should be 1. Set to default 10" << endl;
		data = new int[10];
		nextIndex = 0;
		capacity = 10;
		size = 0;
	}
	else {
		data = new int[s];
		nextIndex = 0;
		capacity = s;
		size = 0;
	}
}

// Definition for copy constructor
Queue::Queue(Queue &q) {
	data = new int[q.capacity];
	for (int i = 0; i < q.capacity; i++) {
		data[i] = q.data[i];
	}
	nextIndex = q.nextIndex;
	capacity = q.capacity;
	size = q.size;
}

// Definition for size of queue
int Queue::getSize() {
	return size;
}

// Definition for is queue empty
bool Queue::isQueueEmpty() {
	return size == 0;
}

// Definition for rearrange queue elements
void Queue::rearrageQueue() {
	for (int i = 0; i < size; i++) {
		data[i] = data[i + 1];
	}
}

// Definition for push function
void Queue::push(int element) {
	if (nextIndex == capacity) {
		cout << "Queue is full" << endl;
		return;
	}
	data[nextIndex] = element;
	nextIndex++;
	size++;
}

// Definition for pop function
int Queue::pop() {
	if (isQueueEmpty()) {
		cout << "Queue is empty" << endl;
		return -1;
	}
	int frontElement = data[0];
	nextIndex--;
	size--;
	rearrageQueue();
	return frontElement;

}

// Definition for get top of queue
int Queue::getTop() {
	if (isQueueEmpty()) {
		cout << "Queue is empty" << endl;
		return -1;
	}
	return data[0];
}

// Definition for display function
void Queue::display() {
	for (int i = 0; i < size; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
}





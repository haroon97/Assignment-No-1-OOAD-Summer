#include "Node.h"

// definition for default constructor
Node::Node()
{
	data = 1;
	next = NULL;
}

// Definition for parameterized constructor
Node::Node(int d) {
	data = d;
	next = NULL;
}

// Definition for Destructor
Node::~Node()
{
	next = NULL;
	delete next;
}

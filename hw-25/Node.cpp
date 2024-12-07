#ifndef NODE_CPP
#define NODE_CPP

#include "Node.h"

Node::Node(MyInt myInt) : myInt(myInt), next(nullptr) {}
MyInt Node::GetData() const {
	return myInt;
}
void Node::SetData(MyInt myInt) {
	this->myInt = myInt;
}
Node* Node::GetNext() const
{
	return next;
}
void Node::SetNext(Node* next) {
	this->next = next;
}

#endif
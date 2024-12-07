#pragma once

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "MyInt.h"
#include "Node.h"
#include <stdexcept>

class LinkedList {
private:
	Node* head;
	size_t size;
public:
	LinkedList();
	size_t GetSize() const;
	void InsertAtEnd(MyInt value);
	void InsertAtBeginning(MyInt value);
	void RemoveAtBeginning();
	void RemoveAtEnd();
	void RemoveAtIndex(int index);
	MyInt GetMyInt(int index);
	~LinkedList();
};

#endif
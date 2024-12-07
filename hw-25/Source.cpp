#include <iostream>
#include "MyInt.h"
#include "Node.h"
#include "LinkedList.h"
using namespace std;

//class MyInt
//{
//private:
//	int data;
//public:
//	MyInt(int data)
//	{
//		this->data = data;
//	}
//	void SetData(int data)
//	{
//		this->data = data;
//	}
//	int GetInt() const {
//		return data;
//	}
//};
//
//class Node
//{
//private:
//	MyInt myInt;
//	Node* next;
//public:
//	Node(MyInt myInt) : myInt(myInt), next(nullptr) {}
//	MyInt GetData() const {
//		return myInt;
//	}
//	void SetData(MyInt myInt) {
//		this->myInt = myInt;
//	}
//	Node* GetNext() const
//	{
//		return next;
//	}
//	void SetNext(Node* next) {
//		this->next = next;
//	}
//};
//class LinkedList {
//private:
//	Node* head;
//	size_t size;
//public:
//	LinkedList() : head(nullptr), size(0) {}
//	size_t GetSize() const
//	{
//		return size;
//	}
//	void InsertAtEnd(MyInt value)
//	{
//		if (head == nullptr)
//		{
//			InsertAtBeginning(value);
//			return;
//		}
//		Node* newNode = new Node(value);
//		Node* temp = head;
//		while (temp->GetNext() != nullptr) {
//			temp = temp->GetNext();
//		}
//		temp->SetNext(newNode);
//		size++;
//	}
//	void InsertAtBeginning(MyInt value) {
//		Node* newNode = new Node(value);
//		newNode->SetNext(head);
//		head = newNode;
//		size++;
//	}
//	void RemoveAtBeginning() {
//		if (head == nullptr) {
//			return;
//		}
//		else if (head->GetNext() == nullptr) {
//			delete head;
//			return;
//		}
//		Node* temp = head;
//		head = head->GetNext();
//		delete temp;
//		size--;
//	}
//	void RemoveAtEnd()
//	{
//		if (head == nullptr) {
//			return;
//		}
//		else if (head->GetNext() == nullptr) {
//			delete head;
//			return;
//		}
//		Node* temp = head;
//		while (temp->GetNext() != nullptr) {
//			temp = temp->GetNext();
//		}
//		delete temp;
//		size--;
//	}
//	void RemoveAtIndex(int index) {
//		if (index < 0 || index >= size) {
//			throw std::out_of_range("LinkedList don't have enough indexes");
//		}
//		if (index == 0) {
//			RemoveAtBeginning();
//			return;
//		}
//		else if (index == size) {
//			RemoveAtEnd();
//			return;
//		}
//		int item = 0;
//		Node* prev_temp = head;
//		while (item != index - 1) {
//			prev_temp = prev_temp->GetNext();
//			item++;
//		}
//		Node* temp = prev_temp->GetNext();
//		prev_temp->SetNext(temp->GetNext());
//		delete temp;
//		size--;
//	}
//	MyInt GetMyInt(int index) {
//		if (index < 0 || index >= size) {
//			throw std::out_of_range("LinkedList don't have enough indexes");
//		}
//		int item = 0;
//		Node* temp = head;
//		while (item != index) {
//			temp = temp->GetNext();
//			item++;
//		}
//		return temp->GetData();
//	}
//	~LinkedList() {
//		while (head != nullptr) {
//			Node* temp = head;
//			head = head->GetNext();
//			delete temp;
//		}
//	}
//};

void printList(LinkedList* list);

int main()
{
	
	LinkedList* list = new LinkedList();
	list->InsertAtBeginning(MyInt(3));
	list->InsertAtBeginning(MyInt(2));
	list->InsertAtBeginning(MyInt(1));
	list->InsertAtEnd(MyInt(4));
	cout << "Size : " << list->GetSize() << endl;
	printList(list);
	list->RemoveAtBeginning();
	list->RemoveAtIndex(1);
	list->RemoveAtEnd();
	printList(list);
}

void printList(LinkedList* list) {
	cout << "List[ ";
	for (size_t i = 0; i < list->GetSize(); i++)
	{
		if (i == list->GetSize() - 1) {
			cout << list->GetMyInt(i).GetInt() << " ]" << endl;
		}
		else {
			cout << list->GetMyInt(i).GetInt() << ", ";
		}
	}
}
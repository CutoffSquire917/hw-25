#ifndef MYINT_CPP
#define MYINT_CPP

#include "MyInt.h"

MyInt::MyInt(int data)
{
	this->data = data;
}
void MyInt::SetData(int data)
{
	this->data = data;
}
int MyInt::GetInt() const {
	return data;
}

#endif
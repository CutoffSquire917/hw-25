#pragma once

#ifndef MYINT_H
#define MYINT_H

class MyInt
{
private:
	int data;
public:
	MyInt(int data);
	void SetData(int data);
	int GetInt() const;
};

#endif
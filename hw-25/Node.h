#pragma once

#ifndef NODE_H
#define NODE_H

#include "MyInt.h"

class Node {
private:
    MyInt myInt;
    Node* next;
public:
    Node(MyInt myInt);
    MyInt GetData() const;
    void SetData(MyInt myInt);
    Node* GetNext() const;
    void SetNext(Node* next);
};

#endif
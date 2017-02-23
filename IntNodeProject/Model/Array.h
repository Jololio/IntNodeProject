//
//  Array.h
//  IntNodeProject
//
//  Created by Alabudi, Joseph on 2/15/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include "Node.h"
#include <assert.h>



template <class Type>
class Array
{
private:
    int size;
    Node<Type> * front;
public:
    Array();
    Array(int size);
    
    void setAtIndex(int index, Type value);
    Type getFromIndex(int index)
    int getSize();
};

template <class Type>
Array<Type> :: Array()
{
    //Never used
    //Default constructor only supplied to avoid compilation error
}

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    this->size = size;
    this->front = new Node<Type>();
    
    for (int index = 1; index < size; index++)
    {
        Node<Type>() * current = new Node<Type>();
        current->setNodePointer(front);
        front = current;
    }
        
}

template <class Type>
void Array<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < size);
    Node<Type> * current = front;
    for(int spot = 0; spot < index; spot++)
    {
        current = current->getNodePointer();
    }
    
    current->setNodeData(data);
}

template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index > 0 && index < size);
    Type value;
    Node<Type> * current = front;
    for(int index = 0; position < index; position++)
    {
        current = current->getNodePointer();
    }
    
    value = current->getNodeData();
    return value;
}

template <class Type>
int Array<Type> :: getSize()
{
    return size;
}

#endif /* Array_h */
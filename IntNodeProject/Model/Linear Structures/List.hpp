//
//  List.hpp
//  IntNodeProject
//
//  Created by Alabudi, Joseph on 2/23/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#ifndef List_h
#define List_h

#include "Node.h"
#include <assert.h>

template <class Type>
class List
{
private:
    Node<Type> * front;
    Node<Type> * end;
    int size;
    int position;
public:
    List<Type>();
    List<Type>(const List<Type> & source);
    ~List<Type>();
    List<Type>& operator =(const List<Type> & replacingList);
    
    int getSize() const;
    Node<Type> * getFront() const;
    Node<Type> * getEnd() const;
    
    void addAtIndex(int index, Type data);
    void addFront(Type value);
    void addEnd(Type value);
    Type getFromIndex(int index);
    Type remove(int index);
    Type setAtIndex(int index, Type value);
    bool contains(Type value);
};

template <class Type>
List<Type> :: List()
{
    size = 0;
    front = nullptr;
    end = nullptr;
}

template <class Type>
List<Type> :: ~List()
{
    int count = size;
    Node<Type> * remove = front;
    while(front != nullptr)
    {
        front = front->getNextPointer();
        delete remove;
        remove = front;
        count--;
    }

}

template <class Type>
Node<Type> * List<Type> :: getEnd() const
{
    return end;
}

template <class Type>
void List<Type> :: addFront (Type value)
{
    if(size == 0)
    {
        Node<Type> * first = new Node<Type>(value);
        this->front = first;
        this->end = first;
    }
    else
    {
        Node<Type> * newFirst = new Node<Type>();
        newFirst->setNodeData(value);
        newFirst->setNextPointer(front);
        //or
        //Node<Type> * newFirst = new Node<Type>(value, front);
        this->front = newFirst;
    }
    
    size++;
}

template <class Type>
void List<Type> :: addEnd(Type data)
{
    Node<Type> * added = new Node<Type>(data);
    if(size == 0)
    {
        this->front = added;
        this->end = added;
    }
    else
    {
        end->setNextPointer(added);
        this->end = added;
    }
    size++;
}

template <class Type>
void List<Type> :: addAtIndex(int index, Type value)
{
    assert(index >= 0 && index <= size);
    if(index == 0)
    {
        addFront(value);
    }
    else if(index == size)
    {
        addEnd(value);
    }
    else
    {
        Node<Type> * insertedNode = new Node<Type>(value);
        Node<Type> * current = front;
        Node<Type> * previous = nullptr;
        
        for(int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNextPointer();
        }
        
        previous->setNextPointer(insertedNode);
        insertedNode->setNextPointer(current);
        
        size++;
    }
}

template <class Type>
Type List<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < size);
    Type information;
    
    Node<Type> * current = front;
    for(int spot = 0; spot < index; spot++)
    {
        current = current->getNextPointer();
    }
    
    information = current->setNodeData(data);
    
    return information;
}

template <class Type>
Type List<Type> :: remove(int index)
{
    assert(index >= 0 && index < size);
    Type removed;
    
    Node<Type> * current = front;
    Node<Type> * previous = nullptr;
    Node<Type> * toBeRemoved = nullptr;
    
    if(index == 0)
    {
        toBeRemoved = front;
        this->front = front->getNextPointer();
    }
    else if(index == size - 1)
    {
        for(int spot = 0; spot < index; spot++)
        {
            previous = current;
            current = current->getNextPointer();
        }
        
        toBeRemoved = current;
        previous->setNextPointer(nullptr);
        this->end = previous;
    }
    else
    {
        for(int spot = 0; spot < index; spot++)
        {
            previous = current;
            current = current->getNextPointer();
        }
        
        toBeRemoved = current;
        current = toBeRemoved->getNextPointer();
        previous->setNextPointer(current);
    }
    removed = toBeRemoved->getNodeData();
    
    delete toBeRemoved;
    
    size--;
    return removed;
    
}

template <class Type>
Type List<Type> :: getFromIndex(int index)
{
    assert(index > 0 && index < size);
    Type value;
    Node<Type> * current = front;
    for(int index = 0; position < index; position++)
    {
        current = current->getNextPointer();
    }
    
    value = current->getNodeData();
    return value;

}

template <class Type>
int List<Type> :: getSize() const
{
    return size;
}


#endif /* List_h */

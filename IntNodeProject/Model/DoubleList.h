//
//  DoubleList.h
//  IntNodeProject
//
//  Created by Alabudi, Joseph on 3/9/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#ifndef DoubleList_h
#define DoubleList_h

#include "DoublyLinkedList.h"
#include <assert.h>

template <class Type>
class DoubleList : DoublyLinkedList<Type>
{
private:
    
public:
    DoubleList();
    ~DoubleList();
    void add(Type data);
    Type remove(int index);
    void addAtIndexFast(int index, Type value);
    void addAtIndex(int index, Type value);
    Type getFromIndex(int index);
    Type getFromIndexFast(int index);
    int indexOf(Type findMe);
    int nextIndexOf(Type value, int position);
    int alternateIndexOf(Type fineMe);
};

template <class Type>
DoubleList<Type> :: DoubleList() : DoublyLinkedList<Type>()
{
    
}

template <class Type>
DoubleList<Type> :: ~DoubleList()
{
    BiDirectionalNode<Type> * deleteStructure = this->getFront();
    while(this->getFront() != nullptr)
    {
        this->setFront(this->getFront()->getNextPointer());
        delete deleteStructure;
        deleteStructure = this->getFront();
    }
}

template <class Type>
void DoubleList<Type> :: add(Type value)
{
    BiDirectionalNode<Type> * addedNode = new BiDirectionalNode<Type>(value);
    if(this->getSize() == 0)
    {
        this->setFront(addedNode);
    }
    else
    {
        this->getEnd()->setNextPointer(addedNode);
        addedNode->setPreviousPointer(this->getEnd());
    }
    this->setEnd(addedNode);
    int oldSize = this->getSize();
    this->setSize(oldSize + 1);
}

template <class Type>
Type DoubleList<Type> :: remove(int index)
{
    Type derp;
    BiDirectionalNode<Type> * nodeToTakeOut = this->getFront();
    for(int spot = 0; spot < index; spot++)
    {
        nodeToTakeOut = nodeToTakeOut->getNextPointer();
    }
    derp = nodeToTakeOut->getNodeData();
    
    BiDirectionalNode<Type> * prev = nodeToTakeOut->getPreviousPointer();
    BiDirectionalNode<Type> * next = nodeToTakeOut->getNextPointer();
    
    prev->setNextPointer(next);
    next->setPreviousPointer(prev);
    
    delete nodeToTakeOut;
    
    this->setSize(this->getSize() - 1);
    return derp;
}

template <class Type>
Type DoubleList<Type> :: getFromIndex(int index)
{
    assert(index > 0 && index < this->getSize());
    Type value;
    BiDirectionalNode<Type> * current = this->getFront();
    for(int position = 0; position < index; position++)
    {
        current = current->getNextPointer();
    }
    
    value = current->getNodeData();
    return value;
}

template <class Type>
Type DoubleList<Type> :: getFromIndexFast(int index)
{
    assert(index >= 0 && index < this->getSize());
    Type valueAtIndex;
    BiDirectionalNode<Type> * reference;
    if(index < this->getSize() / 2)
    {
        reference = this->getFront();
        for(int position = 0; position < index; position++)
        {
            reference = reference->getNextPointer();
        }
    }
    else
    {
        reference = this->getEnd();
        for(int position = 0; position < index; position++)
        {
            reference = reference->getPreviousPointer();
        }
    }
    
    valueAtIndex = reference->getNodeData();
    return valueAtIndex;
}

template <class Type>
void DoubleList<Type> :: addAtIndex(int index, Type value)
{
    assert(index >= 0 && index <= this->getSize());
    if(index == 0)
    {
        addFront(value);
    }
    else if(index == this->getSize())
    {
        addEnd(value);
    }
    else
    {
        BiDirectionalNode<Type> * insertedNode = new BiDirectionalNode<Type>(value);
        BiDirectionalNode<Type> * current = this->getFront();
        BiDirectionalNode<Type> * previous = nullptr;
        
        for(int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNextPointer();
        }
        
        previous->setNextPointer(insertedNode);
        insertedNode->setNextPointer(current);
        
        this->getSize();
    }
}

template <class Type>
void DoubleList<Type> :: addAtIndexFast(int index, Type value)
{
    
}

template <class Type>
int DoubleList<Type> :: indexOf(Type findMe)
{
    int index = -1;
    
    BiDirectionalNode<Type> * searchPointer = this->getFront();
    
    for (int spot = 0; spot < this->getSize(); spot++)
    {
        if(findMe == searchPointer->getNodeData())
        {
            
            return spot;
        }
        searchPointer = searchPointer->getNextPointer();
    }
    
    return index;
}

template <class Type>
int DoubleList<Type> :: alternateIndexOf(Type findMe)
{
    int alternate = 0;
    
    for(BiDirectionalNode<Type> * search = this->getFront(); search != nullptr; search = search->getNextPointer())
    {
        if(findMe != search->getNodeData())
        {
            alternate++;
        }
        
    }
    if(alternate >= this->getSize())
    {
        return -1;
    }
    else
    {
        return alternate;
    }

}

template <class Type>
int DoubleList<Type> :: nextIndexOf(Type value, int position)
{
    assert(position >= 0 && position < this->getSize());
    
    int nextIndex = -1;
    
    BiDirectionalNode<Type> * current = this->getFront();
    
    for (int index = 0; index < this->getSize(); index++)
    {
        if(index >= position)
        {
            if(current->getNodeData() == value)
            {
                return index;
            }
        }
        current = current->getNextPointer();
    }
    return nextIndex;
}

#endif /* DoubleList_h */

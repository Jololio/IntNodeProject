//
//  Node.h
//  IntNodeProject
//
//  Created by Alabudi, Joseph on 2/13/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#ifndef Node_h
#define Node_h

template <class Type>
class Node
{
private:
    Type nodeData;
    Node<Type> * nodePointer;
public:
    Node();
    Node(Type nodeData);
    Node(Type data, Node<Type> * next);
    
    void setNodeData(Type data);
    void setNodePointer(Node<Type> pointer);
    Type getNodeData();
    Node<Type> * getNodePointer();
};


/*
 Implementation section
*/

template <class Type>
Node<Type> :: Node()
{
    //Explicitly DO NOT instantiate the nodeData data member
    this->nodePointer = nullptr;
    
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->nodeData = data;
    this->nodePointer = nullptr;
}

template <class Type>
Node<Type> :: Node(Type nodeData, Node<Type> * nodePointer)
{
    this->nodeData = data;
    this->nodePointer = pointer;
}

template <class Type>
void Node<Type> :: setNodeData(Type data)
{
    this->nodeData = data;
}

template <class Type>
void Node<Type> :: setNodePointer(Node<Type> pointer)
{
    this->nodePointer = pointer;
}

template <class Type>
Type Node<Type> :: getNodeData()
{
    return this->nodeData;
}

template <class Type>
Node<Type> * Node<Type> :: getNodePointer()
{
    return this->nodePointer;
}


#endif /* Node_h */

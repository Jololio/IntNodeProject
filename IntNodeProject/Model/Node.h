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


#endif /* Node_h */

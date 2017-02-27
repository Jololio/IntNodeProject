//
//  BiDirectionalNode.h
//  IntNodeProject
//
//  Created by Alabudi, Joseph on 2/27/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#ifndef BiDirectionalNode_h
#define BiDirectionalNode_h



template <class Type>
class BiDirectionalNode : public Node<Type>
{
private:
    BiDirectionalNode<Type> * previous;
    BiDirectionalNode<Type> * next;
    Type data;
public:
    BiDirectionalNode();
    BiDirectionalNode(Type Data);
    BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next);
    
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : Node()
{
    
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data) : Node<Type>(data)
{
    
}


#endif /* BiDirectionalNode_h */

//
//  IntNode.cpp
//  IntNodeProject
//
//  Created by Alabudi, Joseph on 2/8/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#include "IntNode.h"


IntNode :: IntNode()
{
    this->nodePointer = nullptr;
    this->nodeData = -9999;
}

IntNode :: IntNode(int value)
{
    this->nodePointer = nullptr;
    this->nodeData = value;
}

IntNode :: IntNode(int value, IntNode * nodePointer)
{
    this->nodePointer = nodePointer;
    this->nodeData = value;
}

void IntNode :: setNodeData(int newValue)
{
    nodeData = newValue;
}

void IntNode :: setNodePointer(IntNode * nodePointer)
{
    this->nodePointer = nodePointer;
}

int IntNode :: getNodeData()
{
    return nodeData;
}

IntNode * IntNode :: getNodePointer()
{
    return this->nodePointer;
}

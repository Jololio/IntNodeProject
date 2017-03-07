//
//  IntNode.h
//  IntNodeProject
//
//  Created by Alabudi, Joseph on 2/8/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#ifndef IntNode_h
#define IntNode_h

class IntNode
{
public:
    void setNodeData(int newValue);
    void setNextPointer(IntNode * nextPointer);
    IntNode * getNextPointer();
    int getNodeData();
    IntNode();
    IntNode(int value);
    IntNode(int value, IntNode * nextPointer);
    
private:
    int nodeData;
    IntNode *  nextPointer;
};







#endif /* IntNode_h */

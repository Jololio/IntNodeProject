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
    void setNodePointer(IntNode * nodePointer);
    int getNodeData();
    IntNode();
    IntNode(int value);
    IntNode(int value, IntNode * nodePointer);
    
private:
    int nodeData;
    IntNode nodePointer;
};







#endif /* IntNode_h */

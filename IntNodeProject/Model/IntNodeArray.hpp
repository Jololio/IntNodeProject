//
//  IntNodeArray.hpp
//  IntNodeProject
//
//  Created by Alabudi, Joseph on 2/8/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#ifndef IntNodeArray_hpp
#define IntNodeArray_hpp

#include "IntNode.hpp"

class IntNodeArray
{
private:
    IntNode * front;
    int size;
    
public:
    IntNodeArray(int size);
    void setAtIndex(int index, int value)
    int getFromIndex(int index);
    int getSize();
};










#endif /* IntNodeArray_hpp */

//
//  CircularList.h
//  IntNodeProject
//
//  Created by Alabudi, Joseph on 3/1/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "DoublyLinkedList.h"

template <class Type>
class CircularList : public DoublyLinkedList<Type>
{
private:
    //No need to redefine the private data members.
public:
    CircularList();
    ~CircularList();
    
    void add(Type data);
    Type remove(int index);
    //Other methods as needed
};

template <class Type>
CircularList<Type> :: CircularList() : DoublyLinkedList<Type>()
{
    //Deal with circle list stuff only here
}

template <class Type>
void CircularList<Type> :: add(Type data)
{
    
}



#endif /* CircularList_h */

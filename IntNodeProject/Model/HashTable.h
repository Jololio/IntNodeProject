//
//  HashTable.h
//  IntNodeProject
//
//  Created by Alabudi, Joseph on 5/3/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#ifndef HashTable_h
#define HashTable_h












template <class Type>
long HashTable<Type> :: getSize()
{
    
}

template <class Type>
HashTable<Type> :: HashTable()
{
    this->capacity = 101;
    this->efficiencyPercentage = .667;
    this->size = 0;
    this->hashTableStorage = new HashNode<Type> * [capacity];
    std :: fill_n(hashTableStorage, capacity, nullptr);
}

template <class Type>
HashTable<Type> :: ~HashTable()
{
    
}

template <class Type>
long HashTable<Type> :: nextPrime()
{
    
}

template <class Type>
long HashTable<Type> :: handCollision(HashNode<Type> * data, long currentPosition)
{
    
}

template <class Type>
bool HashTable<Type> :: remove(Type data)
{
    bool removed = false;
    
    HashNode<Type> * find(data);
    long hashIndex = findPosition(find);
    
    if(hasTableStorage[hashIndex] != nullptr)
    {
        hashTableStorage[hashIndex] != nullptr)
        removed = true;
        this->size--;
    }
    return removed;
}

template <class Type>
void HashTable<Type> :: displayContents()
{
    
}

template <class Type>
void HashTable<Type> :: resize()
{
    long updatedCapacity = nextPrime();
    HashNode<Type> * * tempStorage = new HashNode<Type> * [updatedCapacity];
    
    std :: fill_n(tempStorage, updatedCapacity, nullptr);
    
    long oldCapacity = this->capacity;
    this->capacity = updatedCapacity;
    
    for(long index = 0; index < oldCapacity; index++)
    {
        if(hashTableStorage[index] != nullptr)
        {
            HashNode<Type> * temp = hashTableStorage[index];
            
            long position = findPosition(temp);
            if(tempStorage[position] == nullptr)
            {
                tempStorage[position] = temp;
            }
            else
            {
                long updatedPosition = handleCollision(temp, position);
                tempStorage[updatedPosition] = temp;
            }
        }
    }
    hashTableStorage = tempStorage;
}

template <class Type>
void HashTable<Type> :: add(Type data)
{
    this->size++;
    if(((this->size * 1.000) / this->capacity) > this->efficiencyPercentage)
    {
        resize();
    }
    
    HashNode<Type> * temp = new HashNode<Type>(data);
    long index = findPosition(temp);
    
    if(hashTableStorage[index] == nullptr)
    {
        hashTableStorage[index] = temp;
    }
    else
    {
        long updatedPosition = handleCollision(temp, index);
        hashTableStorage[updatedPosition] = temp;
    }
}


#endif /* HashTable_h */

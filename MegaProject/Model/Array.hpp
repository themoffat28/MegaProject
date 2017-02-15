//
//  Array.h
//  MegaProject
//
//  Created by Moffat, Braeden on 2/15/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <assert.h>
#include "Node.hpp"

template <class Type>
class Array
{
private:
    Array<Type> * front;
    int size;
public:
    Array<Type>();
    Array<Type>(int size);
    int getSize();
    Type getFromIndex(int index);
    void setAtIndex(int index, Type value);
};

//Implementation Section

//Creates an array of specified size by linking Node<Type> together.
template <class Type>
Array<Type> :: Array()
{
  //DO NOT USE.
}

template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);
    Type value;
    
    Node<Type> * current = front;
    
    for(int position = 0; position < index; position++)
    {
        current = current->getNodePointer();
    }
    
    value = current->getNodeData();
    return value;
}

template <class Type>
void Array<Type> :: setAtIndex(int index, Type value)
{
    assert(index >= 0 && index < size);
    Node<Type> * current = front;
    for(int position = 0; position < index; position++)
    {
        current = current = current->getNodePointer();
    }
    
    current->serNodeData(value);
}

template <class Type>
int Array<Type> :: getSize()
{
    return size;
}

#endif /* Array_h */

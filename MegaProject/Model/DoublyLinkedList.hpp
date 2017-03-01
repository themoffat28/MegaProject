//
//  DoublyLinkedList.hpp
//  MegaProject
//
//  Created by Moffat, Braeden on 3/1/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h
#include "BiDirectionalNode.hpp"

template <class Type>
class DoublyLinkedList
{
private:
    int size;
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * end;
public:
    virtual void add(Type value) = 0;
    virtual Type remove(int index) = 0;
    DoublyLinkedList();
    virtual ~DoublyLinkedList() = 0;
    
    int getSize() const;
    BiDirectionalNode<Type> * getFront() const;
    BiDirectionalNode<Type> * getEnd() const;
};

template <class Type>
DoublyLinkedList<Type> :: DoublyLinkedList()
{
    this->size = 0;
    this->front = nullptr;
    this->end = nullptr;
}

#endif /* DoublyLinkedList_h */

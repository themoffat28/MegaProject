//
//  Stack.hpp
//  MegaProject
//
//  Created by Moffat, Braeden on 3/1/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include "DoublyLinkedList.hpp"

template <class Type>
class Stack : public DoublyLinkedList<Type>
{
private:
    
public:
    Stack();
    ~Stack();
    void add(Type value);
    Type remove(int index);
    Type pop();
    Type peek();
    void push(Type data);
}
//The add method only adds to the end on a stack. Never at an index.
template <class Type>
void Stack<Type> :: add(Type valueToAdd)
{
    push(valueToAdd);
}
//Adds the supplied object to the stack at the end, sets new object to point to end, increases the size by 1, and adjusts the previous pointers to reflect the new end pointer of the stack.
template <class Type>
void Stack<Type> :: push(Type addedThing)
{
    BiDirectionalNode<Type> * addToStack = new BiDirectionalNode(addedThing);
    
    if(this->size == 0 || this->front == nullptr || this->end == nullptr)
    {
        this->front = addToStack;
    }
    else
    {
        this->end->setNextPointer(addToStack);
        addToStack->setPreviousPointer(this->end);
    }
    this->end = addToStack;
    this->size++;
}

#endif /* Stack_h */

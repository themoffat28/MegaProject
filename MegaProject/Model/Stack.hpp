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
};

template <class Type>
Stack<Type> :: Stack() : DoublyLinkedList<Type>()
{
    
}

template <class Type>
Stack<Type> :: ~Stack()
{
    BiDirectionalNode<Type> * remove = this->getFront();
    while(this->getFront() != nullptr)
    {
        this->setFront(this->getFront()->getNextPointer());
        delete remove;
        remove = this->getFront;
    }
    
}

//The add method only adds to the end on a stack. Never at an index.
template <class Type>
void Stack<Type> :: add(Type valueToAdd)
{
    push(valueToAdd);
}
//1.Creates a new node.
//2.If the stack is empty, sets front to new node.
//3.Else sets the end's next to point to the new node and the new nodes previou to end.
//4.Move end to new node.
//5.Increases size by 1.
//Increases the size by 1, and adjusts the previous pointers to reflect the new end pointer of the stack.
template <class Type>
void Stack<Type> :: push(Type addedThing)
{
    BiDirectionalNode<Type> * addToStack = new BiDirectionalNode<Type>(addedThing);
    
    if(this->getSize == 0 || this->getFront == nullptr || this->getEnd == nullptr)
    {
        this->setFront(addToStack);
    }
    else
    {
        this->getEnd->setNextPointer(addToStack);
        addToStack->setPreviousPointer(this->getEnd());
    }
    this->setEnd(addToStack);
    this->setSize(this->getSize() + 1);
}

//Used to avoid abstract staus. Asserts that the size is correct and calls the pop method.
template <class Type>
Type Stack<Type> :: remove(int index)
{
    assert(index == this->getSize() - 1 && this->getSize() > 0);
    return pop();
}

template <class Type>
Type Stack<Type> :: peek()
{
    assert(this->getSize() > 0);
    return this->end->getNodeData();
}

template <class Type>
Type Stack<Type> :: pop()
{
    assert(this->getSize() > 0);
    Type removed = this->getEnd()->getNodeData(0);
    
    BiDirectionalNode<Type> * update = this->getEnd();
    update = update->getPreviousPointer();
    
    if(update != nullptr)
    {
        update->setNextPointer(nullptr);
    }
    else
    {
        this->setFront(nullptr);
    }
    
    delete this->getEnd();
    
    this->setEnd(update);
    
    this->setSize(this->getSize() - 1);
    
    return removed;
}


#endif /* Stack_h */

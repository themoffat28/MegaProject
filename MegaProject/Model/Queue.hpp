//
//  Queue.hpp
//  MegaProject
//
//  Created by Moffat, Braeden on 3/1/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "DoublyLinkedList.hpp"

template <class Type>
class Queue : public DoublyLinkedList<Type>
{
private:
    
public:
    Queue();
    ~Queue();
    void add(Type data);
    Type remove(int index);
    void enqueue(Type data);
    Type dequeue();
    Type peek();
};

template <class Type>
Queue<Type> :: Queue() : DoublyLinkedList<Type>()
{
    
}

//Same destructor as list, array, stack... since it is a linear data structure.
template <class Type>
Queue<Type> :: ~Queue()
{
    BiDirectionalNode<Type> * remove = this->getFront();
    while(this->getFront() != nullptr)
    {
        this->setFront(this->getFront()->getNextPointer();
        delete remove;
        remove = this->getFront;
    }
}

//Call enqueue method. Method implemented to ensure the child class is NOT abstract.
template <class Type>
void Queue<Type> :: add(Type value)
{
    enqueue(value);
}

//1.Create a node.
//2.If size == 0, adjust front to point to new node.
//3.Else, add new node to end's next.
//4.Move end to new node.
//5.Adjust size + 1.
template <class Type>
void Queue<Type> :: enqueue(Type insertedValue)
{
    BiDirectionalNode<Type> * added = new BiDirectionalNode<Type>(insertedValue);
    
    if(this->getSize() == 0 || this->getFront() == nullptr || this->getEnd() == nullptr)
    {
        this->setFront(added);
    }
    else
    {
        this->getEnd()->setNextPointer(added);
        added->setPreviousPointer(this->getEnd());
    }
    this->setEnd(added);
    this->setSize(this->getSize() + 1);
}

//1.Check valid index and size.
//2.Call dequeue.
//Implemented to avoid abstract status.
template <class Type>
Type Queue<Type> :: remove(int index)
{
    assert(index == 0 && this->getSize() > 0);
    return dequeue();
}

//1.Assert size is valid.
//2.Get data from front node.
//If size == 1, set end to nullptr.
//4.Else, move front to front's next.
//4a.Set front's previous to nullptr.
//5.Delete old front node.
//6.Adjust size down by 1.
//7.Return old value.
template <class Type>
Type Queue<Type> :: dequeue()
{
    assert(this->getSize() > 0);
    
    Type removedValue = this->getFront()->getNodeData();
    BiDirectionalNode<Type> * removeMe = this->getFront();
    
    if(this->getSize() == 1)
    {
        this->setEnd(nullptr);
        this->setFront(nullptr);
    }
    else
    {
        this->setFront(removeMe->getNextPointer());
    }
    this->setFront()->setPreviousPointer(nullptr);
    
    delete removeMe;
    this->setSize(this->getSize() -1);
    
    return removedValue;
}

//1.Check that size is greater than 0.
//2.Return the front object's data.
template <class Type>
Type Queue<Type> :: peek()
{
    assert(this->getSize() > 0);
    return this->getFront()->getNodeData():
}
#endif /* Queue_h */

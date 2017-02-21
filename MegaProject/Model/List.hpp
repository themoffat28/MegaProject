//
//  List.hpp
//  MegaProject
//
//  Created by Moffat, Braeden on 2/21/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#ifndef List_h
#define List_h

#include <assert.h>
#include "Node.hpp"
#include <iostream>

tempalate <class Type>
class Array
{
private:
    int size;
    Node<Type> * front;
public:
    //Constructor
    List<Type>();
    
    //Copy Constructor
    List<Type>(const List<Type> & source);
    
    //Destructor
    ~List<Type>();
    
    //Methods
    void addAtIndex(int index, Type value);
    void add(Type value);
    Type remove(int index);
    Type setAtIndex(int index, Type data);
    bool contains(Type data)
    int getSize() const;
    int getFront() const;
    Node<Type> * getFront() const;
    
};

#endif /* List_h */

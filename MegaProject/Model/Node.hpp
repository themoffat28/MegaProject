//
//  Node.hpp
//  MegaProject
//
//  Created by Moffat, Braeden on 2/13/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

template <class Type>
class Node
{
private:
    Type nodeData;
    Node<Type>* NextPointer;
public:
    Node<Type>();
    Node<Type>(Type data);
    Node<Type>(Type data, Node<Type> * nextPointer);
    
    Type getNodeData();
    Node<Type> * getNextPointer();
    void setNodeData(Type value);
    void setNextPointer(Node<Type> * nextPointer);
};

//Implementation section of the templated class.
template <class Type>
Node<Type> :: Node()
{
    NextPointer = nullptr;
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->nodeData = data;
    this->NextPointer = nullptr;
}

template <class Type>
Node<Type> :: Node(Type value, Node<Type> * nextNode)
{
    this->nodeData = value;
    this->NextPointer = nextNode;
}

template <class Type>
Type Node<Type> :: getNodeData()
{
    return nodeData;
}

template <class Type>
Node<Type> * Node<Type> :: getNextPointer()
{
    return NextPointer;
}

template <class Type>
void Node<Type> :: setNodeData(Type nodeData)
{
    this->nodeData = nodeData;
}

template <class Type>
void Node<Type> :: setNextPointer(Node<Type> * next)
{
    this->NextPointer = next;
}


#endif /* Node_h */

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
    Node<Type>* nodePointer;
public:
    Node<Type>();
    Node<Type>(Type data);
    Node<Type>(Type data, Node<Type> * nextPointer);
    
    Type getNodeData();
    Node<Type> * getNodePointer();
    void setNodeData(Type value);
    void setNodePointer(Node<Type> * nextPointer);
};

//Implementation section of the templated class.
template <class Type>
Node<Type> :: Node()
{
    nodePointer = nullptr;
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->nodeData = data;
    this->nodePointer = nullptr;
}

template <class Type>
Node<Type> :: Node(Type value, Node<Type> * nextNode)
{
    this->nodeData = value;
    this->nodePointer = nextNode;
}

template <class Type>
Type Node<Type> :: getNodeData()
{
    return nodeData;
}

template <class Type>
Node<Type> * Node<Type> :: getNodePointer()
{
    return nodePointer;
}

template <class Type>
void Node<Type> :: setNodeData(Type nodeData)
{
    this->nodeData = nodeData;
}

template <class Type>
void Node<Type> :: setNodePointer(Node<Type> * next)
{
    this->nodePointer = next;
}


#endif /* Node_h */

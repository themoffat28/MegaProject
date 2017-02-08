//
//  IntNode.cpp
//  MegaProject
//
//  Created by Moffat, Braeden on 2/6/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#include "IntNode.hpp"

//Three different ways to build a node pointer.
IntNode :: IntNode()
{
    this-> nodeData = -999;
    this->NodePointer = nullptr;
}

IntNode :: IntNode(int data)
{
    this->nodeData = data;
    NodePointer = nullptr;
}

IntNode :: IntNode(int nodeData, IntNode * next)
{
    this->nodeData = nodeData;
    this->NodePointer = next;
}

int IntNode :: getNodeData()
{
    return nodeData;
}

IntNode * IntNode :: getNodePointer()
{
    return NodePointer;
}

void IntNode :: setNodeData(int nodeData)
{
    this->nodeData = nodeData;
}

void IntNode :: setNodePointer(IntNode * next)
{
    this->NodePointer = next;
}

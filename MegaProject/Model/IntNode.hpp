//
//  IntNode.hpp
//  MegaProject
//
//  Created by Moffat, Braeden on 2/6/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#ifndef IntNode_hpp
#define IntNode_hpp

class IntNode
{
private:
    int nodeData;
    IntNode * NextPointer;
public:
    //Constructors
    IntNode();
    IntNode(int value);
    
    /*
     Created an IntNode with a specified value and reference to the next node.
     */
    IntNode(int value, IntNode * nextNode);
    
    //Methods
    int getNodeData();
    IntNode * getNextPointer();
    
    void setNodeData(int value);
    void setNextPointer(IntNode * updatedNode);
};

#endif /* IntNode_hpp */

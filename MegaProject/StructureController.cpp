//
//  StructureController.cpp
//  MegaProject
//
//  Created by Moffat, Braeden on 2/8/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#include "IntNodeArray.hpp"
#include "StructureController.hpp"
#include <iostream>

using namespace std;

StructureController :: StructureController()
{
    wordNode = Node<string>("derpy");
    numberNode = Node<int>();
}

void StructureController :: testNodeTypes()
{
    cout << "Here is a string node:" << endl;
    cout << wordNode.getNodeData() << endl;
    cout << "Here is an uninitialized int node:" <<endl;
    cout << numberNode.getNodeData() << endl;
}

void StructureController :: testIntArray()
{
    cout << "IntNodeArray Initializing" << endl;
    IntNodeArray temp = IntNodeArray(3);
    for(int spot = 0; spot < 3; spot++)
    {
        cout << temp.getFromIndex(spot) << " is at " << spot << endl;
    }
    
    for(int spot = 0; spot < 3; spot++)
    {
        temp.setAtIndex(spot, spot);
    }
    
    for(int spot = 0; spot < temp.getSize(); spot++)
    {
        cout << temp.getFromIndex(spot) << " is at " << spot << endl;
    }
}

void StructureController :: start()
{
    cout << "Testing the IntNodeArray..." << endl;
    testIntArray();
    cout << "IntNodeArray test complete." << endl;
    testNodeTypes();
}

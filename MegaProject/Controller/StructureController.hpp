//
//  StructureController.hpp
//  MegaProject
//
//  Created by Moffat, Braeden on 2/8/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#ifndef StructureController_hpp
#define StructureController_hpp

#include "../Model/Node.hpp"
#include "../Model/Array.hpp"
#include <string>
using namespace std;

class StructureController
{
private:
    Node<int> numberNode;
    Node<string> wordNode;
    Array<int> numberArray;
    
    void testNodeTypes();
    void testIntArray();
    void testArrayTemplate();
    void testAdvancedFeatures();
public:
    StructureController();
    void start();
};

#endif /* StructureController_hpp */

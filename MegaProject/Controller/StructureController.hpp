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
#include "../Model/List.hpp"
#include "Timer.hpp"
#include "IntNodeArray.hpp"
#include "../Model/List.hpp"
#include "../Model/DoubleList.hpp"
#include "../Model/Stack.hpp"
#include "../Model/Queue.hpp"
#include "../Model/CircularList.hpp"
#include "../Model/Meme.hpp"
#include "BinarySearchTree.h"
#include <string>

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
    void testListIntro();
    void testListTiming();
    void testDestructor();
    void testDoubleLists();
    void testMemeQueue();
    void testNumberStack();
    void testBinarySearchTreeOperations();
public:
    StructureController();
    void start();
};

#endif /* StructureController_hpp */

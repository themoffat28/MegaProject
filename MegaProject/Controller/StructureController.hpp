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
#include "FileController.hpp"

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
    void testBinarySearchData();
public:
    StructureController();
    void start();
};


void StructureController :: testBinarySearchTreeOperations()
{
    BinarySearchTree<int> numbers;
    numbers.insert(9843);
    numbers.insert(10);
    numbers.insert(43);
    numbers.insert(-123);
    numbers.insert(23465);
    numbers.insert(10); // won't go in
    numbers.insert(43243);
    numbers.insert(-45677654);
    numbers.insert(92165);
    
    cout << "Size should be 8 and is: " << numbers.getSize() << endl;
    cout << "In order traversal should be: \n\t-45677654 \n\t-123 \n\t10 \n\t43 \n\t9843 \n\t23465 \n\t43243 \n\t92165" << endl;
    
    numbers.inOrderTraversal();
    
    cout << "Height should be 4 and is: " << numbers.getHeight() << endl;
    cout << "Balanced should be false || 0 and is: " << numbers.isBalanced() << endl;
}

void StructureController :: testBinarySearchData()

{
    
    FileController fileData;
    
    Timer treeTimer;
    
    treeTimer.startTimer();
    
    BinarySearchTree<CrimeData> crimeTree = fileData.readCrimeDataToBinarySearchTree("/Users/cody.henrichsen/Documents/crimes.csv");
    
    treeTimer.stopTimer();
    
    
    
    int count = crimeTree.getSize();
    
    int height = crimeTree.getHeight();
    
    bool complete = crimeTree.isComplete();
    
    bool balanced = crimeTree.isBalanced();
    
    
    
    cout << "The count of the tree is: " << count << ", the height is " << height << ".\n The tree's balanced status is " << balanced << ", and its complete status is " << complete << endl;
    
    cout << "The time to read in the tree was: " << endl;
    
    treeTimer.displayTimerInformation();
    
    
    
}

#endif /* StructureController_hpp */

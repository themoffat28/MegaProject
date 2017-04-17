//
//  StructureController.cpp
//  MegaProject
//
//  Created by Moffat, Braeden on 2/8/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#include "IntNodeArray.hpp"
#include "StructureController.hpp"
#include "Timer.hpp"
#include <iostream>

using namespace std;

StructureController :: StructureController()
{
    wordNode = Node<string>("derpy");
    numberNode = Node<int>();
    numberArray = Array<int>(0);
}

void StructureController :: testArrayTemplate()
{
    cout <<"Array Template" << endl;
    Timer arrayTimer;
    arrayTimer.startTimer();
    int test [9];
    arrayTimer.stopTimer();
    arrayTimer.displayTimerInformation();
    arrayTimer.resetTimer();
    arrayTimer.startTimer();
    numberArray = Array<int>(9);
    arrayTimer.stopTimer();
    arrayTimer.displayTimerInformation();
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
    
    cout << "Testing methods..." << endl;
    testListTiming();
    cout << "Finished Testing" << endl;

}

void StructureController :: testAdvancedFeatures()
{
    int showDestructor = 0;
    if(showDestructor < 1)
    {
        Array<string> words = Array<string>(5);
        cout << "There should be messages about destructor next" << endl;
    }
    Array<string> words = Array<string>(4);
    words.setAtIndex(0, "at zero");
    words.setAtIndex(3, "in the last spot");
    Array<string> copiedWords = Array<string>(words);
    
    cout << "The following should match:" << endl;
    cout << words.getFromIndex(0) << " should be the same as " << copiedWords.getFromIndex(0) << endl;
    
    copiedWords.setAtIndex(3, "Contents of copied Array have been changed");
}

void StructureController :: testListIntro()
{
    List<int> sample;
    sample.addFront(2);
    sample.addEnd(3);
    sample.addFront(1);
    cout << "This should go 1, 2, 3" << endl;
    
    for(int index = 0; index < sample.getSize(); index++)
    {
        cout << sample.getFromIndex(index) << endl;
    }
    
    cout << "Size should read 3 and is " << sample.getSize() << endl;
}

void StructureController :: testDestructor()
{
    
}

void StructureController :: testDoubleLists()
{
    
}

void StructureController :: testListTiming()
{
    DoubleList<int> timingList;
    for(int index = 0; index < 10000; index++)
    {
        timingList.add(rand());
    }
    
    long slowTime [1000];
    long fastTime [1000];
    double averageSlow = 0.00, averageFast = 0.00;
    Timer doubleTimer;
    
    for(int index = 0; index < 1000; index++)
    {
        int randomIndex = rand() % 10000;
        doubleTimer.startTimer();
        timingList.getFromIndex(randomIndex);
        doubleTimer.stopTimer();
        slowTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
        
        doubleTimer.startTimer();
        timingList.getFromIndexFast(randomIndex);
        doubleTimer.stopTimer();
        fastTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
        
        averageSlow += slowTime[index];
        averageFast += fastTime[index];
    }
    
    averageSlow = averageSlow/1000;
    averageFast = averageFast/1000;
    
    cout << "The average speed for the getFromIndex method was: " << averageSlow << " microseconds" << endl;
    cout << "The average speed for the getFromIndexFast method was: " << averageFast << " microseconds" << endl;
}

void StructureController :: testMemeQueue()
{
    Meme firstMeme("toddler fist with pinwheel!");
    Queue<Meme> memeQueue;
    memeQueue.add(firstMeme);
    Meme secondMeme;
    secondMeme.setDankness(8435);
    memeQueue.enqueue(secondMeme);
    memeQueue.remove(0);
    Meme temp = memeQueue.dequeue();
    cout << "This should be 8435 and is " << temp.getDankness() << endl;
}

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






//
//  FileController.hpp
//  MegaProject
//
//  Created by Moffat, Braeden on 3/29/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Model/DoubleList.hpp" //Default Structure
#include "../Model/Meme.hpp" //Datatypes
#include "../Model/CrimeData.hpp"
#include <string> //String Type
#include <fstream> //File Operations
#include <iostream> //Console Access
#include <sstream> //String as stream

using namespace std; //Keyword support

class FileController
{
private:
    DoubleList<Meme> memeList;
public:
    DoubleList<Meme> readMemeDataFromFileAsList(string filename);
    void writeMemeDataStatistics(DoubleList<int> source, string filename);
};


#endif /* FileController_hpp */

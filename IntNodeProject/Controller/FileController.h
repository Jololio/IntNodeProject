//
//  Header.h
//  IntNodeProject
//
//  Created by Alabudi, Joseph on 3/27/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include "../Model/DoubleList.h"
#include "../Model/FoodItem.h"
#include "../Model/Meme.h"
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

class FileController
{
private:
    DoubleList<FoodItem> foodItemList;
    DoubleList<Meme> memeList;
public:
    DoubleList<Meme> readDataFromFile(string filename);
    
};


#endif /* Header_h */

//
//  DataStructureController.hpp
//  IntNodeProject
//
//  Created by Alabudi, Joseph on 2/8/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#ifndef DataStructureController_hpp
#define DataStructureController_hpp

#include "../Model/Node.h"
#include <string>

using namespace std;

class DataStructureController
{
private:
    void testIntArray();
    void testListIntro();
    Node<int> numberNode;
    Node<string> wordNote;
    void testNodes();
public:
    DataStructureController();
    void start();
};

#endif /* DataStructureController_hpp */

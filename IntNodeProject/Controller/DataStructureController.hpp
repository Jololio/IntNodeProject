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
#include "../Model/Array.h"
#include "../Model/IntNodeArray.hpp"
#include "../Model/List.hpp"
#include "../Model/DoubleList.h"
#include "../Model/Stack.h"
#include "../Model/Queue.h"
#include "../Model/CircularList.h"
#include "../Model/DoublyLinkedList.h"
#include "../Model/BiDirectionalNode.h"
#include "../Model/Node.h"
#include "../Model/IntNode.h"
#include "../Model/Timer.hpp"
#include "../Model/Fooditem.h"

using namespace std;

class DataStructureController
{
private:
    void testIntArray();
    void testListTiming();
    void testListIntro();
    Node<int> numberNode;
    Node<string> wordNote;
    void testNodes();
    void testIntStack();
    void testFoodQueue();
public:
    DataStructureController();
    void start();
};









#endif /* DataStructureController_hpp */

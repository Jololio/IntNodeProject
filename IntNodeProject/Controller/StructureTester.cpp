//
//  StructureTester.cpp
//  IntNodeProject
//
//  Created by Alabudi, Joseph on 3/27/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#include <stdio.h>


void StructureTester :: testBinarySearchTreeOperations()

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

Test the BinarySearchTree with the CrimeData	crime BST
Test the AVLTree	AVL
Test the AVLTree with the CrimeData	AVL CRIME

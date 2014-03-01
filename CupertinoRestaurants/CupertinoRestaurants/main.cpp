//
//  main.cpp
//  CupertinoRestaurants
//
//  CIS 22C Winter Quarter
//  Team Project: Team #3
//  Members: Christina Sok, Anny Chu, James Agua
//  Created by Lina on 3/1/14.
//  Copyright (c) 2014 Lina. All rights reserved.
//

#include <iostream>
#include "Header.h"
#include "menuManager.h"

using namespace std;
//using namespace System;

// main prototypes
bool processInputFile(binarySearchTree *, hashTable *);
bool processOutputFile(binarySearchTree *);
void menu();

int main(int argc, const char * argv[])
{
    // Create pointers to objects to pass to the menu
    binarySearchTree *ptrBinarySearchTree = new binarySearchTree;
    hashTable *ptrHashTable = new hashTable;
    
    processInputFile(ptrBinarySearchTree, ptrHashTable);
    
    menu();
    
    processOutputFile(ptrBinarySearchTree);
    
    return 0;
}


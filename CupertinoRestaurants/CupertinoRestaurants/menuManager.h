//
//  menuHeader.h
//  CupertinoRestaurants
//
//  Created by Lina on 3/1/14.
//  Copyright (c) 2014 Lina. All rights reserved.
//

#ifndef CupertinoRestaurants_menuHeader_h
#define CupertinoRestaurants_menuHeader_h

#include <fstream>
#include <iostream>
#include "Header.h"

// prototypes
string getUserChoice();
void printMenu();
void menuManager();

bool addRestaurantManager;
bool deleteRestaurantManager(string aRestrauant, binarySearchTree *ptrBinarySearchTree, hashTable *ptrHashTable);
string findRestaurantManager(string aRestrauant, hashTable * aKey);
void listRestaurantsManager(hashTable *ptrHashTable);
void listRestaurantSortedManager(binarySearchTree *ptrBinarySearchTree);
void printIndentedTreeManager(binarySearchTree *ptrBinarySearchTree);
bool saveTreeToFileManager(binarySearchTree *ptrBinarySearchTree);
void printHashStats (hashTable * ptrHashTable);
void removeTrailingWhiteSpace(string *readStr);


#endif

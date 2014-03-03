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

int main(int argc, const char * argv[])
{
    // Create pointers to objects to pass to the menu
    binarySearchTree *ptrBinarySearchTree = new binarySearchTree;
    hashTable *ptrHashTable = new hashTable;
    bool success;
    
     if(!processInputFile(ptrBinarySearchTree, ptrHashTable))
         return 1;
    
    printMenu();
    
    success = processOutputFile(ptrBinarySearchTree);

    
    return 0;
}

// Definition of processInputFile
// Process the input file and
// add each restaurant to the tree
// and the hash table.
// Pre - pointer to the BST and hashTable.
// Post - returns true if successful.
bool processInputFile(binarySearchTree ptrBinarySearchTree,  hashTable ptrHashTable)
{
    ifstream inFile;
    string readStr;
    string fileName;
    bool empty = true;
    fileName = "Restaurants.txt";
    binaryNode node;
    
    // Open file to read, if couldn't open, display error
    // and exit with false
    inFile.open(fileName);
    if (!inFile)
    {
        cout << "Error opening " << fileName << "!\n";
        return false;
    }
	
    /* Data in is
     string Restaurant Name,
     int Address (hash key???,
     string Street,
     string Type,
     string Dollar Rating.
     */
    
    // Process each string in the file beginnging with the restaurant name.
    while (getline(inFile, readStr, ' '))
    {
        // binaryNode.??? = menuManager::removeTrailingWhiteSpace(readStr);             //finish adding the restaurant name here
        
        getline(inFile, readStr, ';');			// Process address
        //NODE??? = atoi(readStr.c_str());      // and convert to hash for key
        
        getline(inFile, readStr);               // Process Street
       // = menuManager::removeTrailingWhiteSpace(readStr);
        
        getline(inFile, readStr);               // Process Type
        // = menuManager::removeTrailingWhiteSpace(readStr);
        
        getline(inFile, readStr);               // Process Dollar Rating
        // = menuManager::removeTrailingWhiteSpace(readStr);

        
        //cout << "DEBUG node data: " << endl;
        
       // tree->addNode(node);						// Add the node to the tree
        // add Node to the hash table
        empty = false;
    }
    
    inFile.close();
    
    if (empty)
        return false;
    
    return true;
}

// Defintion of processOutputFile
// Writes to a file called output.txt
// from the BST. Output file will retain
// preordered structure.
// Pre - A pointer to the Binary Search Tree.
// Post - True if data is written to the file.
bool processOutputFile(binarySearchTree ptrBinarySearchTree)
{
    
    return true;
}


// Calls the menu manager
void menu()
{
    menuManager();
}

//
//  BinaryNode.h
//  Team Project
//
//  Created by Yenni Chu on 3/2/14.
//  Copyright (c) 2014 Yenni Chu. All rights reserved.
//

#ifndef Team_Project_BinaryNode_h
#define Team_Project_BinaryNode_h

#include<string>
using namespace std;

#include"RestaurantsInfo.h"

//********************************************************
// Binary Node for Binary Search Tree
//********************************************************
class binaryNode
{
private:
    binaryNode* rightChildPtr;
    binaryNode* leftChildPtr;
    restaurantInfo* RestaurantInfoPtr;    // Pointer to restaurant info
public:
    //constructor
    binaryNode();
    binaryNode (binaryNode* rightChildPtr, binaryNode* leftChildPtr, restaurantInfo* RestaurantInfoPtr);
    // binaryNode function
    binaryNode *getrightChildPtr() const;
    binaryNode *getleftChildPtr() const;
    void setLeftChildPtr(binaryNode* leftPtr);
    void setRightChildPtr(binaryNode* rightPtr);
    
};// End binaryNode


#endif

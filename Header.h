//
//  Header.h
//  Team Project
//
//  Created by Yenni Chu on 2/24/14.
//  Copyright (c) 2014 Yenni Chu. All rights reserved.
//

#ifndef Team_Project_Header_h
#define Team_Project_Header_h

const string costType[4] = {"$","$$", "$$$", "$$$$"};

//********************************************************
// List of street names
//********************************************************
class streetList
{
private:
    string streetName;      // Street name
    streetList* nextStreet;    // Pointer to the next street
public:
    bool getStreetName(string &aName) const;
    bool setStreetName(string &aName);
    bool setNextStreet(streetList*);
    
} // End streetList

//********************************************************
// List of restaurant types
//********************************************************
class typeList
{
private:
    string restaurantType;  // Restaurant type
    typeList* nextType;     // Pointer to next type
public:
    bool getRestaurantType(string &aRestaurant) const;
    bool setRestaurantType(string &aType);
    bool setNextType(typeList*);
    
}// End typeList

//********************************************************
// Restaurant info - Street number, name, street, type,
// and cost
//********************************************************
class restaurantInfo
{
private:
    string name;            // Restaurant name
    int number;             // Street number
    streetList *streetPtr;  // Street pointer
    typeList *typePtr;      // Type pointer
    costType *costPtr;      // Cost pointer
public:
    // Constructor
    restaurantInfo();
    restaurantInfo(string aName, int aNumber, streetList *aStreetPtr,
                   typeList *aTypePtr, costType *costPtr);
    
    // Restaurant info functions
    bool getName(string &aName) const;
    bool getNumber(string &aNumber) const;
    
}// End restaurantInfo

//********************************************************
// Binary Node for Binary Search Tree
//********************************************************
class binaryNode
{
private:
    binaryNode* rightChildPtr;
    binaryNode* leftChildPtr;
    restaurantInfo* nodePtr;    // Pointer to restaurant info
public:
    //constructor
    binaryNode();
    binaryNode (binaryNode* rightChildPtr, binaryNode* leftChildPtr, restaurantInfo* nodePtr);
    // binaryNode function
    binaryNode *getrightChildPtr() const;
    binaryNode *getleftChildPtr() const;
    void setLeftChildPtr(binaryNode* leftPtr);
    void setRightChildPtr(binaryNode* rightPtr);
    
}// End binaryNode

//********************************************************
// Binary Search Tree
// Sorted by restaurant name
//********************************************************
class binarySearchTree
{
private:
    binaryNode* rootPtr;    // Pointer to root
public:
    //constuctor
     binarySearchTree(const binarySearchTree* tree);
}// End binarySearchTree



//********************************************************
// Hash table
// For array of hash tables
//********************************************************
class hashTable
{
private:
    restaurantInfo* aRestaurant;    // Pointer to a restaurant
    int numRestaurants;             // Number of restaurants in hash table
    collisionTable* aCollision;     // Pointer to collision table
    
public:
bool search();
bool getnumRestaurants(int $ aNumRestaurants);
bool getcollisionTable (collisionTable* aCollision);


}// End hashTable

//********************************************************
// Collision table for hash table
//********************************************************
class collisionTable
{
private:
    restaurantInfo* cRestaurant;    // Pointer to restaurant info
    collisionTable* nextC;          // Pointer to next restaurant info
public:
    bool getNextC(collisionTable* nextC)const;
    bool setNextC(collisionTable*);
}// End collisionTable

//********************************************************
// List head
//********************************************************
class listHead
{
private:
    int count;              // Number of restaurants
    int arraySize;          // Size of hash table
    pHash* hashPtr;          // Pointer to the hash array
    binaryNode* BSTPtr;     // Pointer to the binary search tree
public:
    listHead();
    listHead(int aCount, int aArraysize, pHash* aHashPtr, binaryNode* aBSTPtr );
    
    
}// End listHead


#endif

//
//  RestaurantsInfo.h
//  Team Project
//
//  Created by Yenni Chu on 3/2/14.
//  Copyright (c) 2014 Yenni Chu. All rights reserved.
//

#ifndef Team_Project_RestaurantsInfo_h
#define Team_Project_RestaurantsInfo_h
#include <string>
using namespace std;

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
    
}; // End streetList

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
    
};// End typeList


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
    //costType *costPtr;      // Cost pointer
    string costType;
public:
    // Constructor
    restaurantInfo();
    restaurantInfo(string aName, int aNumber, streetList *aStreetPtr,typeList *aTypePtr, string costType);
    //, costType *costPtr);
    
    // Restaurant info functions
    bool getName(string &aName) const;
    bool getNumber(string &aNumber) const;
    
};// End restaurantInfo




#endif

//
//  menuManager.cpp
//  CupertinoRestaurants
//
//  Created by Lina on 3/1/14.
//  Copyright (c) 2014 Lina. All rights reserved.
//

using namespace std;
#include "menuManager.h"
#include <string>

// Constants for the menu choices
const char
ADD_RESTAURANT              = 'A',  // Add a restaurant
DELETE_RESTAURANT			= 'D',	// Delete a restaurant
FIND_RESTAURANT_BY_NAME     = 'F',	// Find for restaurant by name
LIST_RESTAURANTS            = 'L',  // List Restaurants
PRINT_SORTED				= 'S',	// Print the list sorted by restaurant name
PRINT_TREE_LIST				= 'T',	// Print the tree as an indented list
SHOW_MENU					= 'M',	// Display this menu
QUIT_CHOICE					= 'Q';	// End the program

// Menu Display
const string MENU =
"A\tAdd a restaurant.\n"
"D\tDelete a restaurant.\n"
"F\tFind for restaurant by name.\n"
"L\tList Restaurants.\n"
"S\tPrint the list sorted by restaurant name.\n"
"T\tPrint the tree as an indented list.\n"
"M\tDisplay this menu\n"
"Q\tEnd the program\n\n";


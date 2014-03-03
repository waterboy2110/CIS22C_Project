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

/**~*~*
 * Definition of Menu
 * Prompt the user for a choice
 * Pre - Input from the user
 * Post - Calls the function the user chooses.
 **~*~*/

void printMenu(binarySearchTree *prtBinarySearchTree)
{
    bool success;
    string choice;
    
    cout << "Type M for the menu\n";

    while (!success)
    {
        choice = getUserChoice(); // will need the string to carry the args
        switch (toupper(choice[0]))
        {
            case ADD_RESTAURANT:
                cout << "Not Implemented\n";
                break;
            case DELETE_RESTAURANT:
                cout << "Not Implemented\n";
                break;
            case FIND_RESTAURANT_BY_NAME:
                cout << "Not Implemented\n";
                break;
            case LIST_RESTAURANTS:
                cout << "Not Implemented\n";
                break;
            case PRINT_SORTED:
                cout << "Not Implemented\n";
                break;
            case PRINT_TREE_LIST:
                cout << "Not Implemented\n";
                break;
            case SHOW_MENU:
                cout << MENU;
                break;
            case QUIT_CHOICE:
                success = true;
                break;
            default:
                cout << "Type M for the menu.\n";
        }
    }
}

/**~*~*
 This function takes input from the user.
 If the input is not valid (a valid menu choice) it
 prompts the user to type H for help until a vailid input
 is entered.
 *~**/
string getUserChoice()
{
	cout << ">";
    string userChoice;
    cin >> userChoice;
    cin.clear();			// to clear the error flag
	cin.ignore(80, '\n');	// to discard the unwanted input from the input buffer
    return userChoice;
}

//*************************
// Definition of printMenu
// Prints the choices available
// for the menu.
//*************************
void printMenu()
{
	cout << "\nHelp Menu\n" << SHOW_MENU;
}

//**************************************************
// Definition of function removeTrailingWhiteSpace.
// This function removes trailing white spaces at
// the back of the string, str, and returns the new
// string. Removes trailing tabs, line feeds,
// spaces, and carriage returns.
//**************************************************
string removeTrailingWhiteSpace(string str)
{
    int i = str.length() - 1;  // zero based
    while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ' || str[i] == '\r')
    {
        str.erase(i, 1);
        i--;
    }
    return str;
}
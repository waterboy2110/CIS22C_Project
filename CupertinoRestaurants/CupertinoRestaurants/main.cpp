//
//  main.cpp
//  Team Project
//
//  Created by Yenni Chu on 2/24/14.
//  Copyright (c) 2014 Yenni Chu. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void readfile();


int main()
{
     readfile();

}

void readfile()
{
    char buffer[50];
    string restaurantName;
    int addressNum;
    string     streetName;
    string  RestaurantType;
    string costType;
    
    ifstream fin;
    fin.open("Restaurants.txt");
    if(!fin)
    {
        cout << "Error opening file input.txt" <<endl;  //Error open file message
        exit(0);
    }
    while (!fin.eof())
    {
        
    
        fin.getline(buffer, 50,'\n');
        restaurantName = buffer;
        
        fin.getline(buffer, 50,'\n');
        addressNum =atoi( buffer);
        
        
        fin.getline(buffer, 50,'\n');
        streetName = buffer;
        
        fin.getline(buffer, 50,'\n');
        RestaurantType = buffer;

        
        fin.getline(buffer, 50,'\n');
        costType = buffer;
        
        
        
        
        cout << restaurantName <<" - "<<addressNum<< " - "<<streetName<<" - "<<RestaurantType<<" - "<< costType <<endl;
        
        
        
        
    }
    
    
    fin.close();
    
    
    
}





















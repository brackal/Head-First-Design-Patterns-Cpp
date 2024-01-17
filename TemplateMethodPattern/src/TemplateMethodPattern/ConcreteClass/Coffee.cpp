///////////////////////////////////////////////////////////
//  Coffee.cpp
//  Implementation of the Class Coffee
//  Created on:      18-Nov-2023 21:43:00
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Coffee.h"




Coffee::Coffee(){

}


Coffee::~Coffee(){

}


void Coffee::brew(){

    std::cout << "Brew the coffee grinds!" << std::endl;
}


void Coffee::addCondiments(){

    std::cout << "Add sugar and milk to coffee!" << std::endl;
}


bool Coffee::customerWantsCondimentsHook() {

    std::cout << "Take milk and sugar in your coffee (y/n)? ";

    std::string userInput = getUserInput();

    if (userInput == "yes")
        return true;
    else
        return false;
}

std::string Coffee::getUserInput()
{
    std::string userInput = "empty";

    while (userInput == "empty")
    {
        switch (getchar())
        {
        case 'y':
            userInput = "yes";
            break;

        case 'n':
            userInput = "no";
            break;

        default:
            // nothing to do
            break;
        }
    }

   return userInput;
}
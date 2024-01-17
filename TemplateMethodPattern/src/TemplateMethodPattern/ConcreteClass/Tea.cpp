///////////////////////////////////////////////////////////
//  Tea.cpp
//  Implementation of the Class Tea
//  Created on:      18-Nov-2023 21:43:00
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Tea.h"




Tea::Tea(){

}


Tea::~Tea(){

}


void Tea::brew(){

    std::cout << "Steep the teabag in the water!" << std::endl;
}


void Tea::addCondiments(){

    std::cout << "Add lemon to tea!" << std::endl;
}


bool Tea::customerWantsCondimentsHook(){

    std::cout << "Take lemon in your tea (y/n)? ";
    
    std::string userInput = getUserInput();

    if (userInput == "yes")
        return true;
    else
        return false;
}

std::string Tea::getUserInput()
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

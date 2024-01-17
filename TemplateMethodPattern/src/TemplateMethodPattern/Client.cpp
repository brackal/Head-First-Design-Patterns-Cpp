///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      18-Nov-2023 21:43:00
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Client.h"

Client::Client(){

}


Client::~Client(){

}


void Client::run(){

    //CaffeineBeverage caffeineBeverage;

    Tea tea;
    Coffee coffee;

#if 0
    tea.prepareRecipeTemplateMethod();
    coffee.prepareRecipeTemplateMethod();
#else
    TestClient testClient(&tea);
    testClient.testTemplateMethod();


    testClient.setCaffeineBeverage(&coffee);
    testClient.testTemplateMethod();
#endif


    while (true)
    {
    }
}
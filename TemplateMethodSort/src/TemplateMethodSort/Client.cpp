///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      19-Jan-2024 08:17:01
//  Original author: abrack
///////////////////////////////////////////////////////////

#include <iostream>
#include "Client.h"




Client::Client(){

}


Client::~Client(){

}


void Client::run(){

    Duck d1("a", 4);
    Duck d2("b", 2);
    Duck d3("c", 44);
    Duck d4("d", 1);

    Duck duckArray[4] = { d1, d2, d3, d4 };

    std::cout << "Duck bevor sort:" << std::endl;
    this->displayDuckArray(duckArray, 4);

    Arrays<Duck>::sort(duckArray, 4);

    std::cout << "Duck after sort:" << std::endl;
    this->displayDuckArray(duckArray, 4);


    IntValue a(22);
    IntValue b(33);
    IntValue c(11);

    IntValue intArray[3] = { a, b, c };

    std::cout << "intArray bevor sort:" << std::endl;
    this->displayIntArray(intArray, 3);

    Arrays<IntValue>::sort(intArray, 3);

    std::cout << "intArray after sort:" << std::endl;
    this->displayIntArray(intArray, 3);

    while (true)
    {
    }
}

void Client::displayDuckArray(Duck* duck, int length) {

    Duck* duckTmp = duck;

    for (int i = 0; i < length; i++, duckTmp++) {
        std::cout << "duck: " << duckTmp->getWeight() << std::endl;
    }
}


void Client::displayIntArray(IntValue* intValue, int length){

    IntValue* intArrayTmp = intValue;

    for (int i = 0; i < length; i++, intArrayTmp++) {
        std::cout << "intArray: " << intArrayTmp->getValue() << std::endl;
    }
}

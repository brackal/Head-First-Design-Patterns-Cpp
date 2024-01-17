///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      14-Nov-2023 14:17:25
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Client.h"




Client::Client(){

}


Client::~Client(){

}


void Client::run(){

    TestClient testClient;

    MallardDuck mallardDuck;

    WildTurkey wildTurkey;

    TurkeyAdapter turkeyAdapter(&wildTurkey);

    std::cout << "Turkey says..." << std::endl;
    wildTurkey.gobble();
    wildTurkey.fly();

    //client uses Duck interface and concrete ducks... 
    std::cout << "Duck says..." << std::endl;
    testClient.testAdapter(&mallardDuck);

    //Situation has changed...
    //Now client still has to use Duck interface but no concrete ducks.
    //Anstead, client must use concrete turkeys...

    //To be able to do this, client must use TurkeyAdapter...
    std::cout << "TurkeyAdapter says..." << std::endl;
    testClient.testAdapter(&turkeyAdapter);

    while (true)
    {
    }
}
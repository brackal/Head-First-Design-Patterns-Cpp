///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      16-Nov-2023 16:36:15
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Client.h"




Client::Client(){

}


Client::~Client(){

}


void Client::run(){

    //instantiate subsystem elements
    Amplifier amplifier;
    Player player;
    PopcornPopper popcornPopper;

    //instantiate facade
    HomeTheaterFacade homeTheaterFacade(&amplifier, &player, &popcornPopper);

    //instantiate client that uses facade
    TestClient testClient(&homeTheaterFacade);

    testClient.testFacade();

    while (true)
    {
    }
}
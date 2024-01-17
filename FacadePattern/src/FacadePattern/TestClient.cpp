///////////////////////////////////////////////////////////
//  TestClient.cpp
//  Implementation of the Class TestClient
//  Created on:      16-Nov-2023 16:36:16
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "TestClient.h"




TestClient::TestClient(HomeTheaterFacade* homeTheaterFacade){

    mHomeTheaterFacade = homeTheaterFacade;
}


TestClient::~TestClient(){

}


void TestClient::testFacade(){

    mHomeTheaterFacade->watchMovie("Kino");

    mHomeTheaterFacade->stopMovie();
}
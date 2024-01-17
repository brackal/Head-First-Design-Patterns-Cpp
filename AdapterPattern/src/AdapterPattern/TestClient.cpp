///////////////////////////////////////////////////////////
//  TestClient.cpp
//  Implementation of the Class TestClient
//  Created on:      14-Nov-2023 14:17:25
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "TestClient.h"


TestClient::TestClient(){

}



TestClient::~TestClient(){

}





void TestClient::testAdapter(Duck * duck){
    duck->quack();
    duck->fly();
}

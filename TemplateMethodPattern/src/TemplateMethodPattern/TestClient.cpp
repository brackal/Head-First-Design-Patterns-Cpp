///////////////////////////////////////////////////////////
//  TestClient.cpp
//  Implementation of the Class TestClient
//  Created on:      18-Nov-2023 21:43:00
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "TestClient.h"


TestClient::TestClient(CaffeineBeverage* caffeineBeverage){

    mCaffeineBeverage = caffeineBeverage;
}



TestClient::~TestClient(){

}


void TestClient::setCaffeineBeverage(CaffeineBeverage* caffeineBeverage)
{

    mCaffeineBeverage = caffeineBeverage;
}


void TestClient::testTemplateMethod(){

    mCaffeineBeverage->prepareRecipeTemplateMethod();
}
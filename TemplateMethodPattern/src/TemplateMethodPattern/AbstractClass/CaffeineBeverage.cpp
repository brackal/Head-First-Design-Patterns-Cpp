///////////////////////////////////////////////////////////
//  CaffeineBeverage.cpp
//  Implementation of the Class CaffeineBeverage
//  Created on:      18-Nov-2023 21:43:00
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "CaffeineBeverage.h"




CaffeineBeverage::CaffeineBeverage(){

}


CaffeineBeverage::~CaffeineBeverage(){

}


void CaffeineBeverage::prepareRecipeTemplateMethod() {

    boilWater();      //implemented by superclass
    brew();           //pure virtual method will be overwritten by subclass
    pourInCup();      //implemented by superclass
    if (customerWantsCondimentsHook())
    {
        addCondiments();  //pure virtual method will be overwritten by subclass
    }
}


void CaffeineBeverage::boilWater(){

    std::cout << "Boil Water for beverage!" << std::endl;
}


void CaffeineBeverage::pourInCup(){

    std::cout << "Pour beverage in cup!" << std::endl;
}


bool CaffeineBeverage::customerWantsCondimentsHook(){

    return true;
}
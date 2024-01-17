///////////////////////////////////////////////////////////
//  MilkDecorator.cpp
//  Implementation of the Class MilkDecorator
//  Created on:      10-Nov-2023 15:42:45
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "MilkDecorator.h"


MilkDecorator::MilkDecorator(Beverage* beverage){
    mBeverage = beverage;
    mDescription = "Milk";
    mCost = (float)0.10;
}



MilkDecorator::~MilkDecorator(){

}





std::string MilkDecorator::getDescription(){

    //Rufe Operation auf der Component auf und fuege eigenes Verhalten zu
    //Call oparation on the component and add own behavior
    std::string str = mBeverage->getDescription();
    str.append(", ");
    str.append(mDescription);
    return str;
}


float MilkDecorator::getCost(){

    //Rufe Operation auf der Component auf und fuege eigenes Verhalten zu
    //Call oparation on the component and add own behavior
    float cost = mBeverage->getCost() + mCost;
    return cost;
}
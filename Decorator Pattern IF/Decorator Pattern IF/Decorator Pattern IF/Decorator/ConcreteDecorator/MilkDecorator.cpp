///////////////////////////////////////////////////////////
//  MilkDecorator.cpp
//  Implementation of the Class MilkDecorator
//  Created on:      11-Nov-2023 15:38:23
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

	//Rufe Operatuion auf der Component auf und füge eigenes Verhalten zu
	std::string str = mBeverage->getDescription();
	str.append(", ");
	str.append(mDescription);
	return str;
}


float MilkDecorator::getCost(){

	float cost = mBeverage->getCost() + mCost;
	return cost;
}
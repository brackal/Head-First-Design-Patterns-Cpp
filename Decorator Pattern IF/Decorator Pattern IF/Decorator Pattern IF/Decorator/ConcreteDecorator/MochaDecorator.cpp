///////////////////////////////////////////////////////////
//  MochaDecorator.cpp
//  Implementation of the Class MochaDecorator
//  Created on:      11-Nov-2023 15:38:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "MochaDecorator.h"




MochaDecorator::MochaDecorator(Beverage* beverage){
	mBeverage = beverage;
	mDescription = "Mocha";
	mCost = (float)0.20;
}


MochaDecorator::~MochaDecorator(){

}


std::string MochaDecorator::getDescription(){

	//Rufe Operatuion auf der Component auf und füge eigenes Verhalten zu
	std::string str = mBeverage->getDescription();
	str.append(", ");
	str.append(mDescription);
	return str;
}


float MochaDecorator::getCost(){

	float cost = mBeverage->getCost() + mCost;
	return cost;
}
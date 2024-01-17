///////////////////////////////////////////////////////////
//  Espresso.cpp
//  Implementation of the Class Espresso
//  Created on:      17-Jan-2024 09:33:20
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Espresso.h"




Espresso::Espresso(){

	mDescription = "Espresso";
	mCost = (float)1.99;
}


Espresso::~Espresso(){

}


std::string Espresso::getDescription(){

	return  mDescription;
}


float Espresso::getCost(){

	return mCost;
}
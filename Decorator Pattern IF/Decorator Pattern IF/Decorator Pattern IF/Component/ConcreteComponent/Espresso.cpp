///////////////////////////////////////////////////////////
//  Espresso.cpp
//  Implementation of the Class Espresso
//  Created on:      11-Nov-2023 15:38:23
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
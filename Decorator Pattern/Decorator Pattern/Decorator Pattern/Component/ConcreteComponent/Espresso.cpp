///////////////////////////////////////////////////////////
//  Espresso.cpp
//  Implementation of the Class Espresso
//  Created on:      10-Nov-2023 15:42:45
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Espresso.h"




Espresso::Espresso(){
	mDescription = "Espresso";
	mCost = (float)1.99;
}


Espresso::~Espresso(){

}


float Espresso::getCost(){

	return mCost;
}
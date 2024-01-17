///////////////////////////////////////////////////////////
//  DarkRost.cpp
//  Implementation of the Class DarkRost
//  Created on:      17-Jan-2024 09:33:19
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "DarkRost.h"


DarkRost::DarkRost(){
	mDescription = "Dark Rost";
	mCost = (float)0.99;
}



DarkRost::~DarkRost(){

}





std::string DarkRost::getDescription(){

	return  mDescription;
}


float DarkRost::getCost(){

	return mCost;
}
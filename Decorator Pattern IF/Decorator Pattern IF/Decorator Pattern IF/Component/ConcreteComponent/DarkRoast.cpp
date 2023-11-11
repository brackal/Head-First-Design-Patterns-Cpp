///////////////////////////////////////////////////////////
//  DarkRoast.cpp
//  Implementation of the Class DarkRoast
//  Created on:      11-Nov-2023 15:38:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "DarkRoast.h"


DarkRoast::DarkRoast(){
	mDescription = "Dart Roast";
	mCost = (float)0.99;
}



DarkRoast::~DarkRoast(){

}





std::string DarkRoast::getDescription(){

	return  mDescription;
}


float DarkRoast::getCost(){

	return mCost;
}
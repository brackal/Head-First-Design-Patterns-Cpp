///////////////////////////////////////////////////////////
//  DarkRost.cpp
//  Implementation of the Class DarkRost
//  Created on:      10-Nov-2023 15:42:45
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "DarkRost.h"


DarkRost::DarkRost(){
	mDescription = "Dark Rost";
	mCost = (float)0.99;
}



DarkRost::~DarkRost(){

}





float DarkRost::getCost(){

	return mCost;
}
///////////////////////////////////////////////////////////
//  TurkeyAdapter.cpp
//  Implementation of the Class TurkeyAdapter
//  Created on:      14-Nov-2023 14:17:25
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "TurkeyAdapter.h"


TurkeyAdapter::TurkeyAdapter(Turkey* turkey){
    mTurkey = turkey;
}



TurkeyAdapter::~TurkeyAdapter(){

}





void TurkeyAdapter::quack(){
    mTurkey->gobble();
}


void TurkeyAdapter::fly(){
    mTurkey->fly();
    mTurkey->fly();
    mTurkey->fly();
}
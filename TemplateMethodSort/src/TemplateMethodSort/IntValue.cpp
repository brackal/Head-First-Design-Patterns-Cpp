///////////////////////////////////////////////////////////
//  IntValue.cpp
//  Implementation of the Class IntValue
//  Created on:      19-Jan-2024 08:17:02
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "IntValue.h"

IntValue::IntValue(){
}

IntValue::IntValue(int value){
    mData = value;
}


IntValue::~IntValue(){

}


int IntValue::compareTo(Comparable* comp){

    IntValue* tmp = (IntValue*)comp;

    if (this->getValue() < tmp->getValue())
    {
        return -1;
    }
    else if (this->getValue() == tmp->getValue())
    {
        return 0;
    }
    else //this->getValue() > tmp->getValue()
    {
        return 1;
    }
}



int IntValue::getValue(){

    return mData;
}


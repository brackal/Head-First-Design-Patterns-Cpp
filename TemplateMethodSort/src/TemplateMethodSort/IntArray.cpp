///////////////////////////////////////////////////////////
//  IntArray.cpp
//  Implementation of the Class IntArray
//  Created on:      29-Nov-2023 22:02:37
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "IntArray.h"

IntArray::IntArray(){
}

IntArray::IntArray(int value){
    mData = value;
}


IntArray::~IntArray(){

}


int IntArray::compareTo(Comparable* comp){

    IntArray* tmp = (IntArray*)comp;

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



int IntArray::getValue(){

    return mData;
}


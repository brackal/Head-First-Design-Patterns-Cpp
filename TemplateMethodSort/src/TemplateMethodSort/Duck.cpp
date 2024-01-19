///////////////////////////////////////////////////////////
//  Duck.cpp
//  Implementation of the Class Duck
//  Created on:      19-Jan-2024 08:17:02
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Duck.h"




Duck::Duck(){

}


Duck::Duck(std::string name, int weight){
    mName = name;
    mWeight = weight;
}


Duck::~Duck(){

}


int Duck::getWeight(){

    return mWeight;
}



int Duck::compareTo(Comparable * comp) {

    Duck* tmp = (Duck*)comp;

    if (this->getWeight() < tmp->getWeight())
    {
        return -1;
    }
    else if (this->getWeight() == tmp->getWeight())
    {
        return 0;
    }
    else //this->getWeight() > tmp->getWeight()
    {
        return 1;
    }
}
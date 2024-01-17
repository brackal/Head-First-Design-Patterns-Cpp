///////////////////////////////////////////////////////////
//  Duck.cpp
//  Implementation of the Class Duck
//  Created on:      29-Nov-2023 22:02:37
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


int Duck::geWeight(){

    return mWeight;
}



int Duck::compareTo(Comparable * comp) {

    Duck* tmp = (Duck*)comp;

    if (this->geWeight() < tmp->geWeight())
    {
        return -1;
    }
    else if (this->geWeight() == tmp->geWeight())
    {
        return 0;
    }
    else //this->geWeight() > tmp->geWeight()
    {
        return 1;
    }
}
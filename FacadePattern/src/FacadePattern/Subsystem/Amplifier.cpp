///////////////////////////////////////////////////////////
//  Amplifier.cpp
//  Implementation of the Class Amplifier
//  Created on:      16-Nov-2023 16:36:15
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Amplifier.h"




Amplifier::Amplifier(){

}


Amplifier::~Amplifier(){

}


void Amplifier::on(){

    std::cout << "Amplifier ON!" << std::endl;
}


void Amplifier::off(){

    std::cout << "Amplifier OFF!" << std::endl;
}


void Amplifier::setSurroundSound(){

    std::cout << "Amplifier surround sound ON!" << std::endl;
}


void Amplifier::setVolume(int volume){

    std::cout << "Amplifier volume: " << volume << std::endl;
}
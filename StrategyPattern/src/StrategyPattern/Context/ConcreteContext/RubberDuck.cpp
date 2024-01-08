///////////////////////////////////////////////////////////
//  RubberDuck.cpp
//  Implementation of the Class RubberDuck
//  Created on:      08-Jan-2024 11:33:54
//  Original author: abrack
///////////////////////////////////////////////////////////

#include <iostream>
#include "RubberDuck.h"


RubberDuck::RubberDuck(IFlyBehavior * flyBehavior, IQuackBehavior * quackBehavior){

  setFlyBehavior(flyBehavior);
  setQuackBehavior(quackBehavior);
}


RubberDuck::~RubberDuck(){

}


void RubberDuck::display(){

  std::cout << "Im am rubber duck!\n";
}
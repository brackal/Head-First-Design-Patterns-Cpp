///////////////////////////////////////////////////////////
//  RubberDuck.cpp
//  Implementation of the Class RubberDuck
//  Created on:      04-Nov-2023 20:36:23
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
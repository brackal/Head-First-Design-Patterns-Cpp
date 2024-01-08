///////////////////////////////////////////////////////////
//  MallardDuck.cpp
//  Implementation of the Class MallardDuck
//  Created on:      08-Jan-2024 11:33:48
//  Original author: abrack
///////////////////////////////////////////////////////////

#include <iostream>
#include "MallardDuck.h"


MallardDuck::MallardDuck(IFlyBehavior * flyBehavior, IQuackBehavior * quackBehavior){

  setFlyBehavior(flyBehavior);
  setQuackBehavior(quackBehavior);
}


MallardDuck::~MallardDuck(){

}


void MallardDuck::display(){

  std::cout << "Im am mallard duck!\n";
}
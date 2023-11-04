///////////////////////////////////////////////////////////
//  MallardDuck.cpp
//  Implementation of the Class MallardDuck
//  Created on:      04-Nov-2023 20:36:23
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
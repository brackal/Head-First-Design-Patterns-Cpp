///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      10-Nov-2023 15:42:45
//  Original author: abrack
///////////////////////////////////////////////////////////

#include <iostream>
#include "Client.h"




Client::Client(){
  //Beverage* beverage = new Beverage();

  
  //mEspresso.mDescription = "asdf";

  //CondimentBaseDecorator* condimentBaseDecorator = new Beverage();
}


Client::~Client(){

}


void Client::run(){


  Espresso espresso;
  MochaDecorator mochaDecorator(&espresso);
  MilkDecorator milkDecorator(&mochaDecorator);


  std::cout << espresso.getDescription() << std::endl;
  std::cout << espresso.getCost() << std::endl;

  std::cout << mochaDecorator.getDescription() << std::endl;
  std::cout << mochaDecorator.getCost() << std::endl;

  std::cout << milkDecorator.getDescription() << std::endl;
  std::cout << milkDecorator.getCost() << std::endl;



  while (1)
  {
  }
}
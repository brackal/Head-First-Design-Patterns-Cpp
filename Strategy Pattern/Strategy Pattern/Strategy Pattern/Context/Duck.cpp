///////////////////////////////////////////////////////////
//  Duck.cpp
//  Implementation of the Class Duck
//  Created on:      04-Nov-2023 20:36:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Duck.h"




Duck::Duck(){

}


Duck::~Duck(){

}


void Duck::swim(){

}


void Duck::setFlyBehavior(IFlyBehavior * flyBehavior){

  mFlyBehavior = flyBehavior;
}


void Duck::setQuackBehavior(IQuackBehavior * quackBehavior){

  mQuackBehavior = quackBehavior;
}


void Duck::performFly(){
  if (mFlyBehavior != nullptr)
  {
    mFlyBehavior->fly();
  }
}


void Duck::performQuack(){

  if (mQuackBehavior != nullptr)
  {
    mQuackBehavior->quack();
  }
}
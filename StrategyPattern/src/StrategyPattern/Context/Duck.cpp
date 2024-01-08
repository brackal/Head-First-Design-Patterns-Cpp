///////////////////////////////////////////////////////////
//  Duck.cpp
//  Implementation of the Class Duck
//  Created on:      08-Jan-2024 11:33:42
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
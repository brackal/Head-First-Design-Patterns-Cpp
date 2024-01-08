///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      08-Jan-2024 11:33:40
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Client.h"


Client::Client() :  mMallardDuck(&mFlyWithWings, &mQuack),
                    mRubberDuck(&mFlyNoWay, &mMuteQuack) {
}



Client::~Client(){

}





void Client::run(){

  mRubberDuck.swim();
  mRubberDuck.display();


  mRubberDuck.performFly();
  mRubberDuck.setFlyBehavior(&mFlyWithWings);
  mRubberDuck.performFly();


  mRubberDuck.performQuack();
  mRubberDuck.setQuackBehavior(&mQuack);
  mRubberDuck.performQuack();


  while (1)
  {
  }

}
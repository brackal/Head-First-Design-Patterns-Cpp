///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      04-Nov-2023 20:36:22
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
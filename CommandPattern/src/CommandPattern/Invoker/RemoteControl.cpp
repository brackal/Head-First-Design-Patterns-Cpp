///////////////////////////////////////////////////////////
//  RemoteControl.cpp
//  Implementation of the Class RemoteControl
//  Created on:      13-Nov-2023 21:54:34
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "RemoteControl.h"




RemoteControl::RemoteControl(){

}


RemoteControl::~RemoteControl(){

}


void RemoteControl::setCommand(Command* lightOnCommand, Command* lightOffCommand){

  mLightOnCommand = lightOnCommand;
  mLightOffCommand = lightOffCommand;
}


void RemoteControl::switchLightOn(){

  mLightOnCommand->execute();
}


void RemoteControl::switchLightOff(){

  mLightOffCommand->execute();
}
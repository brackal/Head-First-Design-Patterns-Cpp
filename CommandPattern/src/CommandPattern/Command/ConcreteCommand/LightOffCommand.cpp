///////////////////////////////////////////////////////////
//  LightOffCommand.cpp
//  Implementation of the Class LightOffCommand
//  Created on:      13-Nov-2023 21:54:33
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "LightOffCommand.h"



LightOffCommand::LightOffCommand(Light* receiver){
  mReceiver = receiver;
}


LightOffCommand::~LightOffCommand(){

}


void LightOffCommand::execute(){
  mReceiver->off();
}


void LightOffCommand::undo(){
  mReceiver->on();
}
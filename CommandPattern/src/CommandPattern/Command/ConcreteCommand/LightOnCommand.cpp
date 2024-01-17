///////////////////////////////////////////////////////////
//  LightOnCommand.cpp
//  Implementation of the Class LightOnCommand
//  Created on:      13-Nov-2023 21:54:33
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "LightOnCommand.h"





LightOnCommand::LightOnCommand(Light* receiver){

  mReceiver = receiver;
}


LightOnCommand::~LightOnCommand(){

}


void LightOnCommand::execute(){
  mReceiver->on();
}


void LightOnCommand::undo(){
  mReceiver->off();
}
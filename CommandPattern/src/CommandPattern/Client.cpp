///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      13-Nov-2023 21:54:33
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Client.h"




Client::Client(){

}


Client::~Client(){

}


void Client::run(){

	//define receiver
	Light light;

	//define concrete commands and give them the receiver
	LightOnCommand lightOnCommand(&light);
	LightOffCommand lightOffcommand(&light);

	//define invoker and set its commands
	RemoteControl remoteControl;
	remoteControl.setCommand(&lightOnCommand, &lightOffcommand);


	remoteControl.switchLightOn();
	remoteControl.switchLightOff();


	while (true)
	{
	}
}
///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      11-Nov-2023 15:38:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Client.h"




Client::Client(){

}


Client::~Client(){

}


void Client::run(){


	//concrete components
	Espresso espresso;
	DarkRoast darkRoast;

	//concrete decorators
	MochaDecorator mochaDecorator(&espresso);
	MilkDecorator milkDecorator(&mochaDecorator);

	std::cout << espresso.getDescription() << std::endl;
	std::cout << espresso.getCost() << std::endl;

	std::cout << mochaDecorator.getDescription() << std::endl;
	std::cout << mochaDecorator.getCost() << std::endl;

	std::cout << milkDecorator.getDescription() << std::endl;
	std::cout << milkDecorator.getCost() << std::endl;

	while (true)
	{
	}
}
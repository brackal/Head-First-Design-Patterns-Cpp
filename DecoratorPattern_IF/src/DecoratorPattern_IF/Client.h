///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      17-Jan-2024 09:33:19
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_7EFEB0B4_29E5_4019_AD40_375148D6E49C__INCLUDED_)
#define EA_7EFEB0B4_29E5_4019_AD40_375148D6E49C__INCLUDED_

#include <iostream>

#include "Espresso.h"
#include "DarkRost.h"
#include "MochaDecorator.h"
#include "MilkDecorator.h"

class Client
{

public:
	Client();
	virtual ~Client();
	void run();

};
#endif // !defined(EA_7EFEB0B4_29E5_4019_AD40_375148D6E49C__INCLUDED_)

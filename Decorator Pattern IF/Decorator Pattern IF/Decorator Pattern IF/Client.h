///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      11-Nov-2023 15:38:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_2E1A44D4_DBBE_43e4_A466_E6E328E43B87__INCLUDED_)
#define EA_2E1A44D4_DBBE_43e4_A466_E6E328E43B87__INCLUDED_

#include <iostream>

#include "Espresso.h"
#include "DarkRoast.h"
#include "MochaDecorator.h"
#include "MilkDecorator.h"

class Client
{

public:
	Client();
	virtual ~Client();
	void run();

};
#endif // !defined(EA_2E1A44D4_DBBE_43e4_A466_E6E328E43B87__INCLUDED_)

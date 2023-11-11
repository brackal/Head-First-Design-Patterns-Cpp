///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      10-Nov-2023 15:42:45
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_4F60AA0F_295D_424d_AE0F_5BAFCFFE87C0__INCLUDED_)
#define EA_4F60AA0F_295D_424d_AE0F_5BAFCFFE87C0__INCLUDED_

#include "Espresso.h"
#include "MochaDecorator.h"
#include "MilkDecorator.h"
#include "DarkRost.h"

class Client
{

public:
	Client();
	virtual ~Client();
	void run();

};
#endif // !defined(EA_4F60AA0F_295D_424d_AE0F_5BAFCFFE87C0__INCLUDED_)

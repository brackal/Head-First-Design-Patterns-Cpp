///////////////////////////////////////////////////////////
//  FlyWithWings.h
//  Implementation of the Class FlyWithWings
//  Created on:      04-Nov-2023 20:36:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_9945D25E_6483_4dd2_A468_589A74D87AC8__INCLUDED_)
#define EA_9945D25E_6483_4dd2_A468_589A74D87AC8__INCLUDED_

#include "IFlyBehavior.h"

class FlyWithWings : public IFlyBehavior
{

public:
	FlyWithWings();
	virtual ~FlyWithWings();
	virtual void fly();

};
#endif // !defined(EA_9945D25E_6483_4dd2_A468_589A74D87AC8__INCLUDED_)

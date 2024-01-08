///////////////////////////////////////////////////////////
//  FlyWithWings.h
//  Implementation of the Class FlyWithWings
//  Created on:      08-Jan-2024 11:33:44
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_0DBE5B9F_9210_4f98_A596_9AA07C2A9FC7__INCLUDED_)
#define EA_0DBE5B9F_9210_4f98_A596_9AA07C2A9FC7__INCLUDED_

#include "IFlyBehavior.h"

class FlyWithWings : public IFlyBehavior
{

public:
	FlyWithWings();
	virtual ~FlyWithWings();
	virtual void fly();

};
#endif // !defined(EA_0DBE5B9F_9210_4f98_A596_9AA07C2A9FC7__INCLUDED_)

///////////////////////////////////////////////////////////
//  FlyNoWay.h
//  Implementation of the Class FlyNoWay
//  Created on:      04-Nov-2023 20:36:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_8823BD17_BFB5_4bee_88B9_6DB01B2B9D7F__INCLUDED_)
#define EA_8823BD17_BFB5_4bee_88B9_6DB01B2B9D7F__INCLUDED_

#include "IFlyBehavior.h"

class FlyNoWay : public IFlyBehavior
{

public:
	FlyNoWay();
	virtual ~FlyNoWay();
	virtual void fly();

};
#endif // !defined(EA_8823BD17_BFB5_4bee_88B9_6DB01B2B9D7F__INCLUDED_)

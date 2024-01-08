///////////////////////////////////////////////////////////
//  FlyNoWay.h
//  Implementation of the Class FlyNoWay
//  Created on:      08-Jan-2024 11:33:42
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_CE81B171_5C8B_442c_B873_615A8848425B__INCLUDED_)
#define EA_CE81B171_5C8B_442c_B873_615A8848425B__INCLUDED_

#include "IFlyBehavior.h"

class FlyNoWay : public IFlyBehavior
{

public:
	FlyNoWay();
	virtual ~FlyNoWay();
	virtual void fly();

};
#endif // !defined(EA_CE81B171_5C8B_442c_B873_615A8848425B__INCLUDED_)

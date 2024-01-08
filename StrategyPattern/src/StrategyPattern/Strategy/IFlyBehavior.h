///////////////////////////////////////////////////////////
//  IFlyBehavior.h
//  Implementation of the Interface IFlyBehavior
//  Created on:      08-Jan-2024 11:33:46
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_9EA26BEE_2F54_4653_95F7_4A4F17967BFE__INCLUDED_)
#define EA_9EA26BEE_2F54_4653_95F7_4A4F17967BFE__INCLUDED_

class IFlyBehavior
{

public:
	IFlyBehavior(){

	}
	virtual ~IFlyBehavior(){

	}
	virtual void fly() =0;

};
#endif // !defined(EA_9EA26BEE_2F54_4653_95F7_4A4F17967BFE__INCLUDED_)

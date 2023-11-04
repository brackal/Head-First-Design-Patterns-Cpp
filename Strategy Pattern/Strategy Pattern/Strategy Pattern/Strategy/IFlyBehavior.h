///////////////////////////////////////////////////////////
//  IFlyBehavior.h
//  Implementation of the Interface IFlyBehavior
//  Created on:      04-Nov-2023 20:36:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_86B24E32_7073_47f0_869C_6F033626D61F__INCLUDED_)
#define EA_86B24E32_7073_47f0_869C_6F033626D61F__INCLUDED_

class IFlyBehavior
{

public:
	IFlyBehavior(){

	}
	virtual ~IFlyBehavior(){

	}
	virtual void fly() =0;

};
#endif // !defined(EA_86B24E32_7073_47f0_869C_6F033626D61F__INCLUDED_)

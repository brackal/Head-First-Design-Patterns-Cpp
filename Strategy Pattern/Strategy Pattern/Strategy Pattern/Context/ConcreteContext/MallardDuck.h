///////////////////////////////////////////////////////////
//  MallardDuck.h
//  Implementation of the Class MallardDuck
//  Created on:      04-Nov-2023 20:36:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_B7C992BF_1E76_4a4b_8B16_6806B9D3E2DF__INCLUDED_)
#define EA_B7C992BF_1E76_4a4b_8B16_6806B9D3E2DF__INCLUDED_

#include "IQuackBehavior.h"
#include "IFlyBehavior.h"
#include "Duck.h"

class MallardDuck : public Duck
{

public:
	MallardDuck();

	MallardDuck(IFlyBehavior * flyBehavior, IQuackBehavior * quackBehavior);
	virtual ~MallardDuck();
	virtual void display();

};
#endif // !defined(EA_B7C992BF_1E76_4a4b_8B16_6806B9D3E2DF__INCLUDED_)

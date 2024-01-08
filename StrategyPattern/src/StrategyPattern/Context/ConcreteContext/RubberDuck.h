///////////////////////////////////////////////////////////
//  RubberDuck.h
//  Implementation of the Class RubberDuck
//  Created on:      08-Jan-2024 11:33:53
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_CB89F541_D795_44a8_8E68_75D82BA7FF80__INCLUDED_)
#define EA_CB89F541_D795_44a8_8E68_75D82BA7FF80__INCLUDED_

#include "IQuackBehavior.h"
#include "IFlyBehavior.h"
#include "Duck.h"

class RubberDuck : public Duck
{

public:
	RubberDuck();

	RubberDuck(IFlyBehavior * flyBehavior, IQuackBehavior * quackBehavior);
	virtual ~RubberDuck();
	virtual void display();

};
#endif // !defined(EA_CB89F541_D795_44a8_8E68_75D82BA7FF80__INCLUDED_)

///////////////////////////////////////////////////////////
//  RubberDuck.h
//  Implementation of the Class RubberDuck
//  Created on:      04-Nov-2023 20:36:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_D3080E65_DC06_4b6c_B152_C26A57F49735__INCLUDED_)
#define EA_D3080E65_DC06_4b6c_B152_C26A57F49735__INCLUDED_

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
#endif // !defined(EA_D3080E65_DC06_4b6c_B152_C26A57F49735__INCLUDED_)

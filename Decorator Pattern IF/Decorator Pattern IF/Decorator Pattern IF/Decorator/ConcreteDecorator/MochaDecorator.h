///////////////////////////////////////////////////////////
//  MochaDecorator.h
//  Implementation of the Class MochaDecorator
//  Created on:      11-Nov-2023 15:38:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_49C2FB90_60EF_4e70_A977_AFC78C5522EB__INCLUDED_)
#define EA_49C2FB90_60EF_4e70_A977_AFC78C5522EB__INCLUDED_

#include "BeverageDecorator.h"

class MochaDecorator : public BeverageDecorator
{

public:

	MochaDecorator(Beverage* beverage);
	virtual ~MochaDecorator();
	virtual std::string getDescription();
	virtual float getCost();

};
#endif // !defined(EA_49C2FB90_60EF_4e70_A977_AFC78C5522EB__INCLUDED_)

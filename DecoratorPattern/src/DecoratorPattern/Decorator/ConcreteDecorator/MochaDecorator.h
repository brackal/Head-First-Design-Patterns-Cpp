///////////////////////////////////////////////////////////
//  MochaDecorator.h
//  Implementation of the Class MochaDecorator
//  Created on:      10-Nov-2023 15:42:45
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_B9ABEE67_8F60_497d_A4BF_DC7B45382803__INCLUDED_)
#define EA_B9ABEE67_8F60_497d_A4BF_DC7B45382803__INCLUDED_

#include "BeverageDecorator.h"

class MochaDecorator : public BeverageDecorator
{

public:
	MochaDecorator(Beverage* beverage);
	virtual ~MochaDecorator();
	virtual std::string getDescription();
	virtual float getCost();

};
#endif // !defined(EA_B9ABEE67_8F60_497d_A4BF_DC7B45382803__INCLUDED_)

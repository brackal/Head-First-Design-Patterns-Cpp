///////////////////////////////////////////////////////////
//  MilkDecorator.h
//  Implementation of the Class MilkDecorator
//  Created on:      11-Nov-2023 15:38:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_AD91D083_5746_441a_8EC6_F05288F11E73__INCLUDED_)
#define EA_AD91D083_5746_441a_8EC6_F05288F11E73__INCLUDED_

#include "BeverageDecorator.h"

class MilkDecorator : public BeverageDecorator
{

public:

	MilkDecorator(Beverage* beverage);
	virtual ~MilkDecorator();
	virtual std::string getDescription();
	virtual float getCost();

};
#endif // !defined(EA_AD91D083_5746_441a_8EC6_F05288F11E73__INCLUDED_)

///////////////////////////////////////////////////////////
//  MilkDecorator.h
//  Implementation of the Class MilkDecorator
//  Created on:      10-Nov-2023 15:42:45
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_EDED2EB7_2E47_497f_8714_0E3E1D871DC8__INCLUDED_)
#define EA_EDED2EB7_2E47_497f_8714_0E3E1D871DC8__INCLUDED_

#include "BeverageDecorator.h"

class MilkDecorator : public BeverageDecorator
{

public:
	MilkDecorator(Beverage* beverage);
	virtual ~MilkDecorator();
	virtual std::string getDescription();
	virtual float getCost();

};
#endif // !defined(EA_EDED2EB7_2E47_497f_8714_0E3E1D871DC8__INCLUDED_)

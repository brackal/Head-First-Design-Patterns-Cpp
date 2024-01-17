///////////////////////////////////////////////////////////
//  BeverageDecorator.h
//  Implementation of the Class BeverageDecorator
//  Created on:      17-Jan-2024 09:33:19
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_07FD9043_5B2B_4db5_B9EA_C7B7B8F40304__INCLUDED_)
#define EA_07FD9043_5B2B_4db5_B9EA_C7B7B8F40304__INCLUDED_

#include "Beverage.h"

class BeverageDecorator : public Beverage
{

public:
	BeverageDecorator();
	virtual ~BeverageDecorator();
	virtual std::string getDescription() =0;
	virtual float getCost() =0;

protected:
	Beverage* mBeverage;
	std::string mDescription;
	float mCost;

};
#endif // !defined(EA_07FD9043_5B2B_4db5_B9EA_C7B7B8F40304__INCLUDED_)

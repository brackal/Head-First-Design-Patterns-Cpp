///////////////////////////////////////////////////////////
//  BeverageDecorator.h
//  Implementation of the Class BeverageDecorator
//  Created on:      10-Nov-2023 15:42:45
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_63AC4280_9614_4825_955A_E56A67BF38FD__INCLUDED_)
#define EA_63AC4280_9614_4825_955A_E56A67BF38FD__INCLUDED_

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

};
#endif // !defined(EA_63AC4280_9614_4825_955A_E56A67BF38FD__INCLUDED_)

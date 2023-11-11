///////////////////////////////////////////////////////////
//  BeverageDecorator.h
//  Implementation of the Class BeverageDecorator
//  Created on:      11-Nov-2023 15:38:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_C9665468_FAFB_438d_B0AD_DA3ED88922B1__INCLUDED_)
#define EA_C9665468_FAFB_438d_B0AD_DA3ED88922B1__INCLUDED_

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
#endif // !defined(EA_C9665468_FAFB_438d_B0AD_DA3ED88922B1__INCLUDED_)

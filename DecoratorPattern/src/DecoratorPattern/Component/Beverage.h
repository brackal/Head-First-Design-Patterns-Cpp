///////////////////////////////////////////////////////////
//  Beverage.h
//  Implementation of the Class Beverage
//  Created on:      10-Nov-2023 15:42:44
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_035B355D_57CA_4994_99F5_7522B7106AA3__INCLUDED_)
#define EA_035B355D_57CA_4994_99F5_7522B7106AA3__INCLUDED_

#include <string>

class Beverage
{

public:
	Beverage();
	virtual ~Beverage();
	virtual std::string getDescription();
	virtual float getCost() =0;

protected:
	std::string mDescription;
	float mCost;

};
#endif // !defined(EA_035B355D_57CA_4994_99F5_7522B7106AA3__INCLUDED_)

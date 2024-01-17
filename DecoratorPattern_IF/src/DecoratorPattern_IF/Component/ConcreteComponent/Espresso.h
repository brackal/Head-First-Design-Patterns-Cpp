///////////////////////////////////////////////////////////
//  Espresso.h
//  Implementation of the Class Espresso
//  Created on:      17-Jan-2024 09:33:19
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_C2DF0C63_5250_4dc9_A87A_4A4C1D5F8DEB__INCLUDED_)
#define EA_C2DF0C63_5250_4dc9_A87A_4A4C1D5F8DEB__INCLUDED_

#include "Beverage.h"

class Espresso : public Beverage
{

public:
	Espresso();
	virtual ~Espresso();
	virtual std::string getDescription();
	virtual float getCost();

private:
	std::string mDescription;
	float mCost;

};
#endif // !defined(EA_C2DF0C63_5250_4dc9_A87A_4A4C1D5F8DEB__INCLUDED_)

///////////////////////////////////////////////////////////
//  Espresso.h
//  Implementation of the Class Espresso
//  Created on:      11-Nov-2023 15:38:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_6A823D1C_C59B_47a3_B29D_3D6D9584CE14__INCLUDED_)
#define EA_6A823D1C_C59B_47a3_B29D_3D6D9584CE14__INCLUDED_

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
#endif // !defined(EA_6A823D1C_C59B_47a3_B29D_3D6D9584CE14__INCLUDED_)

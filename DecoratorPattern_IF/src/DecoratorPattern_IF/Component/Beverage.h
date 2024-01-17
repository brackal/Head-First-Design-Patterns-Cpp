///////////////////////////////////////////////////////////
//  Beverage.h
//  Implementation of the Interface Beverage
//  Created on:      17-Jan-2024 09:33:19
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_2B2D213D_FBF2_43e5_9F80_294973E5CDE6__INCLUDED_)
#define EA_2B2D213D_FBF2_43e5_9F80_294973E5CDE6__INCLUDED_

#include <string>

class Beverage
{

public:
	Beverage(){

	}
	virtual ~Beverage(){

	}
	virtual std::string getDescription() =0;
	virtual float getCost() =0;

};
#endif // !defined(EA_2B2D213D_FBF2_43e5_9F80_294973E5CDE6__INCLUDED_)

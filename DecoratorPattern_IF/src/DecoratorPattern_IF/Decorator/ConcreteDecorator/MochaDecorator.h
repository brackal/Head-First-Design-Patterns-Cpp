///////////////////////////////////////////////////////////
//  MochaDecorator.h
//  Implementation of the Class MochaDecorator
//  Created on:      17-Jan-2024 09:33:20
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_045577ED_688A_4602_B69A_D2757069FF14__INCLUDED_)
#define EA_045577ED_688A_4602_B69A_D2757069FF14__INCLUDED_

#include "BeverageDecorator.h"

class MochaDecorator : public BeverageDecorator
{

public:

	MochaDecorator(Beverage* beverage);
	virtual ~MochaDecorator();
	virtual std::string getDescription();
	virtual float getCost();

};
#endif // !defined(EA_045577ED_688A_4602_B69A_D2757069FF14__INCLUDED_)

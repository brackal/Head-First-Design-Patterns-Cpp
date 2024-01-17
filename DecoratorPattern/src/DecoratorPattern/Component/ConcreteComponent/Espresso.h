///////////////////////////////////////////////////////////
//  Espresso.h
//  Implementation of the Class Espresso
//  Created on:      10-Nov-2023 15:42:45
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_D61374C2_8BFA_421b_AC3D_63E05EB1F87C__INCLUDED_)
#define EA_D61374C2_8BFA_421b_AC3D_63E05EB1F87C__INCLUDED_

#include "Beverage.h"

class Espresso : public Beverage
{

public:
	Espresso();
	virtual ~Espresso();
	virtual float getCost();

};
#endif // !defined(EA_D61374C2_8BFA_421b_AC3D_63E05EB1F87C__INCLUDED_)

///////////////////////////////////////////////////////////
//  DarkRost.h
//  Implementation of the Class DarkRost
//  Created on:      10-Nov-2023 15:42:45
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_D33D8141_0DBC_48b6_ACD4_01EC14EE5894__INCLUDED_)
#define EA_D33D8141_0DBC_48b6_ACD4_01EC14EE5894__INCLUDED_

#include "Beverage.h"

class DarkRost : public Beverage
{

public:
	DarkRost();
	virtual ~DarkRost();
	virtual float getCost();

};
#endif // !defined(EA_D33D8141_0DBC_48b6_ACD4_01EC14EE5894__INCLUDED_)

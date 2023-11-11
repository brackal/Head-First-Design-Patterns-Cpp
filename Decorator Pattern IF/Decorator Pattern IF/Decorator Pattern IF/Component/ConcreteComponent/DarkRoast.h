///////////////////////////////////////////////////////////
//  DarkRoast.h
//  Implementation of the Class DarkRoast
//  Created on:      11-Nov-2023 15:38:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_8EF80880_B30B_4014_8C84_8F66B028BDA6__INCLUDED_)
#define EA_8EF80880_B30B_4014_8C84_8F66B028BDA6__INCLUDED_

#include "Beverage.h"

class DarkRoast : public Beverage
{

public:
	DarkRoast();
	virtual ~DarkRoast();
	virtual std::string getDescription();
	virtual float getCost();

private:
	std::string mDescription;
	float mCost;

};
#endif // !defined(EA_8EF80880_B30B_4014_8C84_8F66B028BDA6__INCLUDED_)

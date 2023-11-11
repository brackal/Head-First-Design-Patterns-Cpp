///////////////////////////////////////////////////////////
//  Beverage.h
//  Implementation of the Interface Beverage
//  Created on:      11-Nov-2023 15:38:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_DB49CF5B_9E05_4120_9086_388516A7C18A__INCLUDED_)
#define EA_DB49CF5B_9E05_4120_9086_388516A7C18A__INCLUDED_

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
#endif // !defined(EA_DB49CF5B_9E05_4120_9086_388516A7C18A__INCLUDED_)

///////////////////////////////////////////////////////////
//  MilkDecorator.h
//  Implementation of the Class MilkDecorator
//  Created on:      17-Jan-2024 09:33:20
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_A62DC765_A8E8_4126_99E2_7D018B735D0E__INCLUDED_)
#define EA_A62DC765_A8E8_4126_99E2_7D018B735D0E__INCLUDED_

#include "BeverageDecorator.h"

class MilkDecorator : public BeverageDecorator
{

public:

	MilkDecorator(Beverage* beverage);
	virtual ~MilkDecorator();
	virtual std::string getDescription();
	virtual float getCost();

};
#endif // !defined(EA_A62DC765_A8E8_4126_99E2_7D018B735D0E__INCLUDED_)

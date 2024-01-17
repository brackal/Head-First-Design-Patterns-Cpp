///////////////////////////////////////////////////////////
//  DarkRost.h
//  Implementation of the Class DarkRost
//  Created on:      17-Jan-2024 09:33:19
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_7D683A16_5FB4_48f5_9970_63124CDBF6BB__INCLUDED_)
#define EA_7D683A16_5FB4_48f5_9970_63124CDBF6BB__INCLUDED_

#include "Beverage.h"

class DarkRost : public Beverage
{

public:
    DarkRost();
    virtual ~DarkRost();
    virtual std::string getDescription();
    virtual float getCost();
    
};
#endif // !defined(EA_7D683A16_5FB4_48f5_9970_63124CDBF6BB__INCLUDED_)

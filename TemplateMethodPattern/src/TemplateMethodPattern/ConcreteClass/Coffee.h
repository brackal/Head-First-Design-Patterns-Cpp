///////////////////////////////////////////////////////////
//  Coffee.h
//  Implementation of the Class Coffee
//  Created on:      18-Nov-2023 21:43:00
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_28A396E3_1F75_488d_9B4C_D213049995ED__INCLUDED_)
#define EA_28A396E3_1F75_488d_9B4C_D213049995ED__INCLUDED_

#include <iostream>

#include "CaffeineBeverage.h"

class Coffee : public CaffeineBeverage
{

public:
    Coffee();
    virtual ~Coffee();
    virtual void brew();
    virtual void addCondiments();
    virtual bool customerWantsCondimentsHook() override;

private:
    std::string getUserInput();
};
#endif // !defined(EA_28A396E3_1F75_488d_9B4C_D213049995ED__INCLUDED_)

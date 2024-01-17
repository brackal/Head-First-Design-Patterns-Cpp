///////////////////////////////////////////////////////////
//  Tea.h
//  Implementation of the Class Tea
//  Created on:      18-Nov-2023 21:43:00
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_38DFA4B7_8854_44b0_AD35_151B47E17FB4__INCLUDED_)
#define EA_38DFA4B7_8854_44b0_AD35_151B47E17FB4__INCLUDED_

#include <iostream>

#include "CaffeineBeverage.h"

class Tea : public CaffeineBeverage
{

public:
    Tea();
    virtual ~Tea();
    virtual void brew() override;
    virtual void addCondiments() override;
    virtual bool customerWantsCondimentsHook() override;

private:
    std::string getUserInput();

};
#endif // !defined(EA_38DFA4B7_8854_44b0_AD35_151B47E17FB4__INCLUDED_)

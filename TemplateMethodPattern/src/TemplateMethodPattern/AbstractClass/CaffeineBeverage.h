///////////////////////////////////////////////////////////
//  CaffeineBeverage.h
//  Implementation of the Class CaffeineBeverage
//  Created on:      18-Nov-2023 21:43:00
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_8CC6F2DC_21F1_4ebf_9586_AAF03960CBEF__INCLUDED_)
#define EA_8CC6F2DC_21F1_4ebf_9586_AAF03960CBEF__INCLUDED_

#include <iostream>

class CaffeineBeverage
{

public:
    CaffeineBeverage();
    virtual ~CaffeineBeverage();
    virtual void prepareRecipeTemplateMethod() final;
    void boilWater();
    void pourInCup();
    virtual void brew() =0;
    virtual void addCondiments() =0;
    virtual bool customerWantsCondimentsHook();

};
#endif // !defined(EA_8CC6F2DC_21F1_4ebf_9586_AAF03960CBEF__INCLUDED_)

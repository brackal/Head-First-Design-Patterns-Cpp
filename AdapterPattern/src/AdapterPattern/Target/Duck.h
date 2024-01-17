///////////////////////////////////////////////////////////
//  Duck.h
//  Implementation of the Interface Duck
//  Created on:      14-Nov-2023 14:17:25
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_800B55FA_208E_4c8a_90D9_1E1094A645C5__INCLUDED_)
#define EA_800B55FA_208E_4c8a_90D9_1E1094A645C5__INCLUDED_

#include <iostream>

class Duck
{

public:
    Duck(){

    }
    virtual ~Duck(){

    }
    virtual void quack() =0;
    virtual void fly() =0;

};
#endif // !defined(EA_800B55FA_208E_4c8a_90D9_1E1094A645C5__INCLUDED_)

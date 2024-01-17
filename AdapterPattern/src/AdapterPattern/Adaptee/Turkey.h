///////////////////////////////////////////////////////////
//  Turkey.h
//  Implementation of the Interface Turkey
//  Created on:      14-Nov-2023 14:17:25
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_28D9AD0A_3C76_4791_9387_3BA74887C55F__INCLUDED_)
#define EA_28D9AD0A_3C76_4791_9387_3BA74887C55F__INCLUDED_

#include <iostream>

class Turkey
{

public:
    Turkey(){

    }
    virtual ~Turkey(){

    }
    virtual void gobble() =0;
    virtual void fly() =0;

};
#endif // !defined(EA_28D9AD0A_3C76_4791_9387_3BA74887C55F__INCLUDED_)

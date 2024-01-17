///////////////////////////////////////////////////////////
//  WildTurkey.h
//  Implementation of the Class WildTurkey
//  Created on:      14-Nov-2023 14:17:25
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_C507CC5F_EE53_4f1f_829F_8D5BB961DF78__INCLUDED_)
#define EA_C507CC5F_EE53_4f1f_829F_8D5BB961DF78__INCLUDED_

#include "Turkey.h"

class WildTurkey : public Turkey
{

public:
    WildTurkey();
    virtual ~WildTurkey();
    virtual void gobble() override;
    virtual void fly() override;

};
#endif // !defined(EA_C507CC5F_EE53_4f1f_829F_8D5BB961DF78__INCLUDED_)

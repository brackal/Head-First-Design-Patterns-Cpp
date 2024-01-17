///////////////////////////////////////////////////////////
//  MallardDuck.h
//  Implementation of the Class MallardDuck
//  Created on:      14-Nov-2023 14:17:25
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_67C05918_83A1_48c9_8C6B_E9C6A6267FFA__INCLUDED_)
#define EA_67C05918_83A1_48c9_8C6B_E9C6A6267FFA__INCLUDED_

#include "Duck.h"

class MallardDuck : public Duck
{

public:
    MallardDuck();
    virtual ~MallardDuck();
    virtual void quack() override;
    virtual void fly() override;

};
#endif // !defined(EA_67C05918_83A1_48c9_8C6B_E9C6A6267FFA__INCLUDED_)

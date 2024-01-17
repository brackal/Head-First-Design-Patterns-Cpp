///////////////////////////////////////////////////////////
//  TurkeyAdapter.h
//  Implementation of the Class TurkeyAdapter
//  Created on:      14-Nov-2023 14:17:25
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_D5D5766E_AD95_4c37_A53C_4A5A2EE0FFA5__INCLUDED_)
#define EA_D5D5766E_AD95_4c37_A53C_4A5A2EE0FFA5__INCLUDED_

#include "Duck.h"
#include "Turkey.h"

class TurkeyAdapter : public Duck
{

public:
    TurkeyAdapter(Turkey* turkey);
    virtual ~TurkeyAdapter();
    virtual void quack() override;
    virtual void fly() override;

private:
    Turkey* mTurkey;

};
#endif // !defined(EA_D5D5766E_AD95_4c37_A53C_4A5A2EE0FFA5__INCLUDED_)

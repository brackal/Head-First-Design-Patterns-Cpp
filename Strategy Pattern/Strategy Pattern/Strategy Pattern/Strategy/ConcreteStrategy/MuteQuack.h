///////////////////////////////////////////////////////////
//  MuteQuack.h
//  Implementation of the Class MuteQuack
//  Created on:      04-Nov-2023 20:36:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_606B2DAB_486E_4a5f_B8FC_49023015C3EC__INCLUDED_)
#define EA_606B2DAB_486E_4a5f_B8FC_49023015C3EC__INCLUDED_

#include "IQuackBehavior.h"

class MuteQuack : public IQuackBehavior
{

public:
	MuteQuack();
	virtual ~MuteQuack();
	virtual void quack();

};
#endif // !defined(EA_606B2DAB_486E_4a5f_B8FC_49023015C3EC__INCLUDED_)

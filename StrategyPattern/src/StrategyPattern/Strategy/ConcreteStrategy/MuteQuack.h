///////////////////////////////////////////////////////////
//  MuteQuack.h
//  Implementation of the Class MuteQuack
//  Created on:      08-Jan-2024 11:33:49
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_3E759338_E649_49b1_9F3A_AA01E21F912D__INCLUDED_)
#define EA_3E759338_E649_49b1_9F3A_AA01E21F912D__INCLUDED_

#include "IQuackBehavior.h"

class MuteQuack : public IQuackBehavior
{

public:
	MuteQuack();
	virtual ~MuteQuack();
	virtual void quack();

};
#endif // !defined(EA_3E759338_E649_49b1_9F3A_AA01E21F912D__INCLUDED_)

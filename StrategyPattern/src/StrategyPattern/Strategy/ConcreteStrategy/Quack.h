///////////////////////////////////////////////////////////
//  Quack.h
//  Implementation of the Class Quack
//  Created on:      08-Jan-2024 11:33:51
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_C7EBB5A0_B788_4b83_A319_BBC7194751D5__INCLUDED_)
#define EA_C7EBB5A0_B788_4b83_A319_BBC7194751D5__INCLUDED_

#include "IQuackBehavior.h"

class Quack : public IQuackBehavior
{

public:
	Quack();
	virtual ~Quack();
	virtual void quack();

};
#endif // !defined(EA_C7EBB5A0_B788_4b83_A319_BBC7194751D5__INCLUDED_)

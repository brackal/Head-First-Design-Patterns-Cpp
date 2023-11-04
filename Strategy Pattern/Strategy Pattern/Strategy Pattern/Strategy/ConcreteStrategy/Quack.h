///////////////////////////////////////////////////////////
//  Quack.h
//  Implementation of the Class Quack
//  Created on:      04-Nov-2023 20:36:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_A9F8ABEE_6422_443f_9AE8_D72A8678D546__INCLUDED_)
#define EA_A9F8ABEE_6422_443f_9AE8_D72A8678D546__INCLUDED_

#include "IQuackBehavior.h"

class Quack : public IQuackBehavior
{

public:
	Quack();
	virtual ~Quack();
	virtual void quack();

};
#endif // !defined(EA_A9F8ABEE_6422_443f_9AE8_D72A8678D546__INCLUDED_)

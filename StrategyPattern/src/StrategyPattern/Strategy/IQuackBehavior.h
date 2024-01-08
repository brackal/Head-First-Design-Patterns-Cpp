///////////////////////////////////////////////////////////
//  IQuackBehavior.h
//  Implementation of the Interface IQuackBehavior
//  Created on:      08-Jan-2024 11:33:47
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_581A0A34_AD14_422a_BD35_AD333F405944__INCLUDED_)
#define EA_581A0A34_AD14_422a_BD35_AD333F405944__INCLUDED_

class IQuackBehavior
{

public:
	IQuackBehavior(){

	}
	virtual ~IQuackBehavior(){

	}
	virtual void quack() =0;

};
#endif // !defined(EA_581A0A34_AD14_422a_BD35_AD333F405944__INCLUDED_)

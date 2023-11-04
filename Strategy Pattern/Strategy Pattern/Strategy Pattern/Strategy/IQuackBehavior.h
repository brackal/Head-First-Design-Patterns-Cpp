///////////////////////////////////////////////////////////
//  IQuackBehavior.h
//  Implementation of the Interface IQuackBehavior
//  Created on:      04-Nov-2023 20:36:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_B56CBFD2_F68B_4c58_B2D1_5A595E5247C1__INCLUDED_)
#define EA_B56CBFD2_F68B_4c58_B2D1_5A595E5247C1__INCLUDED_

class IQuackBehavior
{

public:
	IQuackBehavior(){

	}
	virtual ~IQuackBehavior(){

	}
	virtual void quack() =0;

};
#endif // !defined(EA_B56CBFD2_F68B_4c58_B2D1_5A595E5247C1__INCLUDED_)

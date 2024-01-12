///////////////////////////////////////////////////////////
//  Observer.h
//  Implementation of the Interface Observer
//  Created on:      12-Jan-2024 15:42:18
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_4364F2B3_CB97_4f41_82BB_2759E57A887C__INCLUDED_)
#define EA_4364F2B3_CB97_4f41_82BB_2759E57A887C__INCLUDED_

class Observer
{

public:
	Observer(){

	}
	virtual ~Observer(){

	}
	virtual void update() =0;

};
#endif // !defined(EA_4364F2B3_CB97_4f41_82BB_2759E57A887C__INCLUDED_)

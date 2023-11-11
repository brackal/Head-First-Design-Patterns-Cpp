///////////////////////////////////////////////////////////
//  Observer.h
//  Implementation of the Interface Observer
//  Created on:      10-Nov-2023 08:48:44
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_6A3BFCEC_4E96_4438_B664_9A27AEB75BC1__INCLUDED_)
#define EA_6A3BFCEC_4E96_4438_B664_9A27AEB75BC1__INCLUDED_

class Observer
{

public:
	Observer(){

	}
	virtual ~Observer(){

	}
	virtual void update() =0;

};
#endif // !defined(EA_6A3BFCEC_4E96_4438_B664_9A27AEB75BC1__INCLUDED_)

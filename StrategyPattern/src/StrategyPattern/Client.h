///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      08-Jan-2024 11:33:39
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_04AA632C_2183_4bde_B91B_B1CB74447FEA__INCLUDED_)
#define EA_04AA632C_2183_4bde_B91B_B1CB74447FEA__INCLUDED_

#include "MallardDuck.h"
#include "RubberDuck.h"
#include "FlyWithWings.h"
#include "FlyNoWay.h"
#include "Quack.h"
#include "MuteQuack.h"

class Client
{

public:
	Client();
	virtual ~Client();

	void run();

private:

	FlyWithWings	mFlyWithWings;
	FlyNoWay			mFlyNoWay;

	Quack					mQuack;
	MuteQuack			mMuteQuack;

	MallardDuck		mMallardDuck;
	RubberDuck		mRubberDuck;

};
#endif // !defined(EA_04AA632C_2183_4bde_B91B_B1CB74447FEA__INCLUDED_)

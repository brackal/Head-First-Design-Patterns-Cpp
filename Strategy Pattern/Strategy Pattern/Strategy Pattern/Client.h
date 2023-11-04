///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      04-Nov-2023 20:36:22
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_C63AD05D_1433_46ff_B950_6209DAE14649__INCLUDED_)
#define EA_C63AD05D_1433_46ff_B950_6209DAE14649__INCLUDED_

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
#endif // !defined(EA_C63AD05D_1433_46ff_B950_6209DAE14649__INCLUDED_)

///////////////////////////////////////////////////////////
//  Duck.h
//  Implementation of the Class Duck
//  Created on:      04-Nov-2023 20:36:23
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_CCF1E334_AB4E_4f15_82B7_5E1346F6BB38__INCLUDED_)
#define EA_CCF1E334_AB4E_4f15_82B7_5E1346F6BB38__INCLUDED_

#include "IFlyBehavior.h"
#include "IQuackBehavior.h"

class Duck
{

public:
	Duck();
	virtual ~Duck();
	void swim();
	virtual void display() =0;
	void setFlyBehavior(IFlyBehavior * flyBehavior);
	void setQuackBehavior(IQuackBehavior * quackBehavior);
	void performFly();
	void performQuack();

private:
	IFlyBehavior* mFlyBehavior;
	IQuackBehavior* mQuackBehavior;

};
#endif // !defined(EA_CCF1E334_AB4E_4f15_82B7_5E1346F6BB38__INCLUDED_)

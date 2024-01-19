///////////////////////////////////////////////////////////
//  IntValue.h
//  Implementation of the Class IntValue
//  Created on:      19-Jan-2024 08:17:02
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_1923592B_5877_4369_B845_995BD820C61A__INCLUDED_)
#define EA_1923592B_5877_4369_B845_995BD820C61A__INCLUDED_

#include "Comparable.h"

class IntValue : public Comparable
{

public:
	IntValue();
	IntValue(int value);
	virtual ~IntValue();
	virtual int compareTo(Comparable* comp);
	int getValue();

private:
	int mData;

};
#endif // !defined(EA_1923592B_5877_4369_B845_995BD820C61A__INCLUDED_)

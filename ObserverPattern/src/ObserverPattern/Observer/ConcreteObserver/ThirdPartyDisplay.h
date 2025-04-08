///////////////////////////////////////////////////////////
//  ThirdPartyDisplay.h
//  Implementation of the Class ThirdPartyDisplay
//  Created on:      12-Jan-2024 15:42:18
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_BA5AA97C_4C3C_4b8d_9BD8_679C2D9EA2F6__INCLUDED_)
#define EA_BA5AA97C_4C3C_4b8d_9BD8_679C2D9EA2F6__INCLUDED_

#include <iostream>

#include "Observer.h"
#include "Subject.h"

class ThirdPartyDisplay : public Observer
{

public:
	ThirdPartyDisplay(Subject* weatherData);
	virtual ~ThirdPartyDisplay();
	virtual void update(float temperature, float humidity);

private:
	Subject* mWeatherData;
};
#endif // !defined(EA_BA5AA97C_4C3C_4b8d_9BD8_679C2D9EA2F6__INCLUDED_)

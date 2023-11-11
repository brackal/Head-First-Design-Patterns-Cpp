///////////////////////////////////////////////////////////
//  ThirdPartyDisplay.h
//  Implementation of the Class ThirdPartyDisplay
//  Created on:      10-Nov-2023 08:48:44
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_6DD20833_1D92_4f8c_8D7D_02E3ACE9FB8A__INCLUDED_)
#define EA_6DD20833_1D92_4f8c_8D7D_02E3ACE9FB8A__INCLUDED_

#include <iostream>

#include "Observer.h"
#include "WeatherData.h"

class ThirdPartyDisplay : public Observer
{

public:
	ThirdPartyDisplay(WeatherData* weatherData);
	virtual ~ThirdPartyDisplay();
	virtual void update();

private:
	WeatherData* mWeatherData;

};
#endif // !defined(EA_6DD20833_1D92_4f8c_8D7D_02E3ACE9FB8A__INCLUDED_)

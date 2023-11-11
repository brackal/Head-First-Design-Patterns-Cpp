///////////////////////////////////////////////////////////
//  CurrentConditionsDisplay.h
//  Implementation of the Class CurrentConditionsDisplay
//  Created on:      10-Nov-2023 08:48:44
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_924B7684_D124_4df1_81AD_93EF34E899D9__INCLUDED_)
#define EA_924B7684_D124_4df1_81AD_93EF34E899D9__INCLUDED_

#include <iostream>

#include "Observer.h"
#include "WeatherData.h"

class CurrentConditionsDisplay : public Observer
{

public:
	CurrentConditionsDisplay(WeatherData* weatherData);
	virtual ~CurrentConditionsDisplay();
	virtual void update();

private:
	WeatherData* mWeatherData;

};
#endif // !defined(EA_924B7684_D124_4df1_81AD_93EF34E899D9__INCLUDED_)

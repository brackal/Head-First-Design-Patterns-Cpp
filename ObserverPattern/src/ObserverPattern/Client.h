///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      12-Jan-2024 15:42:18
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_01A98AC8_84E4_4160_ADC9_3293EBDEF1CD__INCLUDED_)
#define EA_01A98AC8_84E4_4160_ADC9_3293EBDEF1CD__INCLUDED_

#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "ThirdPartyDisplay.h"

class Client
{

public:
	Client();
	virtual ~Client();
	void run();

private:
	WeatherData mWeatherData;
	CurrentConditionsDisplay mCurrentConditionsDisplay;
	ThirdPartyDisplay mThirdPartyDisplay;
};
#endif // !defined(EA_01A98AC8_84E4_4160_ADC9_3293EBDEF1CD__INCLUDED_)

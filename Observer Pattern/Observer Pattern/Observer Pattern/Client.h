///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      10-Nov-2023 08:48:44
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_9A479CD2_C59F_45b4_AF0E_B83DDA3902B4__INCLUDED_)
#define EA_9A479CD2_C59F_45b4_AF0E_B83DDA3902B4__INCLUDED_

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
#endif // !defined(EA_9A479CD2_C59F_45b4_AF0E_B83DDA3902B4__INCLUDED_)

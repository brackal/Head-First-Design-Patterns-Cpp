///////////////////////////////////////////////////////////
//  CurrentConditionsDisplay.h
//  Implementation of the Class CurrentConditionsDisplay
//  Created on:      12-Jan-2024 15:42:18
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_F3B6EFB5_4164_4ab2_980A_6F1964635D81__INCLUDED_)
#define EA_F3B6EFB5_4164_4ab2_980A_6F1964635D81__INCLUDED_

#include <iostream>

#include "Observer.h"
#include "Subject.h"

class CurrentConditionsDisplay : public Observer
{

public:
	CurrentConditionsDisplay(Subject* weatherData);
	virtual ~CurrentConditionsDisplay();
	virtual void update(float temperature, float humidity);

private:
	Subject* mWeatherData;

};
#endif // !defined(EA_F3B6EFB5_4164_4ab2_980A_6F1964635D81__INCLUDED_)

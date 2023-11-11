///////////////////////////////////////////////////////////
//  WeatherData.h
//  Implementation of the Class WeatherData
//  Created on:      10-Nov-2023 08:48:44
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_B100F20E_EBDF_4a48_BEAE_1C93E7E13726__INCLUDED_)
#define EA_B100F20E_EBDF_4a48_BEAE_1C93E7E13726__INCLUDED_

#include <list>

#include "Subject.h"

class WeatherData : public Subject
{

public:
	WeatherData();
	virtual ~WeatherData();
	virtual void registerObserver(Observer* observer);
	virtual void notifyObserverList();
	virtual void unregisterObserver(Observer* observer);
	void setMeasurements(float temperature, float humidity);
	float getTemperature();
	float getHumidity();

private:
	float mTemperature;
	float mHumidity;
	float mPressure;
	std::list <Observer* > mObserverList;

	void measurementsChanged();

};
#endif // !defined(EA_B100F20E_EBDF_4a48_BEAE_1C93E7E13726__INCLUDED_)

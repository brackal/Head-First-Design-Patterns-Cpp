///////////////////////////////////////////////////////////
//  WeatherData.h
//  Implementation of the Class WeatherData
//  Created on:      12-Jan-2024 15:42:18
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_B26A7FEA_6802_4659_984F_341771B36AE4__INCLUDED_)
#define EA_B26A7FEA_6802_4659_984F_341771B36AE4__INCLUDED_

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
#endif // !defined(EA_B26A7FEA_6802_4659_984F_341771B36AE4__INCLUDED_)

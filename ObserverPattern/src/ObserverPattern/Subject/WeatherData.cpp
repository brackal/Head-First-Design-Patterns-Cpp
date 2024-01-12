///////////////////////////////////////////////////////////
//  WeatherData.cpp
//  Implementation of the Class WeatherData
//  Created on:      12-Jan-2024 15:42:18
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "WeatherData.h"




WeatherData::WeatherData(){

}


WeatherData::~WeatherData(){

}


void WeatherData::registerObserver(Observer* observer){
  mObserverList.push_back(observer);
}


void WeatherData::notifyObserverList(){
  for (Observer* observer : mObserverList)
  {
    if (observer != nullptr)
    {
      observer->update();
    }
  }
}


void WeatherData::unregisterObserver(Observer* observer){
  mObserverList.remove(observer);
}


void WeatherData::setMeasurements(float temperature, float humidity){
  mTemperature = temperature;
  mHumidity = humidity;
  measurementsChanged();
}


void WeatherData::measurementsChanged(){
  notifyObserverList();
}


float WeatherData::getTemperature(){

	return mTemperature;
}


float WeatherData::getHumidity(){

	return mHumidity;
}
///////////////////////////////////////////////////////////
//  CurrentConditionsDisplay.cpp
//  Implementation of the Class CurrentConditionsDisplay
//  Created on:      10-Nov-2023 08:48:44
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "CurrentConditionsDisplay.h"


CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherData * weatherData){
  mWeatherData = weatherData;
  mWeatherData->registerObserver(this);
}



CurrentConditionsDisplay::~CurrentConditionsDisplay(){

}


void CurrentConditionsDisplay::update(){

  float temperature = 0.0;
  float humidity = 0.0;

  if (mWeatherData != nullptr)
  {
    temperature = mWeatherData->getTemperature();
    humidity = mWeatherData->getHumidity();
  }
  std::cout << "CurrentConditionsDisplay::Temperatur: " << temperature << std::endl;
  std::cout << "CurrentConditionsDisplay::Humidity: " << humidity << std::endl;
}
///////////////////////////////////////////////////////////
//  ThirdPartyDisplay.cpp
//  Implementation of the Class ThirdPartyDisplay
//  Created on:      12-Jan-2024 15:42:18
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "ThirdPartyDisplay.h"



ThirdPartyDisplay::ThirdPartyDisplay(WeatherData * weatherData){
  mWeatherData = weatherData;
  mWeatherData->registerObserver(this);
}



ThirdPartyDisplay::~ThirdPartyDisplay(){

}


void ThirdPartyDisplay::update(){

  float temperature = 0.0;
  float humidity = 0.0;

  if (mWeatherData != nullptr)
  {
    temperature = mWeatherData->getTemperature();
    humidity = mWeatherData->getHumidity();
}

  std::cout << "ThirdPartyDisplay::Temperatur: " << temperature << std::endl;
  std::cout << "ThirdPartyDisplay::Humidity: " << humidity << std::endl;
}
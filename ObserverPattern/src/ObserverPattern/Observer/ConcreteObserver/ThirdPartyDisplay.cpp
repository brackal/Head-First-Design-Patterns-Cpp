///////////////////////////////////////////////////////////
//  ThirdPartyDisplay.cpp
//  Implementation of the Class ThirdPartyDisplay
//  Created on:      12-Jan-2024 15:42:18
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "ThirdPartyDisplay.h"



ThirdPartyDisplay::ThirdPartyDisplay(Subject * weatherData){
  mWeatherData = weatherData;
  mWeatherData->registerObserver(this);
}



ThirdPartyDisplay::~ThirdPartyDisplay(){

}


void ThirdPartyDisplay::update(float temperature, float humidity){
  // This is a third party display that does not need to know about the weather data object
  // It just needs to know about the data it is displaying
  std::cout << "ThirdPartyDisplay::Temperatur: " << temperature << std::endl;
  std::cout << "ThirdPartyDisplay::Humidity: " << humidity << std::endl;
}
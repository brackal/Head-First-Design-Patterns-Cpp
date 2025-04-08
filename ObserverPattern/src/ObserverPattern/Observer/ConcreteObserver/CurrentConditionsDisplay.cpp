///////////////////////////////////////////////////////////
//  CurrentConditionsDisplay.cpp
//  Implementation of the Class CurrentConditionsDisplay
//  Created on:      12-Jan-2024 15:42:18
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "CurrentConditionsDisplay.h"


CurrentConditionsDisplay::CurrentConditionsDisplay(Subject * weatherData){
  mWeatherData = weatherData;
  mWeatherData->registerObserver(this);
}



CurrentConditionsDisplay::~CurrentConditionsDisplay(){

}


void CurrentConditionsDisplay::update(float temperature, float humidity){
  // This is a current conditions display that needs to know about the weather data object
  // It just needs to know about the data it is displaying
  std::cout << "CurrentConditionsDisplay::Temperatur: " << temperature << std::endl;
  std::cout << "CurrentConditionsDisplay::Humidity: " << humidity << std::endl;
}
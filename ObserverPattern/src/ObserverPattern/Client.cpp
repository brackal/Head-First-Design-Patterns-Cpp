///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      12-Jan-2024 15:42:18
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Client.h"




Client::Client() : mCurrentConditionsDisplay(&mWeatherData), mThirdPartyDisplay(&mWeatherData){

  //client registers displays by weather data
  //mWeatherData.registerDisplay(&mCurrentConditionsDisplay);
  //mWeatherData.registerDisplay(&mThirdPartyDisplay);

	//or it can be done by Display objects themselfes. See constructors of displays
}


Client::~Client(){

}


void Client::run(){

	float temerature = 0;
	float humidity = 20;

	while (1)
	{
		std::cout << "Press 'm' or 'M' to simulate a new measurement\n";
		std::cout << "Press 'T' to unregister Third Party Display\n";
		std::cout << "Press 't' to register Third Party Display\n";
		std::cout << "Press 'C' to unregister Current Conditions Display\n";
		std::cout << "Press 'c' to register Current Conditions Display\n";
		while (1)
		{
			switch (getchar())
			{
			case 'm': case 'M':
				mWeatherData.setMeasurements(temerature++, humidity++);
				break;

			case 'T':
				mWeatherData.unregisterObserver(&mThirdPartyDisplay);
				break;
			case 't':
				mWeatherData.registerObserver(&mThirdPartyDisplay);
				break;

			case 'C':
				mWeatherData.unregisterObserver(&mCurrentConditionsDisplay);
				break;
			case 'c':
				mWeatherData.registerObserver(&mCurrentConditionsDisplay);
				break;

			default:
				// nothing to do
				break;
			}
		}
	}
}
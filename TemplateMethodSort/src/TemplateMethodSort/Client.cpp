///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      29-Nov-2023 22:02:37
//  Original author: abrack
///////////////////////////////////////////////////////////

#include <iostream>
#include "Client.h"




Client::Client(){

}


Client::~Client(){

}


void Client::run(){







		Duck d1("a", 4);
		Duck d2("b", 2);
		Duck d3("c", 44);
		Duck d4("d", 1);

		Duck duckArray[4] = { d1, d2, d3, d4 };

		std::cout << "Duck bevor sort:" << std::endl;
		this->displayDuckArray(duckArray, 4);

		Arrays<Duck>::sort(duckArray, 4);

		std::cout << "Duck after sort:" << std::endl;
		this->displayDuckArray(duckArray, 4);


		IntArray a(22);
		IntArray b(33);
		IntArray c(11);

		IntArray intArrays[3] = { a, b, c };

		std::cout << "intArrays bevor sort:" << std::endl;
		this->displayIntArray(intArrays, 3);

		Arrays<IntArray>::sort(intArrays, 3);

		std::cout << "intArrays after sort:" << std::endl;
		this->displayIntArray(intArrays, 3);

		while (true)
		{
		}
}

	void Client::displayDuckArray(Duck* duck, int length) {

		Duck* duckTmp = duck;

		for (int i = 0; i < length; i++, duckTmp++) {
			std::cout << "duck: " << duckTmp->geWeight() << std::endl;
		}
}


void Client::displayIntArray(IntArray* intArray, int length){

		IntArray* intArrayTmp = intArray;

		for (int i = 0; i < length; i++, intArrayTmp++) {
			std::cout << "intArray: " << intArrayTmp->getValue() << std::endl;
		}
	}

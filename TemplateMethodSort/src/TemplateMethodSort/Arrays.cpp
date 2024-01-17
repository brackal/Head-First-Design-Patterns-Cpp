///////////////////////////////////////////////////////////
//  Arrays.cpp
//  Implementation of the Class Arrays
//  Created on:      26-Nov-2023 12:07:37
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Arrays.h"

#if 0
template <class T> Arrays<T>::Arrays() {

}



template <class T> Arrays<T>::~Arrays() {

}





template <class T> void Arrays<T>::sort(T a, int size) {

	int* mData;

	if (size > 0)
	{
		mData = new int[size];
	}
	else
	{
		mData = nullptr;
	}



	for (int j = 0; j < size; j++)
	{
		*mData = a[j];
		std::cout << "sort: " << a[j] << std::endl;
		std::cout << "mData: " << *mData << std::endl;
		mData++;
	}
}
#endif
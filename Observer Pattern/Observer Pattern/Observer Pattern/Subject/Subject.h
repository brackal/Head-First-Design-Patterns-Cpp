///////////////////////////////////////////////////////////
//  Subject.h
//  Implementation of the Interface Subject
//  Created on:      10-Nov-2023 08:48:44
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_6D76605D_44FC_464c_A2B7_DA9F753AAEA2__INCLUDED_)
#define EA_6D76605D_44FC_464c_A2B7_DA9F753AAEA2__INCLUDED_

#include "Observer.h"

class Subject
{

public:
	Subject(){

	}
	virtual ~Subject(){

	}
	virtual void registerObserver(Observer* observer) =0;
	virtual void notifyObserverList() =0;
	virtual void unregisterObserver(Observer* observer) =0;

};
#endif // !defined(EA_6D76605D_44FC_464c_A2B7_DA9F753AAEA2__INCLUDED_)

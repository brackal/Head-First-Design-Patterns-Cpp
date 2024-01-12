///////////////////////////////////////////////////////////
//  Subject.h
//  Implementation of the Interface Subject
//  Created on:      12-Jan-2024 15:42:18
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_AE77F788_596C_4397_AC3E_96A57430B2BB__INCLUDED_)
#define EA_AE77F788_596C_4397_AC3E_96A57430B2BB__INCLUDED_

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
#endif // !defined(EA_AE77F788_596C_4397_AC3E_96A57430B2BB__INCLUDED_)

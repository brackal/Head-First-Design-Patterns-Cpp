///////////////////////////////////////////////////////////
//  Comparable.h
//  Implementation of the Interface Comparable
//  Created on:      29-Nov-2023 22:02:37
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_F202D22A_ECD4_4bbd_8F93_0520A1D310B6__INCLUDED_)
#define EA_F202D22A_ECD4_4bbd_8F93_0520A1D310B6__INCLUDED_

class Comparable
{

public:
	Comparable(){

	}
	virtual ~Comparable(){

	}
	virtual int compareTo(Comparable* comp) =0;

};
#endif // !defined(EA_F202D22A_ECD4_4bbd_8F93_0520A1D310B6__INCLUDED_)

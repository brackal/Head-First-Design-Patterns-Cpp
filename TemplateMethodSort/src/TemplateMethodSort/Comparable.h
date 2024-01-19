///////////////////////////////////////////////////////////
//  Comparable.h
//  Implementation of the Interface Comparable
//  Created on:      19-Jan-2024 08:17:01
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_BBF8E618_D11B_4f0f_9078_1E24F4418554__INCLUDED_)
#define EA_BBF8E618_D11B_4f0f_9078_1E24F4418554__INCLUDED_

class Comparable
{

public:
	Comparable(){

	}
	virtual ~Comparable(){

	}
	virtual int compareTo(Comparable* comp) =0;

};
#endif // !defined(EA_BBF8E618_D11B_4f0f_9078_1E24F4418554__INCLUDED_)

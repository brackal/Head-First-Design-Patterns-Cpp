///////////////////////////////////////////////////////////
//  Duck.h
//  Implementation of the Class Duck
//  Created on:      29-Nov-2023 22:02:37
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_40A25BDB_2726_49dc_8014_8E4136C423F1__INCLUDED_)
#define EA_40A25BDB_2726_49dc_8014_8E4136C423F1__INCLUDED_

#include <string>
#include "Comparable.h"

class Duck : public Comparable
{

public:
	Duck();
	Duck(std::string name, int weight);
	virtual ~Duck();
	virtual int compareTo(Comparable* comp);
	int geWeight();

private:
	std::string mName;
	int mWeight;

};
#endif // !defined(EA_40A25BDB_2726_49dc_8014_8E4136C423F1__INCLUDED_)

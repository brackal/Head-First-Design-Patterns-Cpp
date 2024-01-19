///////////////////////////////////////////////////////////
//  Duck.h
//  Implementation of the Class Duck
//  Created on:      19-Jan-2024 08:17:02
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_023BEBE5_D73C_479e_A26A_B4F843FB16AA__INCLUDED_)
#define EA_023BEBE5_D73C_479e_A26A_B4F843FB16AA__INCLUDED_

#include <string>
#include "Comparable.h"

class Duck : public Comparable
{

public:
	Duck();
	Duck(std::string name, int weight);
	virtual ~Duck();
	virtual int compareTo(Comparable* comp);
	int getWeight();

private:
	std::string mName;
	int mWeight;

};
#endif // !defined(EA_023BEBE5_D73C_479e_A26A_B4F843FB16AA__INCLUDED_)

///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      19-Jan-2024 08:17:01
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_6C4F8BA6_22FE_4a3a_90E9_3987BECD007A__INCLUDED_)
#define EA_6C4F8BA6_22FE_4a3a_90E9_3987BECD007A__INCLUDED_

#include "Arrays.h"
#include "IntValue.h"
#include "Duck.h"

class Client
{

public:
	Client();
	virtual ~Client();
	void run();

private:
	void displayDuckArray(Duck* duck, int length);
	void displayIntArray(IntValue* intValue, int length);

};
#endif // !defined(EA_6C4F8BA6_22FE_4a3a_90E9_3987BECD007A__INCLUDED_)

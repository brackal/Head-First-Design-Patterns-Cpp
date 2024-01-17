///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      29-Nov-2023 22:02:37
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_FAB0C4DB_8F76_41f3_A730_AD5908E096FE__INCLUDED_)
#define EA_FAB0C4DB_8F76_41f3_A730_AD5908E096FE__INCLUDED_

#include "Arrays.h"
#include "IntArray.h"
#include "Duck.h"

class Client
{

public:
    Client();
    virtual ~Client();
    void run();

private:
    void displayDuckArray(Duck* duck, int length);
    void displayIntArray(IntArray* intArray, int length);

};
#endif // !defined(EA_FAB0C4DB_8F76_41f3_A730_AD5908E096FE__INCLUDED_)

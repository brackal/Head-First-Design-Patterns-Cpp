///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      14-Nov-2023 14:17:25
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_BAFEA3C8_05CD_46c3_9117_A83B158DA9EE__INCLUDED_)
#define EA_BAFEA3C8_05CD_46c3_9117_A83B158DA9EE__INCLUDED_

#include <iostream>

#include "MallardDuck.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"
#include "TestClient.h"

class Client
{

public:
    Client();
    virtual ~Client();
    void run();

};
#endif // !defined(EA_BAFEA3C8_05CD_46c3_9117_A83B158DA9EE__INCLUDED_)

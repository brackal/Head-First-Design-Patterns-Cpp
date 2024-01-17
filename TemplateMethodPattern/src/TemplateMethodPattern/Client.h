///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      18-Nov-2023 21:43:00
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_8207DD3A_D919_49c9_9248_4619EB273C07__INCLUDED_)
#define EA_8207DD3A_D919_49c9_9248_4619EB273C07__INCLUDED_

#include "Coffee.h"
#include "Tea.h"
#include "TestClient.h"

class Client
{

public:
    Client();
    virtual ~Client();
    void run();

};
#endif // !defined(EA_8207DD3A_D919_49c9_9248_4619EB273C07__INCLUDED_)

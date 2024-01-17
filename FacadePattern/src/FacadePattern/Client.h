///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      16-Nov-2023 16:36:15
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_9B3614F6_8BAE_41f2_B7FE_FBD3DD00F809__INCLUDED_)
#define EA_9B3614F6_8BAE_41f2_B7FE_FBD3DD00F809__INCLUDED_

#include "TestClient.h"
#include "Amplifier.h"
#include "Player.h"
#include "PopcornPopper.h"
#include "HomeTheaterFacade.h"

class Client
{

public:
    Client();
    virtual ~Client();
    void run();

};
#endif // !defined(EA_9B3614F6_8BAE_41f2_B7FE_FBD3DD00F809__INCLUDED_)

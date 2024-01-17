///////////////////////////////////////////////////////////
//  TestClient.h
//  Implementation of the Class TestClient
//  Created on:      16-Nov-2023 16:36:15
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_3CFFAB6B_E4AC_4cf0_8DA0_89F7253A9A55__INCLUDED_)
#define EA_3CFFAB6B_E4AC_4cf0_8DA0_89F7253A9A55__INCLUDED_

#include "HomeTheaterFacade.h"

class TestClient
{

public:
    TestClient(HomeTheaterFacade* homeTheaterFacade);
    virtual ~TestClient();
    void testFacade();

private:
    HomeTheaterFacade* mHomeTheaterFacade;

};
#endif // !defined(EA_3CFFAB6B_E4AC_4cf0_8DA0_89F7253A9A55__INCLUDED_)

///////////////////////////////////////////////////////////
//  TestClient.h
//  Implementation of the Class TestClient
//  Created on:      14-Nov-2023 14:17:25
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_5BD5C79F_2ED1_4639_AC06_CA46CEE372E8__INCLUDED_)
#define EA_5BD5C79F_2ED1_4639_AC06_CA46CEE372E8__INCLUDED_

#include "Duck.h"

class TestClient
{

public:
    TestClient();
    virtual ~TestClient();

    void testAdapter(Duck * duck);

};
#endif // !defined(EA_5BD5C79F_2ED1_4639_AC06_CA46CEE372E8__INCLUDED_)

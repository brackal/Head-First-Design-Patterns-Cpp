///////////////////////////////////////////////////////////
//  TestClient.h
//  Implementation of the Class TestClient
//  Created on:      18-Nov-2023 21:43:00
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_32AA3C19_B612_4608_8E5A_4699D1D7ABE2__INCLUDED_)
#define EA_32AA3C19_B612_4608_8E5A_4699D1D7ABE2__INCLUDED_

#include "CaffeineBeverage.h"

class TestClient
{

public:
    TestClient(CaffeineBeverage* caffeineBeverage);
    virtual ~TestClient();
    void setCaffeineBeverage(CaffeineBeverage* caffeineBeverage);
    void testTemplateMethod();

private:
    CaffeineBeverage* mCaffeineBeverage;

};
#endif // !defined(EA_32AA3C19_B612_4608_8E5A_4699D1D7ABE2__INCLUDED_)

///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      13-Nov-2023 21:54:33
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_D0309440_6476_4a78_8D3D_C312267CB1A8__INCLUDED_)
#define EA_D0309440_6476_4a78_8D3D_C312267CB1A8__INCLUDED_

#include "RemoteControl.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"

class Client
{

public:
	Client();
	virtual ~Client();
	void run();

private:
	RemoteControl mRemoteControl;
	Light mLight;

};
#endif // !defined(EA_D0309440_6476_4a78_8D3D_C312267CB1A8__INCLUDED_)

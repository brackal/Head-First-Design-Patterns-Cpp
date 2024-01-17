///////////////////////////////////////////////////////////
//  RemoteControl.h
//  Implementation of the Class RemoteControl
//  Created on:      13-Nov-2023 21:54:33
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_5F628E91_D8FA_4ff5_81C2_AA7CEC975663__INCLUDED_)
#define EA_5F628E91_D8FA_4ff5_81C2_AA7CEC975663__INCLUDED_

#include "Command.h"

class RemoteControl
{

public:
	RemoteControl();
	virtual ~RemoteControl();
	void setCommand(Command* lightOnCommand, Command* lightOffCommand);
	void switchLightOn();
	void switchLightOff();

private:
	Command* mLightOnCommand;
	Command* mLightOffCommand;

};
#endif // !defined(EA_5F628E91_D8FA_4ff5_81C2_AA7CEC975663__INCLUDED_)

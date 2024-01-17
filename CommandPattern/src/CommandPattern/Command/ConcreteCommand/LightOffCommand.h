///////////////////////////////////////////////////////////
//  LightOffCommand.h
//  Implementation of the Class LightOffCommand
//  Created on:      13-Nov-2023 21:54:33
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_CBFCE224_95C8_4d61_9222_25FDCC7CE283__INCLUDED_)
#define EA_CBFCE224_95C8_4d61_9222_25FDCC7CE283__INCLUDED_

#include "Light.h"
#include "Command.h"

class LightOffCommand : public Command
{

public:

	LightOffCommand(Light* receiver);
	virtual ~LightOffCommand();
	virtual void execute() override;
	virtual void undo() override;

private:
	Light* mReceiver;

};
#endif // !defined(EA_CBFCE224_95C8_4d61_9222_25FDCC7CE283__INCLUDED_)

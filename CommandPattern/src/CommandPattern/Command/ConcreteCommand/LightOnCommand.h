///////////////////////////////////////////////////////////
//  LightOnCommand.h
//  Implementation of the Class LightOnCommand
//  Created on:      13-Nov-2023 21:54:33
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_B3AAA431_0E68_4839_B472_D79D71A5CF7D__INCLUDED_)
#define EA_B3AAA431_0E68_4839_B472_D79D71A5CF7D__INCLUDED_

#include "Light.h"
#include "Command.h"

class LightOnCommand : public Command
{

public:

	LightOnCommand(Light* receiver);
	virtual ~LightOnCommand();
	virtual void execute() override;
	virtual void undo() override;

private:
	Light* mReceiver;

};
#endif // !defined(EA_B3AAA431_0E68_4839_B472_D79D71A5CF7D__INCLUDED_)

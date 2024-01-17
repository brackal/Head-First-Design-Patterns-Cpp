///////////////////////////////////////////////////////////
//  Command.h
//  Implementation of the Interface Command
//  Created on:      13-Nov-2023 21:54:33
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_C982A5A4_D2E8_4aaf_B139_ABB081B36C65__INCLUDED_)
#define EA_C982A5A4_D2E8_4aaf_B139_ABB081B36C65__INCLUDED_

class Command
{

public:
	Command(){

	}
	virtual ~Command(){

	}
	virtual void execute() =0;
	virtual void undo() =0;

};
#endif // !defined(EA_C982A5A4_D2E8_4aaf_B139_ABB081B36C65__INCLUDED_)

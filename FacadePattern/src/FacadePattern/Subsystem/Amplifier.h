///////////////////////////////////////////////////////////
//  Amplifier.h
//  Implementation of the Class Amplifier
//  Created on:      16-Nov-2023 16:36:15
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_4C17A574_83D5_48fe_828C_856E701262ED__INCLUDED_)
#define EA_4C17A574_83D5_48fe_828C_856E701262ED__INCLUDED_

#include <iostream>

class Amplifier
{

public:
    Amplifier();
    virtual ~Amplifier();
    void on();
    void off();
    void setSurroundSound();
    void setVolume(int volume);

};
#endif // !defined(EA_4C17A574_83D5_48fe_828C_856E701262ED__INCLUDED_)

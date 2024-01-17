///////////////////////////////////////////////////////////
//  Player.h
//  Implementation of the Class Player
//  Created on:      16-Nov-2023 16:36:15
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_52628D41_C5F1_4f0c_8A18_2D8038614B5F__INCLUDED_)
#define EA_52628D41_C5F1_4f0c_8A18_2D8038614B5F__INCLUDED_

#include <string>
#include <iostream>

class Player
{

public:
    Player();
    virtual ~Player();
    void on();
    void off();
    void play(std::string movie);

};
#endif // !defined(EA_52628D41_C5F1_4f0c_8A18_2D8038614B5F__INCLUDED_)

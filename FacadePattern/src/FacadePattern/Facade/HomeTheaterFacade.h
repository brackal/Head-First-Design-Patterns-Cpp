///////////////////////////////////////////////////////////
//  HomeTheaterFacade.h
//  Implementation of the Class HomeTheaterFacade
//  Created on:      16-Nov-2023 16:36:15
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_9FDAAB4C_5B1E_4d78_BD19_B4D0D18614AF__INCLUDED_)
#define EA_9FDAAB4C_5B1E_4d78_BD19_B4D0D18614AF__INCLUDED_

#include <string>

#include "Amplifier.h"
#include "Player.h"
#include "PopcornPopper.h"

class HomeTheaterFacade
{

public:
    HomeTheaterFacade(Amplifier* amplifier, Player* player, PopcornPopper* popcornPopper);
    virtual ~HomeTheaterFacade();
    void watchMovie(std::string movie);
    void stopMovie();

private:
    Amplifier* mAmplifier;
    Player* mPlayer;
    PopcornPopper* mPopcornPopper;

};
#endif // !defined(EA_9FDAAB4C_5B1E_4d78_BD19_B4D0D18614AF__INCLUDED_)

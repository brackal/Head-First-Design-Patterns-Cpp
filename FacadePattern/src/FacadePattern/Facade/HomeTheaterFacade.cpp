///////////////////////////////////////////////////////////
//  HomeTheaterFacade.cpp
//  Implementation of the Class HomeTheaterFacade
//  Created on:      16-Nov-2023 16:36:15
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "HomeTheaterFacade.h"




HomeTheaterFacade::HomeTheaterFacade(Amplifier* amplifier, Player* player, PopcornPopper* popcornPopper){

    mAmplifier = amplifier;
    mPlayer = player;
    mPopcornPopper = popcornPopper;
}


HomeTheaterFacade::~HomeTheaterFacade(){

}


void HomeTheaterFacade::watchMovie(std::string movie){

    mPopcornPopper->on();
    mPopcornPopper->pop();

    mAmplifier->on();
    mAmplifier->setSurroundSound();
    mAmplifier->setVolume(4);

    mPlayer->on();
    mPlayer->play(movie);
}

void HomeTheaterFacade::stopMovie(){

    mPlayer->off();

    mAmplifier->setVolume(0);
    mAmplifier->off();

    mPopcornPopper->off();
}
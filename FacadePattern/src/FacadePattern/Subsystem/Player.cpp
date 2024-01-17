///////////////////////////////////////////////////////////
//  Player.cpp
//  Implementation of the Class Player
//  Created on:      16-Nov-2023 16:36:15
//  Original author: abrack
///////////////////////////////////////////////////////////

#include "Player.h"




Player::Player(){

}


Player::~Player(){

}


void Player::on(){

    std::cout << "Player ON!" << std::endl;
}


void Player::off(){

    std::cout << "Player OFF!" << std::endl;
}


void Player::play(std::string movie){

    std::cout << "Player plays: " << movie << std::endl;
}
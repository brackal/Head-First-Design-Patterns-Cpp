///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(CLIENT_H_)
#define CLIENT_H_

#include <iostream>

#include "BeatModel.h"
#include "BeatController.h"
//#include "DJView.h"

class Client {
public:
    Client();
    virtual ~Client();

private:
    BeatModel* model;
    BeatController* controller;
};
#endif  // !defined(CLIENT_H_)

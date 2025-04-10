///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(CLIENT_H_)
#define CLIENT_H_

#include <iostream>

#include "BeatModel.h"
// #include "DJView.h"
#include "BeatController.h"

class Client {
   public:
    Client();
    virtual ~Client();

    void Run();
};
#endif  // !defined(CLIENT_H_)

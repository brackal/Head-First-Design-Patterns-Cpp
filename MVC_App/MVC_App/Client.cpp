///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "Client.h"

Client::Client() {
    model = new BeatModel;
    controller = new BeatController(model);

    //Possible instantiation of View
    //DJView w(nullptr, &controller, &model);
    //w.show();
}

Client::~Client() {
}

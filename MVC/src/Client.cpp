///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "Client.h"

Client::Client() {
    BeatModel model;
    // DJView view(nullptr, &model);  // Pass the model to the view
    BeatController controller(&model);  // Pass the model to the controller
}

Client::~Client() {
}
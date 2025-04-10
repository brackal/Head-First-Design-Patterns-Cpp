///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "Client.h"

Client::Client() {
}

Client::~Client() {
}

void Client::Run() {
    BeatModel model;
    // DJView view(nullptr, &model);  // Pass the model to the view
    BeatController controller(&model);  // Pass the model to the controller

    std::cout << "Press 1 to select DJ-View'\n";
    std::cout << "Press 2 to select DJ-Control'\n";

    while (1) {
        int userInput;

        std::cout << "Please select view: ";
        std::cin >> userInput;

        switch (userInput) {
            case 1:
                std::cout << "Please give BPM: ";
                std::cin >> userInput;
                controller.SetBpm(userInput);  // Set the BPM to the specified value
                break;
            case 2:
                // std::cout << "userInput: " << userInput << "\n";
                std::cout << "In Work!\n";
                break;

            default:
                // std::cout << "userInput: " << userInput << "\n";
                std::cout << "Invalid user input!\n";
                break;
        }
    }
}

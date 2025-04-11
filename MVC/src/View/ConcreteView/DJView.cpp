///////////////////////////////////////////////////////////
//  DJView.cpp
//  Implementation of the Class DJView
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "DJView.h"

DJView::DJView() : controller(nullptr), model(nullptr) {
}

DJView::DJView(I_Controller* controller, I_BeatModel* model) : controller(controller), model(model) {
    // Register this view as an observer to the model
    if (model) {
        model->Register((ICB_BpmObserver*)this);   // Register as a BPM observer
        model->Register((ICB_BeatObserver*)this);  // Register as a Beat observer
    }
}

DJView::~DJView() {
}

void DJView::UpdateBeat() {
}

void DJView::UpdateBpm() {
    if (model) {
        int bpm = model->GetBpm();
        //  Update the view with the new BPM value
        //  For example, you could print it to the console or update a GUI element
        std::cout << "Current BPM: " << bpm << std::endl;
    } else {
        std::cout << "Model is not set!" << std::endl;
    }
}

void DJView::PressIncreaseBpm() {
    if (controller) {
        controller->IncreaseBpm();
    } else {
        std::cout << "Controller is not set!" << std::endl;
    }
}

void DJView::PressDecreaseBpm() {
    if (controller) {
        controller->DecreaseBpm();
    } else {
        std::cout << "Controller is not set!" << std::endl;
    }
}

void DJView::PressSetBpm() {
    if (controller) {
        int userInput;
        std::cout << "Please give BPM: ";
        std::cin >> userInput;
        controller->SetBpm(userInput);  // Set the BPM to the specified value
    } else {
        std::cout << "Controller is not set!" << std::endl;
    }
}

void DJView::Run() {
    std::cout << "Press 1 to set BPM'\n";
    std::cout << "Press 2 to increase BPM'\n";
    std::cout << "Press 3 to decrease BPM'\n";

    while (1) {
        int userInput;

        std::cout << "Please select action: ";
        std::cin >> userInput;

        switch (userInput) {
            case 1:
                this->PressSetBpm();
                break;

            case 2:
                // std::cout << "userInput: " << userInput << "\n";
                this->PressIncreaseBpm();
                break;

            case 3:
                // std::cout << "userInput: " << userInput << "\n";
                this->PressDecreaseBpm();
                break;

            default:
                // std::cout << "userInput: " << userInput << "\n";
                std::cout << "Invalid user input!\n";
                break;
        }
    }
}
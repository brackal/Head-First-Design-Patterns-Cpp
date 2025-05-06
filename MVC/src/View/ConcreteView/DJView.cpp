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

    this->Run();
}

DJView::~DJView() {
}

void DJView::UpdateBeat() {
    std::cout << "Beat in real time with: " << model->GetBpm() << "BPM! " << std::endl;
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

void DJView::PressStartBeat() {
    if (controller) {
        controller->Start();  // Start the beat
    } else {
        std::cout << "Controller is not set!" << std::endl;
    }
}

void DJView::PressStopBeat() {
    if (controller) {
        controller->Stop();  // Stop the beat
    } else {
        std::cout << "Controller is not set!" << std::endl;
    }
}

void DJView::Run() {
    std::cout << "Press 1 to set BPM'\n";
    std::cout << "Press 2 to increase BPM'\n";
    std::cout << "Press 3 to decrease BPM'\n";
    std::cout << "Press 4 to start Beat'\n";
    std::cout << "Press 5 to stop Beat'\n";

    while (1) {
        int userInput;

        std::cout << "Please select action: ";
        std::cin >> userInput;

        switch (userInput) {
            case 1:
                this->PressSetBpm();
                break;

            case 2:
                this->PressIncreaseBpm();
                break;

            case 3:
                this->PressDecreaseBpm();
                break;

            case 4:
                this->PressStartBeat();
                break;

            case 5:
                this->PressStopBeat();
                break;

            default:
                std::cout << "Invalid user input!\n";
                break;
        }
    }
}
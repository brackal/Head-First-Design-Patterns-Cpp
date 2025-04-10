///////////////////////////////////////////////////////////
//  DJView.cpp
//  Implementation of the Class DJView
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "DJView.h"

DJView::DJView() : controller(nullptr), model(nullptr) {
    // Initialize the controller and model pointers to nullptr
    controller = nullptr;
    model = nullptr;
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
    int bpm = model->GetBpm();
    // Update the view with the new BPM value
    // For example, you could print it to the console or update a GUI element
    std::cout << "Current BPM: " << bpm << std::endl;
}
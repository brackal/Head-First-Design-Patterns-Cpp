///////////////////////////////////////////////////////////
//  BeatController.cpp
//  Implementation of the Class BeatController
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "BeatController.h"

BeatController::BeatController() : model(nullptr), view(nullptr) {
}

BeatController::BeatController(I_BeatModel* model) : model(model), view(nullptr) {
    // Initialize the view with the model and controller
    view = new DJView(this, model);
}

BeatController::~BeatController() {
}

void BeatController::Start() {
    view->Run();  // Start the view

    if (model) {
        model->On();  // Turn on the model
    }
}

void BeatController::Stop() {
    if (model) {
        model->Off();  // Turn off the model
    }
}

void BeatController::IncreaseBpm() {
    if (model) {
        int currentBpm = model->GetBpm();
        model->SetBpm(currentBpm + 1);  // Increase BPM by 1
    }
}

void BeatController::DecreaseBpm() {
    if (model) {
        int currentBpm = model->GetBpm();
        model->SetBpm(currentBpm - 1);  // Decrease BPM by 1
    }
}

void BeatController::SetBpm(int bpm) {
    if (model) {
        model->SetBpm(bpm);  // Set the BPM to the specified value
    }
}
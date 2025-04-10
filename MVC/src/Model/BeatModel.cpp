///////////////////////////////////////////////////////////
//  BeatModel.cpp
//  Implementation of the Class BeatModel
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "BeatModel.h"

BeatModel::BeatModel() : bpm(90) {
    // Initialize the bpm and observer lists
    bpmObserverList.clear();
    beatObserverList.clear();
}

BeatModel::~BeatModel() {
}

void BeatModel::On() {
}

void BeatModel::Off() {
}

void BeatModel::SetBpm(int bpm) {
    this->bpm = bpm;
    // Notify observers about the new BPM
    for (auto observer : bpmObserverList) {
        observer->UpdateBpm();
    }
}

int BeatModel::GetBpm() {
    return bpm;
}

void BeatModel::Register(ICB_BpmObserver* observer) {
    // Add the observer to the list
    bpmObserverList.push_back(observer);
    // Notify the new observer about the current BPM
    observer->UpdateBpm();
}

void BeatModel::Register(ICB_BeatObserver* observer) {
    // Add the observer to the list
    beatObserverList.push_back(observer);
    // Notify the new observer about the current beat
    observer->UpdateBeat();
}
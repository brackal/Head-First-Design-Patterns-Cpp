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
    running = false;
}

BeatModel::~BeatModel() {
}

void BeatModel::On() {
    if (running) {
        std::cout << "Beat is already On" << std::endl;
        return;
    }
    running = true;
    beatThread = std::thread([this]() { this->RunBeat(); });  // Start the beat thread
}

void BeatModel::Off() {
    if (!running) {
        std::cout << "Beat is already Off" << std::endl;
        return;
    }
    running = false;
    beatThread.join();
    std::cout << "Beat is Off" << std::endl;
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
}

void BeatModel::Register(ICB_BeatObserver* observer) {
    // Add the observer to the list
    beatObserverList.push_back(observer);
}

void BeatModel::RunBeat() {
    while (this->running) {
        std::this_thread::sleep_for(std::chrono::seconds(1));  // Sleep for 1 second
        for (auto observer : beatObserverList) {
            observer->UpdateBeat();  // Notify observers about the beat
        }
    }
    std::cout << "BeatModel thread is stopping" << std::endl;
}
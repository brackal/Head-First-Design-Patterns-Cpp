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

    workerThread = new QThread;
    beatModelWorker = new BeatModelWorker;
    beatModelWorker->moveToThread(workerThread);


    //connect(workerThread, &QThread::finished, beatModelWorker, &QObject::deleteLater);
    connect(workerThread, &QThread::started, beatModelWorker, &BeatModelWorker::doWork);
    //connect(this, &BeatModel::operate, beatModelWorker, &BeatModelWorker::doWork);
    connect(beatModelWorker, &BeatModelWorker::workFinished, this, &BeatModel::handleWorkFinished);
}

BeatModel::~BeatModel() {
}

void BeatModel::On() {
    if (running) {
        std::cout << "Beat is already On" << std::endl;
        return;
    }
    running = true;
    //t = std::thread([this]() { this->RunBeat(); });
    std::cout << "Beat is On" << std::endl;

    if ((beatModelWorker != nullptr) && (workerThread != nullptr)){
        beatModelWorker->On();
        workerThread->start();
    }
    else
    {
        std::cout << "workerThread != nullptr" << std::endl;
    }
}

void BeatModel::Off() {
    if (!running) {
        std::cout << "Beat is already Off" << std::endl;
        return;
    }
    running = false;
    //t.join();
    std::cout << "Beat is Off" << std::endl;

    if ((beatModelWorker != nullptr) && (workerThread != nullptr)){
        beatModelWorker->Off();
        workerThread->quit();
        workerThread->wait();
    }
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

void BeatModel::handleWorkFinished(){
    for (auto observer : beatObserverList) {
        observer->UpdateBeat();  // Notify observers about the beat
    }
}

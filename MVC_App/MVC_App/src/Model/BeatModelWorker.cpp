///////////////////////////////////////////////////////////
//  BeatModelWorker.cpp
//  Implementation of the Class BeatModelWorker
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "BeatModelWorker.h"

BeatModelWorker::BeatModelWorker() : running(false) {
}

BeatModelWorker::~BeatModelWorker() {
}


void BeatModelWorker::On(){
    running = true;
    qDebug() << "BeatModelWorker::On: true";
}

void BeatModelWorker::Off(){
    running = false;
    qDebug() << "BeatModelWorker::Off: false";
}


void BeatModelWorker::doWork() {

    qDebug() << "BeatModel::doWork:";

    while(1){
        if(running){
            //qDebug() << "BeatModel::run in thread:" << QThread::currentThread();
            //qDebug() << "BeatModel::run in thread:" << this->thread();
            QThread::sleep(1);
            emit workFinished();
        }
        else
        {
            break;
        }
    }
}

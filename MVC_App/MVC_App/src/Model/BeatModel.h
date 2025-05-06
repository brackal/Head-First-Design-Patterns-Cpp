///////////////////////////////////////////////////////////
//  BeatModel.h
//  Implementation of the Class BeatModel
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(BEATMODEL_H_)
#define BEATMODEL_H_

#include <iostream>
#include <list>
#include <thread>
#include <atomic>
#include <QObject>
#include <QThread>
#include <QDebug>

#include "ICB_BeatObserver.h"
#include "ICB_BpmObserver.h"
#include "I_BeatModel.h"
#include "BeatModelWorker.h"

class BeatModel : public QThread, public I_BeatModel {

    Q_OBJECT

public:
    BeatModel();
    virtual ~BeatModel();

    virtual void On();
    virtual void Off();
    virtual void SetBpm(int bpm);
    virtual int GetBpm();
    virtual void Register(ICB_BpmObserver* observer);
    virtual void Register(ICB_BeatObserver* observer);

public slots:
    void handleWorkFinished();

private:

    std::list<ICB_BpmObserver*> bpmObserverList;
    std::list<ICB_BeatObserver*> beatObserverList;
    int bpm;
    std::atomic<bool> running;  // Atomic variable to control the thread

    QThread* workerThread;
    BeatModelWorker* beatModelWorker;
};
#endif  // !defined(BEATMODEL_H_)

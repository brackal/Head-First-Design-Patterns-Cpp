///////////////////////////////////////////////////////////
//  BeatModelWorker.h
//  Implementation of the Class BeatModelWorker
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(BEATMODELWORKER_H_)
#define BEATMODELWORKER_H_

#include <QThread>
#include <QDebug>

class BeatModelWorker : public QThread {

    Q_OBJECT

public:
    BeatModelWorker();
    virtual ~BeatModelWorker();

    void On();
    void Off();

public slots:
    void doWork();

signals:
    void workFinished();

private:
    std::atomic<bool> running;  // Atomic variable to control the thread
};
#endif  // !defined(BEATMODELWORKER_H_)

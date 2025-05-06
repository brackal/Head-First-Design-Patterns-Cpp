///////////////////////////////////////////////////////////
//  DJView.h
//  Implementation of the Class DJView
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(DJVIEW_H_)
#define DJVIEW_H_

#include <iostream>

#include <QDialog>
#include <QThread>

#include "ICB_BeatObserver.h"
#include "ICB_BpmObserver.h"
#include "I_BeatModel.h"
#include "I_Controller.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class DJView;
}
QT_END_NAMESPACE

class DJView : public QDialog, public ICB_BpmObserver, public ICB_BeatObserver
{
    Q_OBJECT

public:
    DJView(QWidget *parent = nullptr, I_Controller* controller = nullptr, I_BeatModel* model = nullptr);
    ~DJView();

    virtual void UpdateBeat();
    virtual void UpdateBpm();

    void DisableStartBeatItem();
    void EnableStartBeatItem();
    void DisableStopBeatItem();
    void EnableStopBeatItem();

private slots:
    void PressIncreaseBpm();
    void PressDecreaseBpm();
    void PressSetBpm();
    void PressStartBeat();
    void PressStopBeat();

private:
    Ui::DJView* ui;

    I_Controller* controller;
    I_BeatModel* model;
};
#endif // !defined(DJVIEW_H_)

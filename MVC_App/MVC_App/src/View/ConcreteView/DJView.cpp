///////////////////////////////////////////////////////////
//  DJView.cpp
//  Implementation of the Class DJView
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////
///
#include "DJView.h"
#include "./ui_djview.h"

DJView::DJView(QWidget* parent, I_Controller* controller, I_BeatModel* model)
    : QDialog(parent), controller(controller), model(model)
    , ui(new Ui::DJView)
{
    ui->setupUi(this);

    QObject::connect(ui->increaseBpmButton, SIGNAL(clicked()), this, SLOT(PressIncreaseBpm()));
    QObject::connect(ui->decreaseBpmButton, SIGNAL(clicked()), this, SLOT(PressDecreaseBpm()));
    QObject::connect(ui->currentBpmInput, SIGNAL(returnPressed()), this, SLOT(PressSetBpm()));
    QObject::connect(ui->beatOnButton, SIGNAL(clicked()), this, SLOT(PressStartBeat()));
    QObject::connect(ui->beatOffButton, SIGNAL(clicked()), this, SLOT(PressStopBeat()));

    // Register this view as an observer to the model
    if (model) {
        model->Register((ICB_BpmObserver*)this);   // Register as a BPM observer
        model->Register((ICB_BeatObserver*)this);  // Register as a Beat observer
    }

    //UpdateBpm();
    //UpdateBeat();
    //ui->beatProgressBar->setValue(0);
    this->show();
}

DJView::~DJView()
{
    delete ui;
}


void DJView::UpdateBeat() {
    if (model) {
        ui->beatProgressBar->setValue(100);

        //qDebug() << "DJView::UpdateBeat in thread:" << QThread::currentThread();
        //qDebug() << "DJView::UpdateBeat in thread:" << this->thread();

        this->thread()->msleep(500);

        int bpm = model->GetBpm();
        ui->beatProgressBar->setValue(bpm);
    } else {
        std::cout << "Model is not set!" << std::endl;
    }
}

void DJView::UpdateBpm() {
    if (model) {
        int bpm = model->GetBpm();
        //QString str = QString::number(bpm);

        ui->currentBpmValue->setNum(bpm);
        ui->beatProgressBar->setValue(bpm);
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

        QString str = ui->currentBpmInput->text();
        int userInput = str.toInt();

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

        //ui->beatProgressBar->setValue(0);
    } else {
        std::cout << "Controller is not set!" << std::endl;
    }
}

void DJView::DisableStartBeatItem(){
    ui->beatOnButton->setDisabled(true);
}

void DJView::EnableStartBeatItem(){
    ui->beatOnButton->setDisabled(false);
}

void DJView::DisableStopBeatItem(){
    ui->beatOffButton->setDisabled(true);
}

void DJView::EnableStopBeatItem(){
    ui->beatOffButton->setDisabled(false);
}

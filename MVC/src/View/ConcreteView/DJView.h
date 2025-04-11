///////////////////////////////////////////////////////////
//  DJView.h
//  Implementation of the Class DJView
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(DJVIEW_H_)
#define DJVIEW_H_

#include <iostream>

#include "ICB_BeatObserver.h"
#include "ICB_BpmObserver.h"
#include "I_BeatModel.h"
#include "I_Controller.h"

class DJView : public ICB_BpmObserver, public ICB_BeatObserver {
   public:
    DJView();
    DJView(I_Controller* controller, I_BeatModel* model);
    virtual ~DJView();

    virtual void UpdateBeat();
    virtual void UpdateBpm();

    void Run();

   private:
    I_Controller* controller;
    I_BeatModel* model;

    void PressIncreaseBpm();
    void PressDecreaseBpm();
    void PressSetBpm();
};
#endif  // !defined(DJVIEW_H_)

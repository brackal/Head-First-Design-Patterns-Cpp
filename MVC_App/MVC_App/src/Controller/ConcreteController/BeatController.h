///////////////////////////////////////////////////////////
//  BeatController.h
//  Implementation of the Class BeatController
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(BEATCONTROLLER_H_)
#define BEATCONTROLLER_H_

#include "DJView.h"
#include "I_BeatModel.h"
#include "I_Controller.h"

class BeatController : public I_Controller {
   public:
    BeatController();
    BeatController(I_BeatModel* model);
    virtual ~BeatController();

    virtual void Start();
    virtual void Stop();
    virtual void IncreaseBpm();
    virtual void DecreaseBpm();
    virtual void SetBpm(int bpm);

   private:
    I_BeatModel* model;
    DJView* view;
};
#endif  // !defined(BEATCONTROLLER_H_)

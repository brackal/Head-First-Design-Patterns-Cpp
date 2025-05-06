///////////////////////////////////////////////////////////
//  I_BeatModel.h
//  Implementation of the Interface I_BeatModel
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(I_BEATMODEL_H_)
#define I_BEATMODEL_H_

#include "ICB_BeatObserver.h"
#include "ICB_BpmObserver.h"


class I_BeatModel {

   public:
    I_BeatModel() {
    }

    virtual ~I_BeatModel() {
    }

    virtual void On() = 0;
    virtual void Off() = 0;
    virtual void SetBpm(int bpm) = 0;
    virtual int GetBpm() = 0;
    virtual void Register(ICB_BpmObserver* observer) = 0;
    virtual void Register(ICB_BeatObserver* observer) = 0;
};
#endif  // !defined(I_BEATMODEL_H_)

///////////////////////////////////////////////////////////
//  BeatModel.h
//  Implementation of the Class BeatModel
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(BEATMODEL_H_)
#define BEATMODEL_H_

#include <list>

#include "ICB_BeatObserver.h"
#include "ICB_BpmObserver.h"
#include "I_BeatModel.h"

class BeatModel : public I_BeatModel {
   public:
    BeatModel();
    virtual ~BeatModel();

    virtual void On();
    virtual void Off();
    virtual void SetBpm(int bpm);
    virtual int GetBpm();
    virtual void Register(ICB_BpmObserver* observer);
    virtual void Register(ICB_BeatObserver* observer);

   private:
    std::list<ICB_BpmObserver*> bpmObserverList;
    std::list<ICB_BeatObserver*> beatObserverList;
    int bpm;
};
#endif  // !defined(BEATMODEL_H_)

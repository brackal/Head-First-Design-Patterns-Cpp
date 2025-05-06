///////////////////////////////////////////////////////////
//  ICB_BpmObserver.h
//  Implementation of the Interface ICB_BpmObserver
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(ICB_BPMOBSERVER_H_)
#define ICB_BPMOBSERVER_H_

class ICB_BpmObserver {
   public:
    ICB_BpmObserver() {
    }

    virtual ~ICB_BpmObserver() {
    }

    virtual void UpdateBpm() = 0;
};
#endif  // !defined(ICB_BPMOBSERVER_H_)

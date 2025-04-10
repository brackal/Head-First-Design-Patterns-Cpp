///////////////////////////////////////////////////////////
//  ICB_BeatObserver.h
//  Implementation of the Interface ICB_BeatObserver
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(ICB_BEATOBSERVER_H_)
#define ICB_BEATOBSERVER_H_

class ICB_BeatObserver {
   public:
    ICB_BeatObserver() {
    }

    virtual ~ICB_BeatObserver() {
    }

    virtual void UpdateBeat() = 0;
};
#endif  // !defined(ICB_BEATOBSERVER_H_)

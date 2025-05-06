///////////////////////////////////////////////////////////
//  I_Controller.h
//  Implementation of the Interface I_Controller
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(I_CONTROLLER_H_)
#define I_CONTROLLER_H_

class I_Controller {
   public:
    I_Controller() {
    }
    virtual ~I_Controller() {
    }
    virtual void Start() = 0;
    virtual void Stop() = 0;
    virtual void IncreaseBpm() = 0;
    virtual void DecreaseBpm() = 0;
    virtual void SetBpm(int bpm) = 0;
};
#endif  // !defined(I_CONTROLLER_H_)

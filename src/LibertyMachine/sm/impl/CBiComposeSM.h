#ifndef LIBERTYMACHINE_SM_IMPL_IBICOMPOSESM_H_
#define LIBERTYMACHINE_SM_IMPL_IBICOMPOSESM_H_

#include <stdio.h>
#include "sm/interface/ISM.h"

class CBiComposeSM : public ISM
{
private:
    ISM* _pSM1;
    ISM* _pSM2;
    ISM* _pState;    
public:
    CBiComposeSM(ISM* pSm01, ISM* pSm02);
    virtual ~CBiComposeSM();
    
    int step(int msg);
    int next_Values(int input, int nCurrentState, int& nOutput, int& nNext_State);
    
    virtual int _IsSwitch_Machine(ISM* pCurrentMachine, int nMsg, int n_FromState, int n__To_State) = 0;
    virtual int _InterTranslation(ISM* pCurrentMachine, ISM* pSwitchTo, int Msg1, int n_FromState1, int n_To_State1) = 0;
};

#endif
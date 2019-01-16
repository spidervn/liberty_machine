#ifndef LIBERTYMACHINE_SM_IMPL_IBICOMPOSESM_H_
#define LIBERTYMACHINE_SM_IMPL_IBICOMPOSESM_H_

#include <stdio.h>
#include "sm/interface/ISM.h"

class CBiComposeSM : public ISM
{
public:
    CBiComposeSM(ISM* pSm01, ISM* pSm02);
    virtual ~CBiComposeSM();
    int next();
    int next_Values(int input, int currentState, int nextState);
};

#endif
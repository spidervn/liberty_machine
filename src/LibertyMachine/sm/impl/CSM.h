#ifndef LIBERTYMACHINE_SM_IMPL_ISM_H_
#define LIBERTYMACHINE_SM_IMPL_ISM_H_

#include <stdio.h>
#include "sm/interface/ISM.h"

using namespace std;

class CSM : public ISM
{
public:
    virtual ~CSM();
    int step(int msg, int &nOutput, int &nNext_State);
    int next_Values(int input, int nCurrentState, int& nOutput, int& nNext_State);
};

#endif
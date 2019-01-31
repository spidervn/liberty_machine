#ifndef LIBERTYMACHINE_SM_IMPL_CSM_H_
#define LIBERTYMACHINE_SM_IMPL_CSM_H_

#include <stdio.h>
#include "sm/interface/ISM.h"

using namespace std;

class CSM : public ISM
{
private:
    int _nState;
public:
    CSM(int initState);
    virtual ~CSM();
    virtual int step(int msg);
    virtual int next_Values(int input, int nCurrentState, int& nOutput, int& nNext_State) = 0;
};

#endif
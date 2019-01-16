#ifndef LIBERTYMACHINE_SM_INTERFACE_ISM_H_
#define LIBERTYMACHINE_SM_INTERFACE_ISM_H_

#include <stdio.h>
using namespace std;

class ISM
{
public:
    virtual ~ISM() {}
    virtual int myState() = 0;
    virtual int step(int msg) = 0;
    virtual int next_Values(int input, int nCurrentState, int& nOutput, int& nNext_State) = 0;
};

#endif
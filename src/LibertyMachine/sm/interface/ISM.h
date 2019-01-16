#ifndef LIBERTYMACHINE_SM_INTERFACE_ISM_H_
#define LIBERTYMACHINE_SM_INTERFACE_ISM_H_

#include <stdio.h>
using namespace std;

class ISM
{
public:
    virtual ~ISM() {}
    virtual int step(int msg) = 0;
    virtual int nextValues(int input, int currentState, int nextState) = 0;
};

#endif
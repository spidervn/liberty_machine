#ifndef LIBERTYMACHINE_SM_IMPL_CSWITCHERSM_H_
#define LIBERTYMACHINE_SM_IMPL_CSWITCHERSM_H_

#include <stdio.h>
#include "sm/interface/ISM.h"
#include <vector>

using namespace std;

class CSwitcherSM
{
public:
    CSwitcherSM();
    ~CSwitcherSM();

    int addSwitcher(ISM* pSM, bool isActive = true);

    virtual int step(int msg);
    virtual int _navigation() = 0;
    virtual int _isSwitchable(ISM* pActiveSM, int currentState, int incomingMsg) = 0;
    virtual int _SMToSwitch(ISM* pActiveSM, int currentState, int incomingMsg) = 0;

private:
    std::vector<ISM*> _vSwitch;
    int _active_Index;
};

#endif // LIBERTYMACHINE_SM_IMPL_CSWITCHERSM_H_
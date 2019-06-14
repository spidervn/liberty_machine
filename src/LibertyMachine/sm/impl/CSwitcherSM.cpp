#include "CSwitcherSM.h"

CSwitcherSM::CSwitcherSM()
{
    _active_Index = -1;
}

CSwitcherSM::~CSwitcherSM()
{}


int CSwitcherSM::addSwitcher(ISM* pSM, bool isActive = true)
{
    _vSwitch.push_back(pSM);
    if (isActive)
    {
        _active_Index = _vSwitch.size() - 1;
    }
    return 0;
}

int CSwitcherSM::step(int msg)
{
    
    return 0;
}

int  CSwitcherSM::_isSwitchable(ISM* pActiveSM, int currentState, int incomingMsg)
{
    return 0;
}

int CSwitcherSM::_SMToSwitch(ISM* pActiveSM, int currentState, int incomingMsg)
{
    return 0;
}


#include "CBiComposeSM.h"

CBiComposeSM::CBiComposeSM(ISM* pSm01, ISM* pSm02)
{
    _pSM1 = pSm01;
    _pSM2 = pSm02;
    _pState = _pSM1;
}

CBiComposeSM::~CBiComposeSM()
{}

int CBiComposeSM::step(int msg)
{
    int n_Ret = 0;
    if (_pState != NULL)
    {
        int nOutput;
        int nNext_State;
        int oldState = _pState->myState();

        _pState->next_Values(msg, _pState->myState(), nOutput, nNext_State);
        n_Ret = _pState->step(msg);
        
        if (_IsSwitch_Machine(_pState, msg, nOutput, nNext_State))
        {
            // 
            int nInterconnectionMsg;
            ISM* pSwitchTo = (_pSM1 == _pState) ? _pSM2 : _pSM1; //  (_pSM1 + _pSM2) - _pState;

            if (_pState == pSwitchTo)
            {
                // 
                
            }

            // Translate the Message into pSM02
            nInterconnectionMsg = _InterTranslation(_pState, pSwitchTo, msg, oldState, nNext_State);
            n_Ret = pSwitchTo->step(nInterconnectionMsg);
        }
        // n_Ret = _pState->myState()        
    }
    
    return n_Ret;
}

int CBiComposeSM::next_Values(int input, int nCurrentState, int& nOutput, int& nNext_State)
{
    return _pState->next_Values(input, nCurrentState, nOutput, nNext_State);
}


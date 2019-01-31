#ifndef LIBERTYMACHINE_APP_IMPL_USECASE_MFCSM_CMAINMODEL_H_
#define LIBERTYMACHINE_APP_IMPL_USECASE_MFCSM_CMAINMODEL_H_

#include <stdio.h>
#include "sm/impl/CSM.h"
using namespace std;

class CMainModel : public CSM
{
public:
    CMainModel(int initState);
    virtual ~CMainModel();
    int next_Values(int input, int nCurrentState, int& nOutput, int& nNext_State);

    virtual int onNewDocument() = 0;                    // Plug-In event
    virtual int onAfterSuccessLoadMoney() = 0;          // Plug-In event
};

#endif
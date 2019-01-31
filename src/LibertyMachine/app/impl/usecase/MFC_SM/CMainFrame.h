#ifndef LIBERTYMACHINE_APP_IMPL_USECASE_MFCSM_CMAINFRAME_H_
#define LIBERTYMACHINE_APP_IMPL_USECASE_MFCSM_CMAINFRAME_H_

#include <stdio.h>
using namespace std;

class CMainFrame
{
public:
    virtual ~CMainFrame();
    int onPaint();
    int onClick();
    int onMouseMove(int x, int y, int nFlags);
};

#endif
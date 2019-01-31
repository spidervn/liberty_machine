#include "CMainFrame.h"
#include "sm/interface/ISM.h"
#include "ICombinator.h"
#include "CMainModel.h"

CMainFrame::~CMainFrame()
{}

int CMainFrame::onPaint()
{
    // Draw Here
    ISM* pSM;
    ICombinator* pComb = NULL;

    int output = pSM->step(0);
    int newMsg;
    // CMainModel m01(0);

    pComb->translate(0, newMsg);
    pSM->step(newMsg);

    // Send a message to a machine

    return 1;
}

int CMainFrame::onClick()
{
    return 1;
}

int CMainFrame:: onMouseMove(int x, int y, int nFlags)
{
    // 
    bool isLButtonDown = true;
    if (isLButtonDown)
    {
        // Dragging Mouse
        
    }

    return 0;
}
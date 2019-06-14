#include "CHistorySMExample.h"
#include <vector>
#include "HistorySM_struct.h"

CHistorySMExample::CHistorySMExample(/* args */)
{
}

CHistorySMExample::~CHistorySMExample()
{
}

int CHistorySMExample::run()
{
    int MSG_TOOLBAR;
    // cpUC.nextState("NULL", );7
    
    printf("Testing two fuctions working concurrently!\r\n");
    printf("\t1. Normal ---  ---- ---- [Click]\r\n");
    printf("\t2. Click Copy/Paste\r\n");
    printf("\t3. SelectingCopySelection\r\n");
    printf("\t4. Click Histogram Features\r\n");
    printf("\t5. ---((Interupting CopyPaste))---\r\n");
    printf("\t6. Goto Histogram\r\n");
    printf("\t7. --- Click Histogram-- Function\r\n");
    printf("\t8. Executing histogram equalization\r\n");
    printf("\t9. Clicking Copy/Paste\r\n");
    printf("\t10. ---((Interupting Histogram))--\r\n");
    printf("\t11. Going to CopyPaste state\r\n");

    // 

    return 0;
}
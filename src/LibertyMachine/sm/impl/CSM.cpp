#include "CSM.h"

CSM::CSM(int initState)
{
    _nState = initState;
}

CSM::~CSM()
{
}

int CSM::step(int msg)
{
    int input;
    int output;
    next_Values(msg, _nState, msg, output);
    
    return output;
}

#ifndef LIBERTYMACHINE_APP_IMPL_CMAINAPP_H_
#define LIBERTYMACHINE_APP_IMPL_CMAINAPP_H_

#include <stdio.h>
using namespace std;

class CMainApp
{
public:
    virtual ~CMainApp();
    int run(int argc, char* argv[]);
};

#endif
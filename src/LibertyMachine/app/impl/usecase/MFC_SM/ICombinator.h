#ifndef LIBERTYMACHINE_APP_IMPL_USECASE_MFCSM_ICOMBINATOR_H_
#define LIBERTYMACHINE_APP_IMPL_USECASE_MFCSM_ICOMBINATOR_H_

#include <stdio.h>
using namespace std;

class ICombinator
{
public:
    virtual ~ICombinator() { }
    virtual int translate(int fromMsg, int& toMsg) = 0;
};

#endif
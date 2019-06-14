#ifndef LIBERTYMACHINE_APP_IMPL_USECASE_HISTORYSM_CHISTORYSMEXAMPLE_H_
#define LIBERTYMACHINE_APP_IMPL_USECASE_HISTORYSM_CHISTORYSMEXAMPLE_H_

#include "HistorySM_struct.h"
#include <string>

class CopyPasteUC1
{
private:
    std::string state;

public:
    CopyPasteUC1()
    {

    }

    virtual int reset()
    {
        state = "NULL";
        return 0;
    }

    virtual int nextState(std::string currentState, int msgID)
    {
        return 0;
    }

    virtual int step(HSM_Msg msg, std::string& out, std::string& newstate)
    {
        // What ever it is
        return 0;
    }
};

class HistogramUC1
{
private:
    std::string state;

public:
    HistogramUC1()
    {

    }

    virtual int reset()
    {
        state = "NULL";
        return 0;
    }

    virtual int nextState(std::string currentState, int msgID)
    {
        return 0;
    }

    virtual int step(HSM_Msg msg, std::string& out, std::string& newstate)
    {
        // What ever it is
        return 0;
    }
};

class MachineCombinator
{
public:
    HSM_Msg msg;
    
    int run();
};

class CHistorySMExample
{
private:
    /* data */
    CopyPasteUC1 cpUC;
    HistogramUC1 htUC;
    MachineCombinator mc;

public:
    CHistorySMExample(/* args */);
    ~CHistorySMExample();

    int run();
};


#endif
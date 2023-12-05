#pragma once
#include "mid.h"

class Pid 
{
    protected :
        int npid;
        Mid* mid;
    public :
        Mid* get_mid();
        Pid(Mid* m_mid, int m_npid);
};
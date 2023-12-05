//#include "../ansysplusplus/mid.h" 
#include "../ansysplusplus/pid.h"
#include <iostream>


Pid::Pid(Mid* m_mid, int m_npid):mid{m_mid},npid{m_npid} 
{
    std::cout << " PART" << std::endl;
    std::cout << "Part number : "<<npid;
    std::cout << " Mid number : "<<m_mid->getNmid();
};
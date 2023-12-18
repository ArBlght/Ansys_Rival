//#include "../ansysplusplus/mid.h" 
#include "Ansysplusplus/pid.h"
#include <iostream>


Pid::Pid(Mid* m_mid, int m_npid):mid(m_mid),npid(m_npid) 
{
    std::cout << " PART" << std::endl;
    std::cout << "Part number : "<<npid;
    std::cout << " Mid number : "<<m_mid->get_nmid()<<std::endl;

};

void Pid::print() const {
    std::cout<<"PART ID : "<<npid<<std::endl;
    std::cout<<"MATERIAL ID : "<<mid->get_nmid()<<std::endl;
    std::cout<<"MATERIAL DENSITY : "<<mid->get_density()<<std::endl;
    std::cout<<"MATERIAL E : "<<mid->get_e()<<std::endl;
    std::cout<<"MATERIAL Poisson Ratio : "<<mid->get_nu()<<std::endl;
}
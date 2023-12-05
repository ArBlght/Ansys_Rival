#include "../ansysplusplus/mid.h"
#include <iostream>

Mid::Mid(int m_nmid, double m_density, double m_E, double m_nu):
nmid{m_nmid}, density{m_density}, E{m_E}, nu{m_nu}
{
    std::cout<< "MATERIAL" << std::endl;
    std::cout<< "Number ID : "<< nmid;
    std::cout<< " Density : "<<density;
    std::cout<< " Young Modulus : "<<E;
    std::cout<< " Poisson Ratio : "<<nu;
};

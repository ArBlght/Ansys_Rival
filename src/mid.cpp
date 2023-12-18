#include "Ansysplusplus/mid.h"
#include <iostream>
#include <armadillo>


Mid::Mid(int m_nmid, double m_density, double m_E, double m_nu):
nmid(m_nmid), density(m_density), E(m_E), nu(m_nu)
{
    std::cout<< "MATERIAL" << std::endl;
    std::cout<< "Number ID : "<< nmid;
    std::cout<< " Density : "<<density;
    std::cout<< " Young Modulus : "<<E;
    std::cout<< " Poisson Ratio : "<<nu<<std::endl;
};

void Mid::initialise_constitutive_matrix(unsigned n_dim)
{
    if(n_dim == 2)
    {
        // plane stress
        constitutive_matrix = arma::zeros<arma::sp_mat>(3,3);
        double  Enu = E/(1-nu*nu);
        constitutive_matrix(0,0)=1;
        constitutive_matrix(1,0)=nu;
        constitutive_matrix(0,1)=nu;
        constitutive_matrix(1,1)=1;
        constitutive_matrix(2,2)=(1-2*nu)/(2*(1-nu));
    }

    else if(n_dim == 3)
    {
        double denominator = (1-2*nu)*(1+nu), c11 = E*(1-nu)/denominator, c12 = E*nu/denominator, G = (c11 - c12)*0.5;
        constitutive_matrix = arma::zeros<arma::sp_mat>(6,6);
        constitutive_matrix(0,0)=c11;
        constitutive_matrix(1,1)=c11;
        constitutive_matrix(2,2)=c11;
        constitutive_matrix(1,0)=c12;
        constitutive_matrix(0,1)=c12;
        constitutive_matrix(2,0)=c12;
        constitutive_matrix(0,2)=c12;
        constitutive_matrix(2,1)=c12;
        constitutive_matrix(1,2)=c12;
        constitutive_matrix(3,3)=G;
        constitutive_matrix(4,4)=G;
        constitutive_matrix(5,5)=G;
    }
}

#pragma once
#include <armadillo>

class Mid 
{
    protected : 
        double density;
        double E;
        double nu;
        int nmid;
        arma::sp_mat constitutive_matrix ;
    public :
        void initialise_constitutive_matrix(unsigned);
        double get_nmid() const {return nmid;};
        double get_density() const {return density;};
        double get_e() const {return E;};
        double get_nu() const {return nu;};
        arma::mat get_stiffness() const;
        arma::sp_mat get_constitutive_matrix() const {return constitutive_matrix;};
        
        Mid(int m_nmid, double m_density, double m_E, double m_nu);
        

};
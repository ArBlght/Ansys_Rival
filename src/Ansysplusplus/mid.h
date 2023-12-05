#pragma once

class Mid 
{
    protected : 
        double density;
        double E;
        double nu;
        int nmid;
    public : 
        double getNmid() const {return nmid;};
        double getDensity() const {return density;};
        double getE() const {return E;};
        double getNu() const {return nu;};
        
        Mid(int m_nmid, double m_density, double m_E, double m_nu);
        

};
#pragma once
#include "DOL.h"

class Node : public Dol
{
    public : 
        int nid;
        double x,y,z;
        bool ddol;
        bool has_dol() const{return ddol;};
        void dol_done() {ddol = true;};
        Node(int mnid, double mx, double my, double mz);
};
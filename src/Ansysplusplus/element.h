#include "node.h"
#include "pid.h"
#include "mid.h"
#include <armadillo>
#include <memory>

// In brief, element is a base class for oter element classes : TRI3, QUAD4 ..

class Element 
{
    protected :
        arma::mat Ke;
        std::vector<Node*>    connectivity;
        Pid* pid;
        arma::vec Fe;
        const unsigned n_nodes;
        const unsigned n_dim;
        const unsigned eid;
    public : 

        arma::mat get_coordinates(const unsigned) const;
        unsigned get_dof_number() const {return n_dim;};
        unsigned get_node_number() const {return n_nodes;};
        
        virtual void CalculateKe() {};
        Element(const unsigned               , //eid
                Pid*                         , //pid
                std::vector<Node*>           , // connectivity table get from mesh
                const unsigned               , //nnodes
                const unsigned               ); //ndim


};
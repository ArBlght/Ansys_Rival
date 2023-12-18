#include "Ansysplusplus/element.h"
#include <armadillo>
#include <memory>


arma::mat Element::get_coordinates(const unsigned n_dim) const
{
    arma::mat elem_coord(n_nodes, n_dim,arma::fill::zeros);

    for (unsigned i=0; i<n_nodes; ++i)
    {        
        auto &coord = connectivity[i]->get_coordinates();
        for (unsigned j=0; j<n_dim; ++j) elem_coord(i,j) = coord(j);
    }
    
    return elem_coord;
}

Element::Element(const unsigned              m_eid,
                 Pid                        *m_pid,
                 std::vector<Node*>          m_connectivity,
                 const unsigned              m_nnodes,
                 const unsigned              m_ndim):
                 eid                        (m_eid),
                 pid                        (m_pid),
                 connectivity               (m_connectivity),
                 n_nodes                    (m_nnodes),
                 n_dim                      (m_ndim)
                 {};
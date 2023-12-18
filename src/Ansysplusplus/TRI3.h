#include "element.h"
#include <armadillo>

class TRI3 : public Element
{
    protected :
        static constexpr unsigned n_nodes = 3, n_dim = 2, n_size = n_nodes*n_dim;
        const double thickness;
    public :
        TRI3(
            unsigned,               // element id
            Pid*,                   // part 
            std::vector<Node*>,     //connectivity
            double                  //thickness
            );


};
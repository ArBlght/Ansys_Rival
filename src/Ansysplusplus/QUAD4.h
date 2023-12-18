#include "element.h"
#include <string>
#include <vector>
#include <armadillo>

class QUAD4 : public Element
{
    protected: 
        static constexpr unsigned n_nodes = 4, n_dim = 2, n_size = n_nodes*n_dim;
    public: 
        QUAD4(
            unsigned,               // element id
            Pid*,                   // part 
            std::vector<Node*>,     //connectivity
            double                  // thickness
            );
};
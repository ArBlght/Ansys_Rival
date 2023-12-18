#include "element.h"
#include <string>
#include <vector>
#include <armadillo>

class HEX8 : public Element
{
    protected :
        static constexpr unsigned n_nodes = 8, n_dim = 3, n_size = n_nodes*n_dim;
    public :
        HEX8(
            unsigned,               // element id
            Pid*,                   // part 
            std::vector<Node*>     //connectivity
            );


};
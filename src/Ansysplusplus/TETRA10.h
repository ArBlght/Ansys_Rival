#include "element.h"
#include <string>
#include <vector>

class TETRA10 : public Element
{
    protected :
        static constexpr unsigned n_nodes = 10, n_dim = 3, n_size = n_nodes*n_dim;
    public :
        TETRA10(
            unsigned,               // element id
            Pid*,                   // part 
            std::vector<Node*>     //connectivity
            );


};
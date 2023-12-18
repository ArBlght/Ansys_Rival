#include "element.h"
#include <string>
#include <vector>

class HEX20 : public Element
{
    protected :
        static constexpr unsigned n_nodes = 20, n_dim = 3, n_size = n_nodes*n_dim;
    public :
        HEX20(
            unsigned,               // element id
            Pid*,                   // part 
            std::vector<Node*>     //connectivity
            );


};
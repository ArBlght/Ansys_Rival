#include "Ansysplusplus/element.h"
#include <string>
#include <vector>

class QUAD4 : public Element
{
    protected: 
        static constexpr unsigned n_nodes = 4, n_dim = 2, n_size = n_nodes*n_dim;
    public: 

};
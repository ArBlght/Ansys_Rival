#include "Ansysplusplus/element.h"
#include <memory>

void Element::setupDol()
{
    int i=0;
    for (i=0; i<nnodes; i++)
    {
        if(!connectivity[i]->has_dol())
        {
            // give one Degree of liberty for each dimension
            auto x = std::make_unique<Dol>();
            auto y = std::make_unique<Dol>();
            connectivity[i]->dol_done();
            if (dimensions == 3)
            {
                auto z = std::make_unique<Dol>();
            }
        }
    }
    unsigned int value = (connectivity[2]->get_dol_counter_glob());
    std::cout<< value <<std::endl;
}

Element::Element(const int              m_eid,
                 Mid                    *m_mid,
                 std::vector<Node *>    m_connectivity,
                 int            m_type,
                 const int              m_nnodes,
                 const int              m_ndols,
                 const int              m_dimensions):
                 eid{m_eid},
                 mid{m_mid},
                 connectivity{m_connectivity},
                 type{m_type},
                 nnodes{m_nnodes},
                 ndols{m_ndols},
                 dimensions{m_dimensions}
                 {};
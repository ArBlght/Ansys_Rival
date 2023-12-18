#include "Ansysplusplus/node.h"


Node::Node(unsigned mnid, arma::vec& m_coord):
    nid             (mnid),
    coordinates     (m_coord)
{};

Node::Node(): nid(0),coordinates(arma::vec(3,arma::fill::zeros)){};
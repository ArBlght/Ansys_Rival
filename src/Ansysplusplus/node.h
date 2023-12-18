#pragma once
#include <iostream>
#include <armadillo>

// In brief, class for creating a node

class Node
{  
        unsigned nid;
        arma::vec coordinates;
    public : 
        
        const arma::vec& get_coordinates() const {return coordinates;}; 
        unsigned get_id() const {return nid;};
        Node(unsigned, arma::vec&);
        Node();
        
        // test function to print information about node
        void print_node() const { std::cout << "the node ID is : " << nid << std::endl;
                                  coordinates.print("coordinates : ");};
};
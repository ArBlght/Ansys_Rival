#include <iostream>
#include <vector>
#include <armadillo>
#include <memory>
#include "mid.cpp" 
#include "pid.cpp"
#include "node.cpp"
#include "element.cpp"
 
int main()
{
    //mat and part creation
    Mid mat(1,10,100,0.3);
    Pid part(&mat,5);
    // node creation
    arma::vec coor = {{1,2,3}}; 
    arma::vec coor1 = {{4,5,6}}; 
    Node n(1,coor);
    Node n1(2,coor1);
    Node n2(3,coor);
    std::vector<Node*> connectivity = {&n,&n1,&n2};
    arma::vec aff = n.get_coordinates();
    aff.print("print");
    (connectivity[1]->get_coordinates()).print();
    // Element creation
    Element e1(1u,&part,connectivity,3,3);
    auto matrix = e1.get_coordinates(3);
    matrix.print("coordinates matrix is : ");
    
    part.print();

 

    return 0;
}
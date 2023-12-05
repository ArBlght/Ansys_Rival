#include <iostream>
#include "Eigen/Dense"
#include "mid.cpp" 
#include "pid.cpp"
#include "element.cpp"
#include "node.cpp"
#include <vector>
using Eigen::MatrixXd;
 
int main()
{
    Mid mat(1,10,100,0.3);
    Pid part(&mat,5);
    Node n1(1,0,0,0);
    Node n2(1,1,0,0);
    Node n3(1,0,1,0);
    std::vector<Node*> connect;
    connect.push_back(&n1);
    connect.push_back(&n2);
    connect.push_back(&n3);
    Element element(1,&mat,connect,1,3,9,3);

    return 0;
}
#include "Node.h"
#include "DOL.h"
#include "pid.h"
#include "mid.h"

#include "../Eigen/Sparse"

using MatrixDyna = Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>;
using VectorDyna = Eigen::Matrix<double, Eigen::Dynamic,1>;

class Element  
{
    protected :
        enum ElementType
        {
            TRI3,QUAD4,QUAD8,HEX8,HEX20,TETRA10,
        };
        MatrixDyna Ke;
        std::vector<Node*>      connectivity;
        Mid* mid;
        VectorDyna Fe;
        int type;
        const int nnodes;
        const int ndols;
        const int dimensions; //dimension is ElementType dependante
        const int eid;
        void setupCoord(); //useless function will create a Coordinate table
        void setupDol();

    public : 
        virtual void CalculateKe();
        Element(const int               eid,
                Mid*                    mid,
                std::vector<Node*>      connectivity, // connectivity table get from mesh
                int             type,
                const int               nnodes,
                const int               ndols,
                const int               dimensions);


};
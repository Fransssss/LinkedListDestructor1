// Fransiskus Agapa

#include "Node.h"
#include <iostream>

Node::Node()
{
    std::cout << "= Node Default Data = " << std::endl;
    this->_data = -1;
}

Node::Node(int theData)
{
    std::cout << "= Node Assign Data =" << std::endl;
    this->_data = theData;
}

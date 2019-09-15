#include<string> // for string class
#include "node.hpp"

Node::Node() : index(0) {} // constructor initialization - not using assignemnt
                        // initialization is only done in the constructor
Node::Node(int num) : index(num){}
Node::~Node() {}  // destructor

int Node::getIndex()
{
    return this->index;
}

void Node::setval(bool val)
{
    this->val = val;
}

bool Node::getval()
{
    return this->val;
}
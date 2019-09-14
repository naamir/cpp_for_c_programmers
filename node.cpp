#include<string> // for string class
#include "node.h"

Node::Node() : num(0) {} // constructor initialization - not using assignemnt
                        // initialization is only done in the constructor
Node::Node(int num) : num(num){}
Node::~Node() {}  // destructor

int Node::getNum()
{
    return this->num;
}

 
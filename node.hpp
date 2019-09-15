#ifndef NODE
#define NODE

#include <string> // for string class
using namespace std;

class Node
{
    public:
        Node(); // constructor
        Node(int index);
        ~Node(); // destrutor
        int getIndex();
        void setval(bool val);
        bool getval();
    private:
        int index;
        bool val;
        int connected[64]; // array of connected nodes to this node
        string name;
        Node *next;
};

#endif
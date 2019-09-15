#include <string> // for string class
#include "node.hpp"
using namespace std;

#define PROB_DENSITY 40

#define MAX_ARRAY_SIZE 30

class Graph //: private Node
{
    public:
        //Graph(int num_nodes);
        Graph(int num_nodes);
        ~Graph();
        void printGraph();
        void edgeGen();

    private:
        int get_random_number();
        int pdensity;
        int num_nodes;
        // need to create a 2-D array that has Booleans telling us if there is an edge there or not
        Node** graph_2d_array;
        //Node 
};
#include <iostream>
#include <string> // for string class
#include <time.h>
#include "graph_class.hpp"

Graph::Graph(int nodes)
{
    Graph::num_nodes = nodes; // set the private member to the value passed in
    graph_2d_array = new Node*[num_nodes]; // creates a dynamic array using heap memory
    srand(time(0)); // start the seed for random number generator
    for (int i = 0; i < num_nodes; i++)
    {
        graph_2d_array[i] = new Node[num_nodes]; // adds the 2nd dimention of that array
    }
}

Graph::~Graph() {}

void Graph::printGraph()
{
    cout << "Graph: " << endl;
    cout << "   0123456789" << endl; // assuming 10 nodes
    for (int i = 0; i < Graph::num_nodes; i++)
    {
        cout << "[" << i << " ";
        for (int j = 0; j < Graph::num_nodes; j++)
        {
            std::cout << graph_2d_array[i][j].getval();
        }
        std::cout << " ]" << endl;
    }
}

int Graph::get_random_number()
{
    Graph::pdensity = rand() % 100;
    return Graph::pdensity;
}

void Graph::edgeGen()
{
    for (int i = 0; i < Graph::num_nodes; i++)
    {
        for (int j = 0; j < Graph::num_nodes; j++)
        {
            if (i == j) graph_2d_array[i][j].setval(false); // assuming NO loops
            // fixing density to be 19%
            // NOTE: the condition (rand < 19) will return true or false...
            else
            {
                graph_2d_array[i][j].setval((Graph::get_random_number() < PROB_DENSITY));
                graph_2d_array[j][i].setval((Graph::get_random_number() < PROB_DENSITY));
            }
            // an explaination...this is where we create the edge
            // e.g. the random number generated is less than our probability density for 
            // i = 2 and j = 7 -> that means an edge exists between nodes 2 and 7 we just
            // represent that in a 2d array
        }
    }
}
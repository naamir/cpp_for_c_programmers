#include <iostream>
#include "node.hpp"
#include "graph_class.hpp"

int main()
{
    Node a;
    Node b(5);
    std::cout << "Hello World" << std::endl;
    std::cout << a.getIndex() << std::endl;
    std::cout << b.getIndex() << std::endl;

    Graph my_graph(10);
    my_graph.edgeGen();
    my_graph.printGraph();
    return 0;
}
/**
 *      @file     main.cc
 *  
 *      @version  0.1
 *      @date     31/10/2013
 *      @author   Nicolas "Kolazig" Simon (nicolas.simon88(at)gmail.com)
 */

#include <iostream>
#include <fstream>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/graphviz.hpp>
#include "graph/graph.hpp"

int main(int argc, const char *argv[])
{
    
    Graph graph;
    for (int i = 0; i < 5; i++) {
        NodeID nodeID = boost::add_vertex(graph);
        graph[nodeID].node.setID(i);
        graph[nodeID].node.setName("test");
    }

    boost::add_edge(0, 1, graph);
    boost::add_edge(0, 3, graph);
    boost::add_edge(1, 2, graph);
    boost::add_edge(2, 4, graph);
    boost::add_edge(3, 4, graph);

    std::ofstream myfile("graph.dot");
//    boost::write_graphviz(myfile, graph);
    //boost::write_graphviz(myfile, graph, make_node_writer(boost::get(&Node::name, graph), boost::get(&Node::id, graph)));
    boost::write_graphviz(myfile, graph, make_node_writer(boost::get(&Node::node, graph)));
    myfile.close();

    return 0;
}

/**
 *      @file     graph.hpp
 *      @brief    Represent Data Flow Graph node
 *  
 *      @version  0.1
 *      @date     31/10/2013
 *      @author   Nicolas "Kolazig" Simon (nicolas.simon88(at)gmail.com)
 */
 
#ifndef __GRAPH_HPP__
#define __GRAPH_HPP__

#include <string>
#include <iostream>
#include "graph/dfg/nodeDFG.hpp"
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/directed_graph.hpp>

struct Node {
    graph::NodeDFG node("test");
};

/*struct Node {
    std::string name;
    unsigned int id;
};*/

struct Edge {
    unsigned int input;
};

typedef boost::adjacency_list<boost::listS, boost::vecS, boost::directedS,
        Node,
        Edge > Graph;

typedef Graph::vertex_descriptor NodeID;
typedef Graph::edge_descriptor EdgeID;

template <class Node>
class node_writer {
    public:
        node_writer(Node node) : m_node(node) {}
        template <class Nodea>
            void operator()(std::ostream &out, const Nodea& e) const {
                out << " [label=\"" << m_node[e].getName() << "\"]";
            }

    private:
        Node m_node;
};

template <class Node>
inline node_writer<Node> make_node_writer(Node c){
        return node_writer<Node>(c);
    }

/*template <class NameMap, class IdMap>
class node_writer {
    public:
        node_writer(NameMap name, IdMap id) : m_name(name), m_id(id) {}
        template <class Nodea>
            void operator()(std::ostream &out, const Nodea& e) const {
                out << " [label=\"" << m_name[e] << "\", taillabel=\"" << m_id[e] << "\"]";
            }

    private:
        NameMap m_name;
        IdMap m_id;
};

template <class NameMap, class IdMap>
inline node_writer<NameMap, IdMap> make_node_writer(NameMap w, IdMap c){
        return node_writer<NameMap, IdMap>(w,c);
    }*/

#endif

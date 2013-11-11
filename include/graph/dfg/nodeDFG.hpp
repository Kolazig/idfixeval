/**
 *      @file     nodeDFG.hpp
 *      @brief    Represent Data Flow Graph node
 *  
 *      @version  0.1
 *      @date     31/10/2013
 *      @author   Nicolas "Kolazig" Simon (nicolas.simon88(at)gmail.com)
 */

#ifndef __NODE_DFG_HPP__
#define __NODE_DFG_HPP__

#include <string>
#include "graph/nodeGraph.hpp"
namespace graph {
    /**
     * @class NodeDFG
     * @brief Implements vertex for a graph representing a data flow graph
     */
    class NodeDFG : public NodeGraph {
        protected:
            NodeDFG(std::string name):NodeGraph(name){}
    };
}

#endif

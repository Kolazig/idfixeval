/**
 *      @file     nodeData.hpp
 *      @brief    Represent a data node used by data flow graph
 *  
 *      @version  0.1
 *      @date     11/11/2013
 *      @author   Nicolas "Kolazig" Simon (nicolas.simon88(at)gmail.com)
 */


#ifndef __NODEDATA_HPP__
#define __NODEDATA_HPP__

#include <string>
#include "graph/dfg/nodeGFD.hpp"

namespace graph{
    /**
     * @class NodeData
     * @brief represent variable data into a data flow graph
     */
    class NodeData : public NodeGFD {
        public:
        enum eKindNodeData { INPUT, OUTPUT, VARIABLE };

        private:
            eKindNodeData m_kindData;
            unsigned int m_dfgid;

        public:
            NodeData(std::string name, graph::NodeData::eKindNodeData kindData, unsigned int dfgid):NodeGFD(name), m_kindData(kindData), m_dfgid(dfgid){}

            std::string toString();
    
    };
}

#endif

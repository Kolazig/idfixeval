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
#include "graph/dfg/nodeDFG.hpp"

namespace graph{
    /**
     * @class NodeData
     * @brief represent variable data into a data flow graph
     */
    class NodeData : public NodeDFG {
        public:
        enum eKindNodeData { INPUT, OUTPUT, VARIABLE };

        private:
            eKindNodeData m_kindData;
            unsigned int m_dataid;

        public:
            /**
             * @brief constructor
             * @param name : the name of the node
             * @param kingData : kind of the data
             * @param dataid : dataid of the graph into the graph
             */
            NodeData(std::string name, graph::NodeData::eKindNodeData kindData, unsigned int dataid):NodeDFG(name), m_kindData(kindData), m_dataid(dataid){}

            unsigned int getDataID(){return m_dataid;} /**< @brief getter of the data id */

            bool isInput();     /**< @brief return true if the kind of the data is INPUT, false otherwise */
            bool isOutput();   /**< @brief return true if the kind of the data is OUTPUT, false otherwise */
            bool isVariable(); /**< @brief return true if the kind of the data is VARIABLE, false otherwise */

            std::string toString();
    
    };
}

#endif

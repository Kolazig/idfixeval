/**
 *      @file     tools.hpp
 *      @brief    regroup many usefull function 
 *  
 *      @version  0.1
 *      @date     11/11/2013
 *      @author   nicolas "kolazig" simon (nicolas.simon88(at)gmail.com)
 */


#ifndef __TOOLS_HPP__
#define __TOOLS_HPP__

#include <string>
#include "graph/dfg/nodeData.hpp"
#include "graph/dfg/nodeOperator.hpp"

namespace tools {
    template <class T> std::string numberToString(T number);

    std::string kindNodeDataToString(graph::NodeData::eKindNodeData kindData);
    std::string kindNodeOperatorToString(graph::NodeOperator::eKindNodeOperator kindOperator);
}

#endif

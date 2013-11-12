/**
 *      @file     nodeGraph.cpp
 *      @brief    Represent a graph node. Base class use for all kind of node
 *  
 *      @version  0.1
 *      @date     11/11/2013
 *      @author   Nicolas "Kolazig" Simon (nicolas.simon88(at)gmail.com)
 */


#include "graph/dfg/nodeData.hpp"
#include "utils/tools.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

namespace graph{
    std::string NodeData::toString(){
        std::string ret = "name: ";
        ret.append(m_name);
        ret.append("Kind: ");
        ret.append(tools::kindNodeDataToString(m_kindData));
        ret.append(" dfgid: ");
        ret.append(tools::numberToString(m_dataid));
        return ret; 
    }

    bool NodeData::isInput(){
        if(m_kindData == NodeData::INPUT)
            return true;
        else
            return false;
    }

    bool NodeData::isOutput(){
        if(m_kindData == NodeData::OUTPUT)
            return true;
        else
            return false;
    }

    bool NodeData::isVariable(){
        if(m_kindData == NodeData::VARIABLE)
            return true;
        else
            return false;
    }
}

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
        std::string kindData;
        switch(m_kindData){
        case INPUT:
           kindData = "INPUT";
           break;
        case OUTPUT:
           kindData = "OUTPUT";
           break;
        case VARIABLE:
           kindData = "VARIABLE";
           break;
        default:
            std::cerr << "Error: A data node have not a valid kind attribute" << std::endl;
            exit(EXIT_FAILURE);
            break;
        }
        ret.append("Kind: ");
        ret.append(kindData);
        ret.append(" dfgid: ");
        ret.append(tools::numberToString(m_dfgid));
        return ret; 
    }
}

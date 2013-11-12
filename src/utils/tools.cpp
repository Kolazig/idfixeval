/**
 *      @file     tools.cpp
 *      @brief    regroup many usefull function 
 *  
 *      @version  0.1
 *      @date     11/11/2013
 *      @author   nicolas "kolazig" simon (nicolas.simon88(at)gmail.com)
 */

#include "utils/tools.hpp"
#include <iostream>
#include <string>
#include <sstream>

#include "graph/dfg/nodeData.hpp"
#include "graph/dfg/nodeOperator.hpp"

namespace tools {
    template <class T> std::string numberToString(T number){
        return static_cast<std::ostringstream*> (&(std::ostringstream() << number))->str();
    }
    template std::string numberToString(float number);
    template std::string numberToString(double number);
    template std::string numberToString(int number);
    template std::string numberToString(unsigned int number);


    std::string kindNodeDataToString(graph::NodeData::eKindNodeData kindData){
        std::string ret;
        switch(kindData){
            case graph::NodeData::INPUT:
                ret = "INPUT";
                break;
            case graph::NodeData::OUTPUT:
                ret = "OUTPUT";
                break;
            case graph::NodeData::VARIABLE:
                ret = "VARIABLE";
                break;
            default:
                std::cerr << "Error: A data node have not a valid kind attribute" << std::endl;
                exit(EXIT_FAILURE);
                break;
        }
        return ret;
    }

    std::string kindNodeOperatorToString(graph::NodeOperator::eKindNodeOperator kindOperator){
        std::string ret;
        switch(kindOperator){
            case graph::NodeOperator::ADD:
                ret = "ADD";
                break;
            case graph::NodeOperator::SUB:
                ret = "SUB";
                break;
            case graph::NodeOperator::MUL:
                ret = "MUL";
                break;
            case graph::NodeOperator::DIV:
                ret = "DIV";
                break;
            case graph::NodeOperator::EQ:
                ret = "EQ";
                break;
            case graph::NodeOperator::DELAY:
                ret = "DELAY";
                break;
            default:
                std::cerr << "Error: An operator node have not a valid kind attribute" << std::endl;
                exit(EXIT_FAILURE);
                break;
        }
        return ret;
    }
}

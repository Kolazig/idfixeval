/**
 *      @file     nodeOperator.cpp
 *      @brief    Represent an operator node used by data flow graph
 *  
 *      @version  0.1
 *      @date     12/11/2013
 *      @author   Nicolas "Kolazig" Simon (nicolas.simon88(at)gmail.com)
 */

#include "graph/dfg/nodeOperator.hpp"
#include <string>

#include "utils/tools.hpp"

namespace graph{
    
    std::string NodeOperator::toString(){
        std::string ret = m_name;
        ret.append(":");
        ret.append(tools::kindNodeOperatorToString(m_kindOp));
        ret.append(":");
        ret.append(tools::numberToString(m_opid));
        return ret; 
    }

    bool NodeOperator::isAddition(){
        if(m_kindOp == NodeOperator::ADD)
            return true;
        else
            return false;
    }

    bool NodeOperator::isSubstraction(){
        if(m_kindOp == NodeOperator::SUB)
            return true;
        else
            return false;
    }

    bool NodeOperator::isMultiplication(){
        if(m_kindOp == NodeOperator::MUL)
            return true;
        else
            return false;
    }

    bool NodeOperator::isDivision(){
        if(m_kindOp == NodeOperator::DIV)
            return true;
        else
            return false;
    }

    bool NodeOperator::isEqual(){
        if(m_kindOp == NodeOperator::EQ)
            return true;
        else
            return false;
    }

    bool NodeOperator::isDelay(){
        if(m_kindOp == NodeOperator::DELAY)
            return true;
        else
            return false;
    }
}

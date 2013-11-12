/**
 *      @file     nodeOperator.cpp
 *      @brief    Represent an operator node used by data flow graph
 *  
 *      @version  0.1
 *      @date     12/11/2013
 *      @author   Nicolas "Kolazig" Simon (nicolas.simon88(at)gmail.com)
 */

#include "graph/dfg/nodeOperator.hpp"


namespace graph{
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

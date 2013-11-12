/**
 *      @file     nodeOperator.hpp
 *      @brief    Represent an operator node used by data flow graph
 *  
 *      @version  0.1
 *      @date     12/11/2013
 *      @author   Nicolas "Kolazig" Simon (nicolas.simon88(at)gmail.com)
 */

#ifndef __NODE_OPERATOR_HPP__
#define __NODE_OPERATOR_HPP__

#include "graph/dfg/nodeDFG.hpp"
#include <string>

namespace graph{
    /**
     *  @class NodeOperator
     *  @brief represent operator node into a data flow graph
     */
    class NodeOperator : public NodeDFG {
        public:
            enum eKindNodeOperator { ADD, SUB, MUL, DIV, EQ, DELAY };

        private:
            eKindNodeOperator m_kindOp; /**< @brief kind of the operator */
            unsigned int m_opid; /**< @brief operator id */

        public:
            /**
             * @brief constructor
             * @param kingOperator: kind of the operator
             * @param opid : opid of the graph into the graph
             */
            NodeOperator(graph::NodeOperator::eKindNodeOperator kindOperator, unsigned int opid):NodeDFG("operator"),m_kindOp(kindOperator),  m_opid(opid){}

            unsigned int getOperatorID(){return m_opid;} /**< @brief getter of the operator id */

            bool isAddition();       /**< @brief return true if the kind of the operator is ADD, false otherwise */
            bool isSubstraction();   /**< @brief return true if the kind of the operator is SUB, false otherwise */
            bool isMultiplication(); /**< @brief return true if the kind of the operator is MUL, false otherwise */
            bool isDivision();       /**< @brief return true if the kind of the operator is DIV, false otherwise */
            bool isEqual();          /**< @brief return true if the kind of the operator is EQ, false otherwise */
            bool isDelay();          /**< @brief return true if the kind of the operator is DELAY, false otherwise */
    
            std::string toString(); 
    };
}

#endif

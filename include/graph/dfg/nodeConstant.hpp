/**
 *      @file     nodeConstant.hpp
 *      @brief    Represent a constant node used by data flow graph
 *  
 *      @version  0.1
 *      @date     11/11/2013
 *      @author   Nicolas "Kolazig" Simon (nicolas.simon88(at)gmail.com)
 */


#ifndef __NODE_CONSTANT_HPP__
#define __NODE_CONSTANT_HPP__

#include "graph/dfg/nodeDFG.hpp"
#include "utils/tools.hpp"
#include <type_traits>

namespace graph{
    /**
     * @class NodeConstant
     * @brief represent constant data into a data flow graph
     *        T represent the value type represented by the node (float, double, ...)
     *
     */
    template <class T>
    class NodeConstant : public NodeDFG {
        static_assert(std::is_same<T, int>::value
                || std::is_same<T, float>::value
                || std::is_same<T, double>::value, "NodeConstant template class can only used int, double or float data type");

        private:
            T m_value; 

        public:
            NodeConstant(T value):NodeDFG("constant"), m_value(value){}

            std::string toString(){
                std::string ret(m_name);
                ret.append(": ").append(tools::numberToString(m_value));
                return ret;
            }
    };
}

#endif

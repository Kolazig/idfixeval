/**
 *      @file     nodeGFD.hpp
 *      @brief    Represent Data Flow Graph node
 *  
 *      @version  0.1
 *      @date     31/10/2013
 *      @author   Nicolas "Kolazig" Simon (nicolas.simon88(at)gmail.com)
 */

#ifndef __NODE_GFD_HPP__
#define __NODE_GFD_HPP__

#include <string>

namespace graph {

    /**
     * @class NodeGFD
     * @brief Implements vertex for a graph representing a data flow graph
     */
    class NodeGFD {
        private:
            unsigned int m_id; /**< @brief represent the internal id of the node */
            std::string m_name; /**< @brief the name of the node */


        public:
            /**
             * @brief constructor
             * @param id : id of the graph into the graph
             * @param name : the name of the node
             */
            NodeGFD(unsigned int id, std::string name) : m_id(id), m_name(name) {}
            NodeGFD(): m_id(0), m_name("") {}

            // GETTER
            unsigned int getID(){return m_id;} /**< @brief getter of the id */
            std::string getName(){return m_name;} /**< @brief getter of the name */

            // SETTER
            void setID(unsigned int id){m_id = id;} /**< @brief setter of the id */
            void setName(std::string name){m_name = name;} /**< @brief setter the the name */

            std::string toString(){return m_name;} /**< @brief just return the name */
    };
}

#endif

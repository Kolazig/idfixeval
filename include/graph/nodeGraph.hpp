/**
 *      @file     nodeGraph.hpp
 *      @brief    Represent a graph node. Base class use for all kind of node
 *  
 *      @version  0.1
 *      @date     11/11/2013
 *      @author   Nicolas "Kolazig" Simon (nicolas.simon88(at)gmail.com)
 */


#ifndef __NODEGRAPH_HPP__
#define __NODEGRAPH_HPP__


#include <string>

namespace graph{
    /**
     * @class NodeGraph
     * @brief Implements vertex for a graph representing a data flow graph
     */
    class NodeGraph {
        private:
            unsigned int m_id; /**< @brief represent the internal id of the node */

        protected:
            std::string m_name; /**< @brief the name of the node */

            /**
             * @brief constructor
             * @param id : id of the graph into the graph
             * @param name : the name of the node
             */
            NodeGraph(unsigned int id, std::string name) : m_id(id), m_name(name) {}
            NodeGraph(std::string name) : m_id(0), m_name(name) {}
            NodeGraph(): m_id(0), m_name("") {}

        public:
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



#ifndef __NODE_GFD__
#define __NODE_GFD__

#include <string>

class NodeGFD {
    public:
        NodeGFD(unsigned int id, std::string name) : m_id(id), m_name(name) {}
        NodeGFD(): m_id(0), m_name("") {}

        unsigned int getID(){return m_id;}
        std::string getName(){return m_name;}

        void setID(unsigned int id){m_id = id;}
        void setName(std::string name){m_name = name;}

        std::string toString(){
            return m_name;
        }
    private:
        unsigned int m_id;
        std::string m_name;
};

//class NodeGFDWriter {}
#endif

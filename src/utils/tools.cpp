/**
 *      @file     tools.cpp
 *      @brief    regroup many usefull function 
 *  
 *      @version  0.1
 *      @date     11/11/2013
 *      @author   nicolas "kolazig" simon (nicolas.simon88(at)gmail.com)
 */

#include "utils/tools.hpp"
#include <string>
#include <sstream>

namespace tools {
    template <class T> std::string numberToString(T number){
        return static_cast<std::ostringstream*> (&(std::ostringstream() << number))->str();
    }
    template std::string numberToString(float number);
    template std::string numberToString(double number);
    template std::string numberToString(int number);
    template std::string numberToString(unsigned int number);
}

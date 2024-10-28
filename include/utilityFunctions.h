#include <map>
#include <iostream>

#ifndef UTILITY_FUNCTIONS
#define UTILITY_FUNCTIONS
/*
This function has to be implemented in header file,
because it is templated.
*/


/**
 * @brief Utility fuction for printing any map.
 * 
 * @tparam type1 datatype of Key
 * @tparam type2 datatype of Value
 * @param map 
 */
template <typename type1, typename type2>
void print_map(std::map<type1, type2> map)
{
    for (auto pair : map)
    {
        std::cout << pair.first << " - " << pair.second << std::endl;
    }
}

#endif
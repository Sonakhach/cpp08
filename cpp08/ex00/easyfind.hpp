#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <iterator>

template <typename T>

typename T ::iterator  easyfind(T& x, int y)
{
    typename T::iterator it;

    it = std::find(x.begin(), x.end(),  y);
    it == x.end() ? std::cout << "Not found" << std::endl : std::cout << " found" << std::endl;
return(it);  
} 
 

#endif
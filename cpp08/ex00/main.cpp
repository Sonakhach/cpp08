#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    for (int i = 0; i < 5; i++)
    {
        vec.push_back(rand());
        std::cout << vec[i] << " " << std::endl;
    }

    std::vector<int>:: iterator itr;
    itr  = easyfind(vec, vec[0]);    
    return (0);
}
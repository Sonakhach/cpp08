#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template <class T>


class MutantStack: public std::stack<T>
{

public:
    typedef typename std::stack<T>::container_type::iterator iter;
    MutantStack()
    {};
    MutantStack(const MutantStack &obj) : std::stack<T>(obj)
    {};
    MutantStack &operator=(const MutantStack &obj)
    {
        if (this != &obj)
            this->stack::operator=(obj);
        return (*this);
    };
    ~MutantStack()
    {};
    iter begin()
    {
        return this->c.begin();
    };
    iter end()
    {
        return this->c.end();
    };
};


#endif

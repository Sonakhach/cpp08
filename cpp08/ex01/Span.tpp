#include "Span.hpp"
 
Span::Span()
{
    m_size = 0;
    std::cout<<"ctor"<<std::endl;
}
Span::Span(size_t N)
{
   m_size = N;
   std::cout<<"parametr ctor"<<std::endl;
}
Span::~Span()
{
    std::cout<<"dctor"<<std::endl;
}

Span::Span(const Span &obj)
{
    m_size = obj.m_size;
    std::cout<<"copy ctor"<<std::endl;
}

Span &Span::operator=(const Span &obj)
{
    if (this != &obj)
        m_size = obj.m_size;
        std::cout<<"assignment oper"<<std::endl;
    return (*this);
}
void Span::addNumber(size_t number)
{
    if (m_vec.size() == m_size)
        throw std::runtime_error("out site rang");
    m_vec.push_back(number);
}
Vector Span::geterVector(void)const
{
    return(m_vec);
}
size_t Span::geterSize(void)const
{
    return(m_size);
}
size_t Span::shortestSpan()
{
    if (m_vec.size() < 2)
        throw std::runtime_error("more  arguments are needed ");
    std::sort(m_vec.begin(), m_vec.end());
    size_t min = m_vec[1] - m_vec[0];
    for (size_t i = 1; i < m_size; i++)
    {
        if (m_vec[i+1]-m_vec[i] < min)
        {
           min = m_vec[i+1]-m_vec[i];
        }
    }
    return (min);
}

size_t Span::longestSpan()
{
    if (m_vec.size() < 2)
        throw std::runtime_error("more  arguments are needed");
    std::pair<Vector::iterator , Vector::iterator>   pair1;
    pair1 = std::minmax_element(m_vec.begin(), m_vec.end());
    return (*pair1.second - *pair1.first);
}
template <typename T>
void Span::fillSpan(T begin, T end)
{
    while (begin != end) 
    {
        Span::addNumber(*begin);
        ++begin;
    }
}
#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
typedef std::vector<size_t> Vector;
class Span
{
private:
    size_t m_size;
    Vector m_vec;

public:
    Span();
    Span(size_t N);
    Span(const Span &obj);
    Span &operator=(const Span &obj);
    ~Span();
    void addNumber(size_t number);
    size_t shortestSpan();
    size_t longestSpan();
    Vector geterVector(void)const;
    size_t geterSize(void)const;
    template <typename T>
    void fillSpan(T begin, T end);
};

#include "Span.tpp"


#endif
#include "Span.hpp"
int main()
{
    try
    {
        // {
        //     Span sp1 = Span(5);// ctor = parametr ctor
        //     Span sp ;//ctor
        //     Span obj = sp;//copy ctor
        //     Span a (sp);//copy ctor
        //     std::cout<< "inch vor ban"<<std::endl;
        // }
        std::srand(time(0));
        std::vector<int> v(1000);
        std::generate(v.begin(), v.end(), std::rand);
        Span sp = Span(1000);
        sp.fillSpan(v.begin(), v.end());
        // Span sp = Span(5);
        // sp.addNumber(6);
        // sp.addNumber(9);
        // sp.addNumber(17);
        // sp.addNumber(91);
        // sp.addNumber(10000);

        // {

        // std::cout << sp.geterSize() << std::endl;
        // std::vector<size_t> Vector = sp.geterVector();

        // for (int i = 0; i< 5; i++)
        // {
        //     std::cout << Vector[i] << std::endl;
        // }
        // }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
return 0;
}
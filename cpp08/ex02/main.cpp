#include "MutantStack.hpp"
int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iter it = mstack.begin();
MutantStack<int>::iter ite = mstack.end();
std::cout <<"_befor++_"<< *it << std::endl;
++it;
std::cout <<"_after++_"<< *it << std::endl;
--it;
std::cout <<"_--_"<< *it << std::endl;
while (it != ite)
{
std::cout <<"__"<< *it << std::endl;
++it;
}
std::stack<int> s(mstack);
return 0;
}
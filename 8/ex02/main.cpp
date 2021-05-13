#include "mutantstack.hpp"
#include <iostream>
#include <list>
int main()
{
	MutantStack<int, std::list<int> > m;
	std::stack<int, std::list<int> > stack_;
	m = stack_;
	for (int i = 0; i < 10; i++)
		m.push(i);
	MutantStack<int, std::list<int> >::iterator it = m.begin();
	for (; it != m.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::stack<int, std::list<int> > s(m);
}

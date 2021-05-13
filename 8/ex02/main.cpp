#include "mutantstack.hpp"
#include <iostream>
#include <list>
#include <vector>
int main()
{
	MutantStack<int, std::vector<int> > m;
	std::stack<int, std::vector<int> > stack_;
	m = stack_;
	for (int i = 0; i < 10; i++)
		m.push(i);
	MutantStack<int, std::vector<int> >::iterator it = m.begin();
	for (; it != m.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::stack<int, std::vector<int> > s(m);
}

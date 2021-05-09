#include "mutantstack.hpp"
#include <iostream>
int main()
{
	MutantStack<int> m;
	std::stack<int> stack_;
	m = stack_;
	for (int i = 0; i < 10; i++)
		m.push(i);
	MutantStack<int>::iterator it = m.begin();
	for (; it != m.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::stack<int> s(m);
}

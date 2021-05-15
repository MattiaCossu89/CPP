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
	std::cout << "MutantStack top " << m.top() << std::endl;
	std::cout << "Stack (copy costructor) top " << s.top() << std::endl;
	s.pop();
	std::cout << "MutantStack top after pop on stack copy " << m.top() << std::endl;
	std::cout << "Stack (copy costructor) top after pop " << s.top() << std::endl;
	std::list<int> l;
	for (int i = 0; i < 10; i++)
		l.push_back(i);

	it = m.begin();
	std::list<int>::iterator itl = l.begin();
	for (; it != m.end() && itl != l.end(); it++)
	{
		std::cout << "MutantStack iterator :" << *it << std::endl << "List Iterator: " << *itl << std::endl << std::endl;
		itl++;
	}
}

#ifndef MUTANTSTACKS_HPP
#define MUTANTSTACKS_HPP

#include <deque>
#include <stack>

template<class T>
class stack_iterator
{
	private:
		typedef typename std::deque<T>::reverse_iterator iter;
		iter it;
	public:
		stack_iterator();
		stack_iterator(const stack_iterator &in);
		stack_iterator(const iter &in);
		stack_iterator &operator=(const stack_iterator &copy);
		bool operator==(const stack_iterator &it) const;
		bool operator!=(const stack_iterator &it) const;
		stack_iterator &operator++();
		const stack_iterator operator++(int);
		stack_iterator &operator--();
		const stack_iterator operator--(int);
		T &operator*();
};

template<class T>
class MutantStack : public std::stack<T>
{
	public:

		typedef typename ::stack_iterator<T>	iterator;
		MutantStack();
		MutantStack(const std::stack<T> &copy);
		MutantStack(const MutantStack & copy);
		MutantStack &operator=(const MutantStack &copy);

		iterator begin();
		iterator end();
};

#endif

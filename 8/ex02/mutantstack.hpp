#ifndef MUTANTSTACKS_HPP
#define MUTANTSTACKS_HPP

#include <deque>
#include <stack>

template<class T, class _Container = std::deque<T> >
class stack_iterator
{
	private:
		typedef typename _Container::iterator iter;
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

template<class T, class _Container = std::deque<T> >
class MutantStack : public std::stack<T, _Container>
{
	public:

		typedef typename ::stack_iterator<T, _Container>	iterator;
		MutantStack();
		MutantStack(const std::stack<T, _Container> &copy);
		MutantStack(const MutantStack & copy);
		MutantStack &operator=(const MutantStack &copy);

		iterator begin();
		iterator end();
};



template<class T, class _Container>
stack_iterator<T, _Container>::stack_iterator()
{

}

template<class T, class _Container>
stack_iterator<T, _Container>::stack_iterator(const stack_iterator<T, _Container> &in)
{
	it = in.it;
}

template<class T, class _Container>
stack_iterator<T, _Container>::stack_iterator(const iter &in)
{
	it = in;
}

template<class T, class _Container>
stack_iterator<T, _Container> &stack_iterator<T, _Container>::operator=(const stack_iterator<T, _Container> &copy)
{
	it = copy.it;
}

template<class T, class _Container>
bool stack_iterator<T, _Container>::operator==(const stack_iterator<T, _Container> &it) const
{
	return (this->it == it.it);
}

template<class T, class _Container>
bool stack_iterator<T, _Container>::operator!=(const stack_iterator<T, _Container> &it) const
{
	return !(this->it == it.it);
}

template<class T, class _Container>
stack_iterator<T, _Container> &stack_iterator<T, _Container>::operator++()
{
	it++;
	return (*this);
}

template<class T, class _Container>
const stack_iterator<T, _Container> stack_iterator<T, _Container>::operator++(int)
{
	stack_iterator<T, _Container> n = *this;
	it++;
	return (n);
}

template<class T, class _Container>
stack_iterator<T, _Container> &stack_iterator<T, _Container>::operator--()
{
	it--;
	return (*this);
}

template<class T, class _Container>
const stack_iterator<T, _Container> stack_iterator<T, _Container>::operator--(int)
{
	stack_iterator<T, _Container> n = *this;
	it--;
	return (n);
}

template<class T, class _Container>
T &stack_iterator<T, _Container>::operator*()
{
	return (*it);
}


template<class T, class _Container>
typename MutantStack<T, _Container>::iterator MutantStack<T, _Container>::begin()
{
	return this->c.begin();
}

template<class T, class _Container>
typename MutantStack<T, _Container>::iterator MutantStack<T, _Container>::end()
{
	return this->c.end();
}
template<class T, class _Container>
MutantStack<T, _Container>::MutantStack() : std::stack<T, _Container>()
{

}

template<class T, class _Container>
MutantStack<T, _Container>::MutantStack(const std::stack<T, _Container> &copy) : std::stack<T, _Container>(copy)
{

}

template<class T, class _Container>
MutantStack<T, _Container>::MutantStack(const MutantStack<T, _Container> & copy) : std::stack<T, _Container>(copy)
{

}

template<class T, class _Container>
MutantStack<T, _Container> &MutantStack<T, _Container>::operator=(const MutantStack<T, _Container> &copy)
{
	this->std::stack<T, _Container>::operator=(copy);
	return (*this);
}


#endif

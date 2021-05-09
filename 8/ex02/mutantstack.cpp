#include "mutantstack.hpp"


template<class T>
stack_iterator<T>::stack_iterator()
{

}

template<class T>
stack_iterator<T>::stack_iterator(const stack_iterator<T> &in)
{
	it = in.it;
}

template<class T>
stack_iterator<T>::stack_iterator(const iter &in)
{
	it = in;
}

template<class T>
stack_iterator<T> &stack_iterator<T>::operator=(const stack_iterator<T> &copy)
{
	it = copy.it;
}

template<class T>
bool stack_iterator<T>::operator==(const stack_iterator<T> &it) const
{
	return (this->it == it.it);
}

template<class T>
bool stack_iterator<T>::operator!=(const stack_iterator<T> &it) const
{
	return !(this->it == it.it);
}

template<class T>
stack_iterator<T> &stack_iterator<T>::operator++()
{
	it++;
	return (*this);
}

template<class T>
const stack_iterator<T> stack_iterator<T>::operator++(int)
{
	stack_iterator<T> n = *this;
	it++;
	return (n);
}

template<class T>
stack_iterator<T> &stack_iterator<T>::operator--()
{
	it--;
	return (*this);
}

template<class T>
const stack_iterator<T> stack_iterator<T>::operator--(int)
{
	stack_iterator<T> n = *this;
	it--;
	return (n);
}

template<class T>
T &stack_iterator<T>::operator*()
{
	return (*it);
}


template<class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.rbegin();
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.rend();
}
template<class T>
MutantStack<T>::MutantStack() : std::stack<T>()
{

}

template<class T>
MutantStack<T>::MutantStack(const std::stack<T> &copy) : std::stack<T>(copy)
{

}

template<class T>
MutantStack<T>::MutantStack(const MutantStack<T> & copy) : std::stack<T>(copy)
{

}

template<class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &copy)
{
	this->std::stack<T>::operator=(copy);
	return (*this);
}

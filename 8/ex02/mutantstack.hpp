#ifndef MUTANTSTACKS_HPP
#define MUTANTSTACKS_HPP

#include <deque>
#include <stack>

template<class T, class Container>
class __stack_iterator
{
	private:
		typedef typename Container::reverse_iterator iter;
		iter it;
	public:
		__stack_iterator();
		__stack_iterator(const __stack_iterator &in);
		__stack_iterator(const iter &in);
		__stack_iterator &operator=(const __stack_iterator &copy);
		bool operator==(const __stack_iterator &it) const;
		bool operator!=(const __stack_iterator &it) const;
		__stack_iterator &operator++();
		const __stack_iterator operator++(int);
		__stack_iterator &operator--();
		const __stack_iterator operator--(int);
		T &operator*();
};

template<class T, class Container>
__stack_iterator<T, Container>::__stack_iterator()
{

}

template<class T, class Container>
__stack_iterator<T, Container>::__stack_iterator(const __stack_iterator<T, Container> &in)
{
	it = in.it;
}

template<class T, class Container>
__stack_iterator<T, Container>::__stack_iterator(const iter &in)
{
	it = in;
}

template<class T, class Container>
__stack_iterator<T, Container> &__stack_iterator<T, Container>::operator=(const __stack_iterator<T, Container> &copy)
{
	it = copy.it;
}

template<class T, class Container>
bool __stack_iterator<T, Container>::operator==(const __stack_iterator<T, Container> &it) const
{
	it == it.it;
}

template<class T, class Container>
bool __stack_iterator<T, Container>::operator!=(const __stack_iterator<T, Container> &it) const
{
	it != it.it;
}

template<class T, class Container>
__stack_iterator<T, Container> &__stack_iterator<T, Container>::operator++()
{
	it++;
	return (*this);
}

template<class T, class Container>
const __stack_iterator<T, Container> __stack_iterator<T, Container>::operator++(int)
{
	__stack_iterator<T, Container> n = *this;
	it++;
	return (n);
}

template<class T, class Container>
__stack_iterator<T, Container> &__stack_iterator<T, Container>::operator--()
{
	it--;
	return (*this);
}

template<class T, class Container>
const __stack_iterator<T, Container> __stack_iterator<T, Container>::operator--(int)
{
	__stack_iterator<T, Container> n = *this;
	it--;
	return (n);
}

template<class T, class Container>
T &__stack_iterator<T, Container>::operator*()
{
	return (*it);
}

template<class _Tp, class _Container = std::deque<_Tp> >
class MutantStack : public std::stack<_Tp>
{
	public:
		typedef _Container									container_type;
		typedef typename container_type::value_type			value_type;
		typedef typename container_type::reference			reference;
		typedef typename container_type::const_reference	const_reference;
		typedef typename container_type::size_type			size_type;
		typedef __stack_iterator<_Tp, _Container>			iterator;
		bool begin();
		iterator end();
};

template<class _Tp, class _Container>
bool MutantStack<_Tp, _Container>::begin()
{
	return c.rbegin();
}

#endif

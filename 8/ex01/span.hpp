#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <limits>

class Span
{
	private:
		unsigned int _capacity;
		unsigned int _size;
		int _max;
		int _min;
		int *_arr;
		Span();
	public:
		class MaxCapacityReachedException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "Max Capacity Reached";
			}
		};
		class NoSpanFoundException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "No Span aviable";
			}
		};
		Span(unsigned int capacity);
		Span(const Span & copy);
		Span &operator=(const Span & copy);
		~Span();
		void	addNumber(int num);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
};

Span::Span(unsigned int capacity) : _capacity(capacity), _size(0), _max(INT32_MIN), _min(INT32_MAX)
{
	_arr = new int[capacity];
}

Span::Span(const Span & copy)
{
	_size = copy._size;
	_capacity = copy._capacity;
	_arr = new int[_capacity];
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = copy._arr[i];
}

Span &Span::operator=(const Span & copy)
{
	if (this == &copy)
		return (*this);
	if (_arr)
		delete [] _arr;
	_size = copy._size;
	_capacity = copy._capacity;
	_arr = new int[_capacity];
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = copy._arr[i];
	return (*this);
}

Span::~Span()
{
	delete [] _arr;
	_arr = 0;
	_size = 0;
	_capacity = 0;
}

void	Span::addNumber(int num)
{
	if (_size == _capacity)
		throw MaxCapacityReachedException();
	_arr[_size] = num;
	if (num > _max)
		_max = num;
	if (num < _min)
		_min = num;
	_size++;
}

unsigned int Span::shortestSpan() const
{
	return (1);
}

unsigned int Span::longestSpan() const
{
	unsigned int span;
	if (_size < 2)
		throw NoSpanFoundException();
	return (_max - _min);
}

#endif

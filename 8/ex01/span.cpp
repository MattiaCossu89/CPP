#include "span.hpp"

Span::Span(unsigned int capacity) : _capacity(capacity), _size(0), _max(INT_MIN), _min(INT_MAX)
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

unsigned int Span::size() const
{
	return (_size);
}

unsigned int Span::capacity() const
{
	return (_capacity);
}

unsigned int Span::shortestSpan() const
{
	unsigned int diff = UINT_MAX;
	long int diff_;
	for (unsigned int i = 0; i < _size - 1 && diff > 0; i++)
		for (unsigned int j = i + 1; j < _size && diff > 0; j++)
			if (labs(diff_ = _arr[i] - _arr[j]) < diff)
				diff = labs(diff_);
	return (diff);
}

unsigned int Span::longestSpan() const
{
	if (_size < 2)
		throw NoSpanFoundException();
	return (_max - _min);
}

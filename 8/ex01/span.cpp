#include "span.hpp"

Span::Span(unsigned int capacity) : _capacity(capacity), _size(0), _max(INT_MIN), _min(INT_MAX)
{
	_arr = new int[capacity];
}

Span::Span(const Span & copy)
{
	_size = copy._size;
	_capacity = copy._capacity;
	_max = copy._max;
	_min = copy._min;
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
	_max = copy._max;
	_min = copy._min;
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

void	Span::addNumbers(int bnum, int endnum, int step)
{
	if (((bnum > endnum) && (step > 1)) || step == 0)
		throw InvalidAddingParams();
	if ((bnum < endnum) && (step < 0))
		throw InvalidAddingParams();
	if (_size + (abs(endnum - bnum) / abs(step)) - 1 >= _capacity)
		throw MaxCapacityReachedException();
	for (int i = bnum; step > 0 ? i < endnum : i > endnum; i += step)
		addNumber(i);
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
	if (_size < 2)
		throw NoSpanFoundException();
	unsigned int diff = UINT_MAX;
	long int diff_;
	int  *arr = new int[_size];
	for (unsigned int i = 0; i < _size; i++)
		arr[i] = _arr[i];
	std::sort(arr, &arr[_size]);
	for (unsigned int j = 0; j < _size - 1 && diff > 0; ++j)
		if (labs(diff_ = _arr[j] - _arr[j + 1]) < diff)
			diff = labs(diff_);

	return (diff);
	return (diff);
}

unsigned int Span::longestSpan() const
{
	if (_size < 2)
		throw NoSpanFoundException();
	return (_max - _min);
}

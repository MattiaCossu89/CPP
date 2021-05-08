#ifndef SPAN_HPP
#define SPAN_HPP

#include <limits.h>
#include <stdlib.h>

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
		unsigned int size() const;
		unsigned int capacity() const;
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
};

#endif

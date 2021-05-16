#ifndef SPAN_HPP
#define SPAN_HPP

#include <limits.h>
#include <stdlib.h>

#include <exception>
#include <limits>
#include <algorithm>
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
		class InvalidAddingParams : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "Invalid Adding Params";
			}
		};
		Span(unsigned int capacity);
		Span(const Span & copy);
		Span &operator=(const Span & copy);
		~Span();
		void	addNumber(int num);
		void	addNumbers(int bnum, int endnum, int step = 1);
		unsigned int size() const;
		unsigned int capacity() const;
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
};

#endif

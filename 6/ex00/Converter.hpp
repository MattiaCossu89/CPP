#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <math.h>

#include <iostream>
#include <sstream>

class Converter
{
	private:
		Converter();
	protected:
		double _number;
	public:
		Converter(const std::string &num);
		virtual ~Converter();
		virtual void	displayConversion() const = 0;
};

#endif

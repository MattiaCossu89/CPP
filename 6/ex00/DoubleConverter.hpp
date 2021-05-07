#ifndef DOUBLECONVERTER_HPP
#define DOUBLECONVERTER_HPP

#include "Converter.hpp"

#include <math.h>

#include <iostream>
#include <sstream>

class DoubleConverter : public Converter
{
	private:
		DoubleConverter();
	public:
		DoubleConverter(const std::string &num);
		double	getNum() const;
		void	displayConversion() const;
		virtual ~DoubleConverter();
};

#endif

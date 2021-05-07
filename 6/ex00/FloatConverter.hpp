#ifndef FLOATCONVERTER_HPP
#define FLOATCONVERTER_HPP

#include "Converter.hpp"

class FloatConverter : public Converter
{
	private:
		FloatConverter();
	public:
		FloatConverter(const std::string &num);
		float	getNum() const;
		void	displayConversion() const;
		virtual ~FloatConverter();

};

#endif

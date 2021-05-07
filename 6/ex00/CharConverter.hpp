#ifndef CHARCONVERTER_HPP
#define CHARCONVERTER_HPP

#include "Converter.hpp"

class CharConverter : public Converter
{
	private:
		CharConverter();
	public:
		CharConverter(const std::string &num);
		char	getChar() const;
		void	displayConversion() const;
		virtual ~CharConverter();
};

#endif

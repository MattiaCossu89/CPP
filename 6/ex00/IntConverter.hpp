#ifndef INTCONVERTER_HPP
#define INTCONVERTER_HPP

#include "Converter.hpp"

class IntConverter : public Converter
{
	private:
		IntConverter();
	public:
		IntConverter(const std::string &num);
		int	getNum() const;
		void	displayConversion() const;
		virtual ~IntConverter();

};

#endif

#include "CharConverter.hpp"

CharConverter::CharConverter(const std::string &num) : Converter(num) {}


char	CharConverter::getChar() const
{
	return static_cast<char>(_number);
}

void	CharConverter::displayConversion() const
{
	std::cout << "char: ";
	if (isnan(_number))
		std::cout << "impossible";
	else if (isinf(_number))
		std::cout << "impossible";
	else if (isprint(static_cast<char>(_number)))
		std::cout << static_cast<char>(_number);
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

CharConverter::~CharConverter()
{
}

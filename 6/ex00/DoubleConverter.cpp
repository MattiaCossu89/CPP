#include "DoubleConverter.hpp"

DoubleConverter::DoubleConverter(const std::string &num) : Converter(num)
{
}

double	DoubleConverter::getNum() const
{
	return (_number);
}

void	DoubleConverter::displayConversion() const
{
	std::cout << "double: ";
	if (isnan(_number))
		std::cout << "nan";
	else if (isinf(_number))
		_number < 0 ? std::cout << "-inf" : std::cout << "+inf";
	else if ((_number) - floor((_number)) > 0)
		std::cout << (_number);
	else
		std::cout << (_number) << ".0";
	std::cout << std::endl;
}

DoubleConverter::~DoubleConverter()
{
}

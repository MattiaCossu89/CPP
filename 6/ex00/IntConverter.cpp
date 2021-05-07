#include "IntConverter.hpp"

IntConverter::IntConverter(const std::string &num) : Converter(num) {}

int	IntConverter::getNum() const
{
	return static_cast<int>(_number);
}

void	IntConverter::displayConversion() const
{
	std::cout << "int: ";
	if (isnan(_number))
		std::cout << "impossible";
	else if (isinf(_number))
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(_number);
	std::cout << std::endl;
}

IntConverter::~IntConverter()
{
}

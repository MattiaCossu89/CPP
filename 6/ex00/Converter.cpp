#include "Converter.hpp"

Converter::Converter(const std::string &num)
{
	_number = atof(num.c_str());
}

Converter::~Converter() {}

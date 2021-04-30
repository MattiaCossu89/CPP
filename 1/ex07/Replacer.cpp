#include "Replacer.hpp"


void	Replacer::replace()
{
	std::string new_str;
	std::string temp;
	for (int i = 0; i < _str.length(); i++)
	{
		int j = 0;
		for(; j < _s1.length() && _s1[j] == _str[i + j]; j++);
		if (j == _s1.length())
		{
			new_str +=
		}
	}
}
Replacer::Replacer(const std::string &str, const std::string &s1, const std::string &s2) : _old_str(str), _str(str), _s1(s1), _s2(s2)
{
	this->replace();
}
std::string Replacer::getOldString()
{

}
std::string Replacer::getReplacedString()
{

}

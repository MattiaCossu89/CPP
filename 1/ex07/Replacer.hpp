#pragma once
#include <string>
class Replacer
{
	private:
		std::string			_old_str;
		std::string			_str;
		const std::string	&_s1;
		const std::string	&_s2;
		Replacer();
		void	replace();
	public:
		Replacer(const std::string &str, const std::string &s1, const std::string &s2);
		std::string getOldString();
		std::string getReplacedString();
};

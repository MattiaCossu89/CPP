#include "CharConverter.hpp"
#include "DoubleConverter.hpp"
#include "FloatConverter.hpp"
#include "IntConverter.hpp"

int main(int ac, const char **av)
{
	if (ac != 2)
	{
		std::cout << "Invalid Arguments" << std::endl;
		return (1);
	}
	CharConverter cc(av[1]);
	DoubleConverter dc(av[1]);
	FloatConverter fc(av[1]);
	IntConverter ic(av[1]);
	cc.displayConversion();
	ic.displayConversion();
	fc.displayConversion();
	dc.displayConversion();
}

#include "Classes.hpp"

int main()
{
	srand(time(NULL));
	Base *tmp;
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl;
		tmp = generate();
		identify_from_pointer(tmp);
		identify_from_reference(*tmp);
		std::cout << std::endl << "---------------------" << std::endl;
		delete tmp;
	}
}

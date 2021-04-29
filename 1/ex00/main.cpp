#include "Pony.hpp"

int main(void)
{
	ponyOnStack();
	std::cout << "pony on stack finish" << std::endl;
	ponyOnHeap();
	std::cout << "pony on heap finish" << std::endl;
}

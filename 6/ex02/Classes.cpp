#include "Classes.hpp"

Base::~Base() {}


Base *generateA()
{
	return new A();
}

Base *generateB()
{
	return new B();
}

Base *generateC()
{
	return new C();
}

typedef struct	base_s
{
	std::string name;
	Base *(*fun)();
}				base_t;

Base *generate()
{
	base_t base[3] = {{GREEN "A" NRM, &generateA}, {YELLOW "B" NRM, &generateB}, {BLUE "C" NRM, &generateC}};
	int i = rand() % 3;
	std::cout << "Generated object " << base[i].name << std::endl;
	return base[i].fun();
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "From Pointer: Type" GREEN " A" NRM << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "From Pointer: Type" YELLOW" B" NRM << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "From Pointer: Type" BLUE " C" NRM << std::endl;
}

void identify_from_reference(Base & p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "From Reference: Type" GREEN " A" NRM << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "From Reference: Type" YELLOW" B" NRM << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "From Reference: Type" BLUE " C" NRM << std::endl;
}

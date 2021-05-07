#ifndef CLASSES_HPP
#define CLASSES_HPP

#include "colors.hpp"

#include <stdlib.h>

#include <ctime>
#include <iostream>
#include <string>

class Base
{
	public:
		virtual ~Base();
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base *generate();

void identify_from_pointer(Base * p);

void identify_from_reference(Base & p);

#endif
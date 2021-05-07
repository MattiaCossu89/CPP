#ifndef ITER_HPP
#define ITER_HPP

#include <string>

template<class T>
void iter(T *arr, size_t size, void (*fun)(T&))
{
	for (size_t i = 0; i < size; i++)
		fun(arr[i]);
}

#endif

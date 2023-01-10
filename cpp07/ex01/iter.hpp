# ifndef ITER_HPP
#define ITER_HPP
#include <string>
#include <iostream>

template <typename T>
void iter(T *array, int array_lenght, void(*f)(T const &))
{
    for (int i = 0; i < array_lenght; i++)
        f(array[i]);
}
#endif
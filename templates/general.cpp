#include "general.h"
#include <iostream>
#include <string>

template <typename T>
General<T>::General(T&& t)
  : d_t{t}
{
}

template <typename T>
void General<T>::print()
{
    std::cout << d_t << std::endl;
}

// template instantiation
template class General<int>;



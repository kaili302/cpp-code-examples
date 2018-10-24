#pragma once

#include <string>
template <typename T>
class General
{
    T d_t;
  public:
    General(T&& t);
    void print();
};

template class General<std::string>;

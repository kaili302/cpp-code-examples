#pragma once

#include <memory>

class Outter
{
  private:
    class Inner;
    std::unique_ptr<Inner> inner;
  public:
    Outter();

    void test();

    ~Outter();
    // using pimpl-idiom requires a destructor and
    // it must be defined in cpp file if using

    // https://howardhinnant.github.io/incomplete.html
};

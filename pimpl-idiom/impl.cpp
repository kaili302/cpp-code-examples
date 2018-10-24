#include <iostream>

#include "impl.h"

class Outter::Inner{
  public:
    void print()
    {
        std::cout << "hello!" << std::endl;
    }
};

Outter::Outter(){
    inner = std::make_unique<Inner>();
}

Outter::~Outter(){

}

void Outter::test()
{
    inner->print();
}

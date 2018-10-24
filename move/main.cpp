#include <iostream>
#include <cstring>

void print(int&& a)
{
    std::cout << "rprint: " << a << std::endl;
}

void print(const int& a)
{
    std::cout << "lprint: " << a << std::endl;
}

void test(int&& num)
{
    print(num);                     // lprint
    print(std::forward<int>(num));  // rprint
}


int main()
{
    test(23);
}

#include<iostream>

consteval int goo(int c)    // c is not constexpr, and cannot be used in constant expressions
{
    return c;
}


int main()
{
    constexpr int a { 5 };

    std::cout << goo(a); // okay: constant expression a can be used as argument to constexpr function foo()

    return 0;
}

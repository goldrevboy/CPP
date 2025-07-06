#include <iostream>
#include <string>

int& getProgramName()
{
    static int a{5};
    a++;
    return a;
}

int main()
{

    int& n1 = getProgramName();
    int n2 = getProgramName();
    const int& n3 = getProgramName();
    int& n4 = getProgramName();
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    std::cout << "n3: " << n3 << std::endl;
    std::cout << "n4: " << n4 << std::endl;

    return 0;
}

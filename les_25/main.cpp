#include <iostream>
#include <string_view>

class A{
public:
    virtual std::string_view getName() const { return "A"; }
    ~A() { std::cout << "A destructor called\n"; }
};

class B : public A {
public:
    ~B() { std::cout << "B destructor called\n"; }
    virtual std::string_view getName() const override  { return "B"; }
};

class C : public B
{
public:
    std::string_view getName() const override { return "C"; }
};  

int main()
{
    B* b{ new B};
    // A* a{b};
    delete b;

    return 0;
}

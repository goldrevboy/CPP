#include<iostream>

namespace Foo{
    void display(){
        std::cout << "Hello from Foo!" << std::endl;
    }
}

int main() {
    Foo::display();
    return 0;
}

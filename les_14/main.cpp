#include<iostream>

class cp
{
    int x;
    int y;
public:
    cp() =default;
    cp(int x, int y) : x(x), y(y) {}
    void print() const {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

int main(){
    cp c1 {2,3};
    cp(c2);
    std::cout << "Size of cp: " << sizeof(c1) << std::endl;
    return 0;
}

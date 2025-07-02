#include<iostream>

int add(int a,int b) {
    std::cout << "you are in add(int, int)" << std::endl;
    return a + b;
}

template< typename T>
T add( T x, T y) {
    std::cout << "you are in add(T, T)" << std::endl;
    return x + y;
}

template< int N>
void prt(){
if(N>0) std::cout << "positive" << std::endl;
// else if(N<0) std::cout << "negative" << std::endl;
// else std::cout << "zero" << std::endl;
}
int main() {
    
    int a = 5, b = 10;
    double c = 3.5, d = 2.2;
    std::cout << add<int>(a,c) << std::endl; // Output: 15
    std::cout << add(a,b) << std::endl; // Output: 15
    // prt<a>(); // throuws an error
    return 0;
}

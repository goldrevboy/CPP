#include<iostream>

void chck(int x){
    std::cout << &x << std::endl;
}

int main(){

    int x = 10;
    std::cout << &x << std::endl;
    chck(x);
    return 0;
}

// to check if the stack grows down or up

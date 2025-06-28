#include<iostream>

int ct = 0;

void di(){
    ct++;
    if(ct!=3) di();
}

int main(){

    di();
    std::cout << "Hello, World!" << std::endl;

    for(int i = 0; i < 5; ++i) {
        std::cout << "Iteration: " << i << std::endl;
        for(int j = 0; j < 3; ++j) {
            std::cout << "Nested Loop Iteration: " << j << std::endl;
        }
    }

    
    return 0;
}

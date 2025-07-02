#include<iostream>

int main(){
    
    int x{}; std::cin >>x;
    if(x < 0){
        std::cout << "Negative number entered. Please try again.\n";
        goto tryagain; // Using goto to repeat input
    }
    tryagain:
    std::cout << "You entered: " << x << "\n";
    return 0;
}

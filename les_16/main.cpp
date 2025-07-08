#include<iostream>
#include<vector>

int main() {
    const std::vector<int> v{1, 2, 3, 4, 5}; // Initializing a vector with a list of values
    std:: cout << v[9] << std::endl; // Accessing the 10th element, which is out of range and will throw an exception
    // v.push_back(6); // This line would cause a compilation error because v is const
    return 0;
}

#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
// Your code here
    bool first_bit = bits[0]; // Store the first bit
    bits <<= 1;                // Shift all bits to the left
    bits[3] = first_bit;      // Set the last bit to the original first bit
    return bits;              // Return the modified bitset
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}

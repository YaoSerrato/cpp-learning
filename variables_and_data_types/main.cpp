#include <iostream>

int main()
{
    int number1 = 15;       // decimal
    int number2 = 017;      // octal (with a 0 at the beginning)
    int number3 = 0x0F;     // hexadecimal
    int number4 = 0b1111;   // binary (possible since C++14)

    std::cout << "Number 1 is: " << number1 << std::endl;
    std::cout << "Number 2 is: " << number2 << std::endl;
    std::cout << "Number 3 is: " << number3 << std::endl;
    std::cout << "Number 4 is: " << number4 << std::endl;

    return 0;
}
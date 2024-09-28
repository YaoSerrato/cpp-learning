#include <iostream>
#include <iomanip>

int main()
{
    /* declaration, initialization and size */
    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    std::cout << "float number " << number1 << " is of size " << sizeof(float) << " bytes." << std::endl;
    std::cout << "double number " << number2 << " is of size " << sizeof(double) << " bytes." << std::endl;
    std::cout << "long double number " << number3 << " is of size " << sizeof(long double) << " bytes." << std::endl;

    std::cout << std::setprecision(20);
    std::cout << "number1 is :" << number1 << std::endl;
    std::cout << "number2 is :" << number2 << std::endl;
    std::cout << "number3 is :" << number3 << std::endl;

    std::cout << "-----------------------------" << std::endl;

    /* float problems */
    float number4 {192400023.0f};
    double number5 {192400023.0};
    std::cout << number4 << std::endl;
    std::cout << number5 << std::endl;

    std::cout << "-----------------------------" << std::endl;

    /* scientific notation */
    double number_a1 {192400023};
    double number_a2 {1.92400023e8};
    double number_a3 {1.924e8};
    double number_a4 {0.00000000003498};
    double number_a5 {3.498e-11};

    std::cout << number_a1 << std::endl;
    std::cout << number_a2 << std::endl;
    std::cout << number_a3 << std::endl;
    std::cout << number_a4 << std::endl;
    std::cout << number_a5 << std::endl;

    std::cout << "-----------------------------" << std::endl;

    /* infinity */
    double number_x1{5.6};
    double number_x2{};
    double number_x3{};

    // infinity
    double result {number_x1/number_x2};
    std::cout << number_x1 << " / " << number_x2 << " yields " << result << std::endl;
    std::cout << result << " + " << number_x1 << " yields " << result + number_x1 << std::endl;

    //NaN
    result = number_x2/number_x3;
    std::cout << number_x2 << " / " << number_x3 << " yields " << result << std::endl;

    return 0;
}

// left at 45:17
#include <iostream>

/* libraries for output formating */
#include <ios>
#include <iomanip>

/* libraries for numeric limits */
/* https://en.cppreference.com/w/cpp/types/numeric_limits */
#include <limits>

/* libraries for math operations */
#include <cmath>


int main()
{
    /* --------------------------------------------------------------------------------------------------------------
        Numeric limits.
    -------------------------------------------------------------------------------------------------------------- */
    int column_width {18};

    std::cout << std::left;
    std::cout << std::setw(column_width) << "DATA TYPE" << std::setw(column_width) << "MIN"
                                                    << std::setw(column_width) << "LOWEST"
                                                    << std::setw(column_width) << "MAX" << std::endl;

    std::cout << std::setw(column_width) << "short" << std::setw(column_width) << std::numeric_limits<short>::min()
                                                    << std::setw(column_width) << std::numeric_limits<short>::lowest()
                                                    << std::setw(column_width) << std::numeric_limits<short>::max() << std::endl;

    std::cout << std::setw(column_width) << "unsigned short" << std::setw(column_width) << std::numeric_limits<unsigned short>::min()
                                                    << std::setw(column_width) << std::numeric_limits<unsigned short>::lowest()
                                                    << std::setw(column_width) << std::numeric_limits<unsigned short>::max() << std::endl;

    std::cout << std::setw(column_width) << "int" << std::setw(column_width) << std::numeric_limits<int>::min()
                                                    << std::setw(column_width) << std::numeric_limits<int>::lowest()
                                                    << std::setw(column_width) << std::numeric_limits<int>::max() << std::endl;

    std::cout << std::setw(column_width) << "unsigned int" << std::setw(column_width) << std::numeric_limits<unsigned int>::min()
                                                    << std::setw(column_width) << std::numeric_limits<unsigned int>::lowest()
                                                    << std::setw(column_width) << std::numeric_limits<unsigned int>::max() << std::endl;

    std::cout << std::setw(column_width) << "float" << std::setw(column_width) << std::numeric_limits<float>::min()
                                                    << std::setw(column_width) << std::numeric_limits<float>::lowest()
                                                    << std::setw(column_width) << std::numeric_limits<float>::max() << std::endl;

    std::cout << std::setw(column_width) << "double" << std::setw(column_width) << std::numeric_limits<double>::min()
                                                    << std::setw(column_width) << std::numeric_limits<double>::lowest()
                                                    << std::setw(column_width) << std::numeric_limits<double>::max() << std::endl;

    std::cout << std::setw(column_width) << "long double" << std::setw(column_width) << std::numeric_limits<long double>::min()
                                                    << std::setw(column_width) << std::numeric_limits<long double>::lowest()
                                                    << std::setw(column_width) << std::numeric_limits<long double>::max() << std::endl;

    std::cout << std::endl;
    std::cout << "int is signed : " << std::numeric_limits<int>::is_signed << std::endl;
    std::cout << "int digits : " << std::numeric_limits<int>::digits << std::endl;


    /* --------------------------------------------------------------------------------------------------------------
        Math functions.
        std::floor(), std::ceil(), std::abs(), std::cos(), std::exp(),
        std::log(), std::pow(), std::sqrt(), std::round(), std::sin(), std::tan()

        https://en.cppreference.com/w/cpp/header/cmath
    -------------------------------------------------------------------------------------------------------------- */

    // std::floor(), std::ceil()
    double db1 {7.7};
    std::cout << std::endl;
    std::cout << db1 << " -> " << std::floor(db1) << std::endl;
    std::cout << db1 << " -> " << std::ceil(db1) << std::endl;

    // std::abs()
    double db2 {-45.355};
    std::cout << std::endl;
    std::cout << db2 << " -> " << std::abs(db2) << std::endl;

    // std::exp()
    double db3 {10};
    std::cout << std::endl;
    std::cout << db3 << " -> " << std::exp(db3) << std::endl;

    // std::pow()
    std::cout << std::endl;
    std::cout << std::pow(3, 4) << std::endl;

    // std::log(), std::log2()
    std::cout << std::endl;
    std::cout << "2 ^ 3 = " << std::pow(2, 3) << ". log2(8) = " << std::log2(8) << std::endl;
    std::cout << "e ^ 4 = " << std::exp(4) << ". log(e ^ 4) = " << std::log(std::exp(4)) << std::endl;

    // std::sqrt(), std::round()
    std::cout << std::endl;
    std::cout << "sqrt(81) = " << std::sqrt(81) << std::endl;
    std::cout << "round(4.49) = " << std::round(4.49) << std::endl;
    std::cout << "round(4.50) = " << std::round(4.50) << std::endl;
    std::cout << "round(4.51) = " << std::round(4.51) << std::endl;
    std::cout << std::endl;


    /* --------------------------------------------------------------------------------------------------------------
        Weird integral types.
        Integral types less than 4 bytes in size (e.g. short int, char) do not support arithmetic operations.
        The same behaviour is present on other operators like bitwise shift operators (<<, >>).
    -------------------------------------------------------------------------------------------------------------- */
    /* 
    References on this topic:
    https://www.reddit.com/r/C_Programming/comments/wlcrcy/what_is_wrong_with_using_shorts_instead_of_ints/
    https://stackoverflow.com/questions/24371077/when-to-use-short-over-int
    https://stackoverflow.com/questions/24371868/why-must-a-short-be-converted-to-an-int-before-arithmetic-operations-in-c-and-c
    https://stackoverflow.com/questions/24370732/what-does-natural-size-really-mean-in-c
    https://www.php.cn/faq/1796732098.html
    */

    short int var1 {10};
    short int var2 {20};
    char var3 {40};
    char var4 {50};

    std::cout << "sizeof var1 = " << sizeof var1 << std::endl;
    std::cout << "sizeof var2 = " << sizeof var2 << std::endl;
    std::cout << "sizeof var3 = " << sizeof var3 << std::endl;
    std::cout << "sizeof var4 = " << sizeof var4 << std::endl;

    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

    std::cout << "sizeof result1 = " << sizeof result1 << std::endl;
    std::cout << "sizeof result2 = " << sizeof result2 << std::endl;


    return 0;
}
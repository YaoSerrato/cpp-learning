#include <iostream>

int main()
{
    /* -------------------------------------------------------- */
    /* Basic Operations */
    /* -------------------------------------------------------- */
    int a{50};
    int b{14};
    int res{0};

    // addition
    res = a + b;
    std::cout << "addition result is : " << res << std::endl;

    // substraction
    res = a - b;
    std::cout << "substraction result is : " << res << std::endl;
    
    res = b - a;
    std::cout << "substraction result is : " << res << std::endl;

    // multiplication
    res = a * b;
    std::cout << "multiplication result is : " << res << std::endl;

    // integer division
    res = a / b;
    std::cout << "division result is : " << res << std::endl;

    // modulus
    res = a % b;
    std::cout << "modulus result is : " << res << std::endl;

    /* -------------------------------------------------------- */
    /* Precedence and Associativity
        https://en.cppreference.com/w/cpp/language/operator_precedence
    */
    /* -------------------------------------------------------- */
    int c{4};
    int d{7};
    int e{2};
    int f{3};
    int g{1};

    res = a + b * c - d / e - f + g;
    std::cout << "result is : " << res << std::endl;

    res = a / b * c + d - e + f;
    std::cout << "result is : " << res << std::endl;

    res = ((a + b) * c) - (d / e) - (f + g);
    std::cout << "result is : " << res << std::endl;

    /* -------------------------------------------------------- */
    /* Prefix and Postfix + and - */
    /* -------------------------------------------------------- */
    int value{0};

    value = 5;
    value = value + 1;
    std::cout << "result is (increment by 1): " << value << std::endl;

    value = 5;
    value = value - 1;
    std::cout << "result is (decrement by 1): " << value << std::endl;

    value = 5;
    std::cout << "result is (postfix++): " << value++ << std::endl;
    std::cout << "result is : " << value << std::endl;
    value = 5;
    std::cout << "result is (postfix--): " << value-- << std::endl;
    std::cout << "result is : " << value << std::endl;

    value = 5;
    std::cout << "result is (++prefix) : " << ++value << std::endl;
    std::cout << "result is : " << value << std::endl;
    value = 5;
    std::cout << "result is (--prefix) : " << --value << std::endl;
    std::cout << "result is : " << value << std::endl;

    /* -------------------------------------------------------- */
    /* Compound operands */
    /* -------------------------------------------------------- */
    int var {45};

    var += 5;
    std::cout << "(var += 5) is: " << var << std::endl;
    var = 45; var -= 5;
    std::cout << "(var -= 5) is: " << var << std::endl;
    var = 45; var *= 5;
    std::cout << "(var *= 5) is: " << var << std::endl;
    var = 45; var /= 5;
    std::cout << "(var /= 5) is: " << var << std::endl;
    var = 45; var %= 5;
    std::cout << "(var %= 5) is: " << var << std::endl;

    /* -------------------------------------------------------- */
    /* Relational operators */
    /* -------------------------------------------------------- */
    int n1 {84};
    int n2 {16};

    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    std::cout << std::boolalpha;

    std::cout << "n1 < n2 : " << (n1 < n2) << std::endl;
    std::cout << "n1 <= n2 : " << (n1 <= n2) << std::endl;
    std::cout << "n1 > n2 : " << (n1 > n2) << std::endl;
    std::cout << "n1 >= n2 : " << (n1 >= n2) << std::endl;
    std::cout << "n1 == n2 : " << (n1 == n2) << std::endl;
    std::cout << "n1 != n2 : " << (n1 != n2) << std::endl;

    /* -------------------------------------------------------- */
    /* Logical operators */
    /* -------------------------------------------------------- */
    bool _A {true};
    bool _B {false};

    std::cout << "_A : " << _A << std::endl;
    std::cout << "_B : " << _B << std::endl;

    std::cout << "_A && _B : " << (_A && _B) << std::endl;
    std::cout << "_A || _B : " << (_A || _B) << std::endl;
    std::cout << "!_A : " << (!_A) << std::endl;
    std::cout << "!_B : " << (!_B) << std::endl;


    /* -------------------------------------------------------- */
    /* Relational and logical operators combined */
    /* -------------------------------------------------------- */
    int p {45};
    int q {20};
    int r {11};

    std::cout << "p = " << p << std::endl;
    std::cout << "q = " << q << std::endl;
    std::cout << "r = " << r << std::endl;

    std::cout << "(q > r) && (p > r) : " << ((q > r) && (p > r)) << std::endl;
    std::cout << "(r == p) || (p <= q) : " << ((r == p) || (p <= q)) << std::endl;

    return 0;
}
#include <iostream>

int main()
{
    /*-------------------------------------------------------- */
    /* booleans */
    /*-------------------------------------------------------- */

    bool RL{true};
    bool GL{false};

    if(RL)
    {
        std::cout << "Stop. Red Light." << std::endl;
    }
    else
    {
        std::cout << "Go ahead." << std::endl;
    }

    std::cout << "size of bool is " << sizeof(bool) << "bytes. " << std::endl;
    std::cout << "----------------------------------------------------------" << std::endl;

    // output formating
    std::cout << "red light: " << RL << std::endl;
    std::cout << "green light: " << GL << std::endl;
    std::cout << std::boolalpha;
    std::cout << "red light: " << RL << std::endl;
    std::cout << "green light: " << GL << std::endl;
    std::cout << "----------------------------------------------------------" << std::endl;

    /*-------------------------------------------------------- */
    /* characters and text */
    /*-------------------------------------------------------- */
    char ch1 {'A'};
    char ch2 {65};
    
    std::cout << ch1 << std::endl;

    std::cout << ch2 << std::endl;
    std::cout << static_cast<int>(ch2) << std::endl;
    std::cout << "----------------------------------------------------------" << std::endl;

    /*-------------------------------------------------------- */
    /* 'auto' keyword */
    /*
        a keyword for letting the compiler deduce the data type
    */
    /*-------------------------------------------------------- */
    auto v1 {12};
    auto v2 {13.0};
    auto v3 {14.0f};
    auto v4 {15.0L};
    auto v5 {'a'};
    auto v6 {123U};
    auto v7 {123UL};
    auto v8 {123LL};

    std::cout << "sizeof v1 : " << sizeof v1 << std::endl;
    std::cout << "sizeof v2 : " << sizeof v2 << std::endl;
    std::cout << "sizeof v3 : " << sizeof v3 << std::endl;
    std::cout << "sizeof v4 : " << sizeof v4 << std::endl;
    std::cout << "sizeof v5 : " << sizeof v5 << std::endl;
    std::cout << "sizeof v6 : " << sizeof v6 << std::endl;
    std::cout << "sizeof v7 : " << sizeof v7 << std::endl;
    std::cout << "sizeof v8 : " << sizeof v8 << std::endl;
    std::cout << "----------------------------------------------------------" << std::endl;

    /*-------------------------------------------------------- */
    /* assignments */
    /*-------------------------------------------------------- */
    int assign_1 {85};

    std::cout << "asign_1 : " << assign_1 << std::endl;
    assign_1 = 123;
    std::cout << "asign_1 : " << assign_1 << std::endl;

    return 0;
}



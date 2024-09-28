#include <iostream>

void print_separator(void)
{
    std::cout << std::endl;
    std::cout << " ------------------------------------ " << std::endl;
    std::cout << std::endl;
}

int main()
{
    /* signed modifier */
    signed int v1 {5};
    signed int v2 {-78};

    std::cout << "v1 = " << v1 << std::endl;
    std::cout << "v2 = " << v2 << std::endl;
    std::cout << "sizeof v1 = " << sizeof v1 << " bytes." << std::endl;
    std::cout << "sizeof v2 = " << sizeof v2 << " bytes." << std::endl;

    print_separator();

    /* unsigned modifier */
    unsigned int v3 {4};
    //unsigned int v4 {-8};       // this throws a compiler error

    print_separator();

    /* short modifier */
    short               short_var {-30811};
    short int           short_int {455};
    signed short        signed_short {122};
    unsigned short      unsigned_short{752};
    signed short int    signed_short_int {-456};
    unsigned short int  unsigned_short_int {489};

    std::cout << "sizeof short = " << sizeof(short) << " bytes." << std::endl;
    std::cout << "sizeof short int = " << sizeof(short int) << " bytes." << std::endl;
    std::cout << "sizeof signed short = " << sizeof(signed short) << " bytes." << std::endl;
    std::cout << "sizeof unsigned short = " << sizeof(unsigned short) << " bytes." << std::endl;
    std::cout << "sizeof signed short int = " << sizeof(signed short int) << " bytes." << std::endl;
    std::cout << "sizeof unsigned short int = " << sizeof(unsigned short int) << " bytes." << std::endl;

    print_separator();

    /* signed/unsigned modifier with int */
    int             int_var {-86};
    signed          signed_var {-1456};
    signed int      signed_int {1651};
    unsigned int    unsigned_int {1987};

    std::cout << "sizeof int = " << sizeof(int) << " bytes." << std::endl;
    std::cout << "sizeof signed = " << sizeof(signed) << " bytes." << std::endl;
    std::cout << "sizeof signed int = " << sizeof(signed int) << " bytes." << std::endl;
    std::cout << "sizeof unsigned int = " << sizeof(unsigned int) << " bytes." << std::endl;

    print_separator();

    /* long modifier */
    long                long_var {-88};
    long int            long_int {-98181};
    signed long         signed_long {-1899};
    unsigned long       unsigned_long {19814};
    signed long int     signed_long_int {-189178};
    unsigned long int   unsigned_long_int {88198};

    std::cout << "sizeof long = " << sizeof(long) << " bytes." << std::endl;
    std::cout << "sizeof long int = " << sizeof(long int) << " bytes." << std::endl;
    std::cout << "sizeof signed long = " << sizeof(signed long) << " bytes." << std::endl;
    std::cout << "sizeof unsigned long = " << sizeof(unsigned long) << " bytes." << std::endl;
    std::cout << "sizeof signed long int = " << sizeof(signed long int) << " bytes." << std::endl;
    std::cout << "sizeof unsigned long int = " << sizeof(unsigned long int) << " bytes." << std::endl;

    print_separator();

    /* long long modifier */
    std::cout << "sizeof long long = " << sizeof(long long) << " bytes." << std::endl;
    std::cout << "sizeof long long int = " << sizeof(long long int) << " bytes." << std::endl;
    std::cout << "sizeof signed long long = " << sizeof(signed long long) << " bytes." << std::endl;
    std::cout << "sizeof signed long long int = " << sizeof(signed long long int) << " bytes." << std::endl;
    std::cout << "sizeof unsigned long long int = " << sizeof(unsigned long long int) << " bytes." << std::endl;

    return 0;
}

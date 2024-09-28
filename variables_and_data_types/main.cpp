#include <iostream>

void print_separator(void)
{
    std::cout << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
}

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

    print_separator();

    /*
        Variables declaration and initialization
    */

   /* Braced initialization */
   int apples_count;                                    // may initialize to garbage value
   int bananas_count{};                                 // initializes to 0
   int oranges_count{50};                               // initializes to 50
   int fruits_count{bananas_count + oranges_count};     // expression as initializer
   //int grapes_count{15.67};                             // g++ throws an error and clang++ throws error and warning

   std::cout << "There are " << apples_count << " apples." << std::endl;
   std::cout << "There are " << bananas_count << " bananas." << std::endl;
   std::cout << "There are " << oranges_count << " oranges." << std::endl;
   std::cout << "There are " << fruits_count << " fruits." << std::endl;

   print_separator();

   /* Functional initialization */
   int ipods_count;                                     // may initialize to garbage value
   int iphones_count(64);                               // initializes to 64
   int devices_count(3 + iphones_count);                // expression as initializer
   int macs_count(15.67);                               // information is lost, decimals are truncated
                                                        // (less safe than braced initializers)

   std::cout << "There are " << ipods_count << " ipods." << std::endl;
   std::cout << "There are " << iphones_count << " iphones." << std::endl;
   std::cout << "There are " << devices_count << " devices." << std::endl;
   std::cout << "There are " << macs_count << " macs."  << std::endl;

   print_separator();

   /* Assignment initialization */
   int books_count = 2;                                 // may initialize to garbage value
   int pencils_count = 6;                               // initializes to 64
   int things_count = books_count + pencils_count;      // expression as initializer
   int pens_count = 14.49;                               // information is lost, decimals are truncated

   std::cout << "There are " << books_count << " books." << std::endl;
   std::cout << "There are " << pencils_count << " pencils." << std::endl;
   std::cout << "There are " << things_count << " things." << std::endl;
   std::cout << "There are " << pens_count << " pens." << std::endl;

   print_separator();

   /* Check the size with sizeof */
   std::cout << "size of int " << sizeof(int) << std::endl;
   std::cout << "size of books_count " << sizeof books_count << std::endl;

    return 0;
}
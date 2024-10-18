#include <iostream>

/* libraries for output formating */
#include <ios>
#include <iomanip>

int main()
{
    /* -------------------------------------------------------- */
    /* Output formating \ */
    /* https://en.cppreference.com/w/cpp/io/manip */
    /* -------------------------------------------------------- */

    /* -------------------------------------------------------- */
    /* std::endl */
    /* -------------------------------------------------------- */

    std::cout << "Hello";
    std::cout << "World";

    std::cout << std::endl;

    std::cout << "Hello" << std::endl;
    std::cout << "World" << std::endl;

    std::cout << "Hello\n";
    std::cout << "World\n";


    /* -------------------------------------------------------- */
    /* std::flush */
    /* causes immediate sending of data to the device connected to the stream */
    /* -------------------------------------------------------- */



    /* -------------------------------------------------------- */
    /* std::setw() */
    /* specifies the width for the text you want to print */
    /* -------------------------------------------------------- */

    int col_width {20};

    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Daniel " << "Gray " << "25" << std::endl;
    std::cout << "Stanley " << "Kubrick " << "80" << std::endl;
    std::cout << "Leopold " << "Smithsian " << "21" << std::endl;

    std::cout << "Formatted table : " << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Kubrick" << std::setw(col_width) << "80" << std::endl;
    std::cout << std::setw(col_width) << "Leopold" << std::setw(col_width) << "Smithsian" << std::setw(col_width) << "21" << std::endl;


    /* -------------------------------------------------------- */
    /* std::left, std::right */
    /* -------------------------------------------------------- */

    std::cout << "Formatted table : " << std::endl;
    std::cout << std::left;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Kubrick" << std::setw(col_width) << "80" << std::endl;
    std::cout << std::setw(col_width) << "Leopold" << std::setw(col_width) << "Smithsian" << std::setw(col_width) << "21" << std::endl;

    /* -------------------------------------------------------- */
    /* internal justified - std::internal */
    /* -------------------------------------------------------- */
    std::cout << std::endl;
    std::cout << "Internal justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(col_width) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(col_width) << -123.45 << std::endl;

    /* -------------------------------------------------------- */
    /* std::setfill */
    /* -------------------------------------------------------- */
    std::cout << std::endl;

    std::cout << std::left;
    std::cout << std::setfill('.');     // specify the fill character
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Kubrick" << std::setw(col_width) << "80" << std::endl;
    std::cout << std::setw(col_width) << "Leopold" << std::setw(col_width) << "Smithsian" << std::setw(col_width) << "21" << std::endl;

    std::cout << std::right;
    std::cout << std::setfill('-');     // specify the fill character
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Kubrick" << std::setw(col_width) << "80" << std::endl;
    std::cout << std::setw(col_width) << "Leopold" << std::setw(col_width) << "Smithsian" << std::setw(col_width) << "21" << std::endl;

    /* -------------------------------------------------------- */
    /* std::boolalpha, std::noboolalpha */
    /* -------------------------------------------------------- */

    bool c1 {true};
    bool c2 {false};

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "c1 : " << c1 << std::endl;
    std::cout << "c2 : " << c2 << std::endl;

    std::cout << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "c1 : " << c1 << std::endl;
    std::cout << "c2 : " << c2 << std::endl;

    /* -------------------------------------------------------- */
    /* std::showpos, std::noshowpos */
    /* -------------------------------------------------------- */
    int positive_number {45};
    int negative_number {-89};

    std::cout << std::endl;
    std::cout << std::showpos;
    std::cout << "positive number : " << positive_number << std::endl;
    std::cout << "negative number : " << negative_number << std::endl;

    std::cout << std::endl;
    std::cout << std::noshowpos;
    std::cout << "positive number : " << positive_number << std::endl;
    std::cout << "negative number : " << negative_number << std::endl;

    /* -------------------------------------------------------- */
    /* std::dec, std::hex, std::oct */
    /* -------------------------------------------------------- */
    double double_number {498.23};

    std::cout << std::endl;
    std::cout << "positive number in several bases : " << std::endl;
    std::cout << " in dec : " << std::dec << positive_number << std::endl;
    std::cout << " in hex : " << std::hex << positive_number << std::endl;
    std::cout << " in oct : " << std::oct << positive_number << std::endl;

    std::cout << std::endl;
    std::cout << "negative number in several bases : " << std::endl;
    std::cout << " in dec : " << std::dec << negative_number << std::endl;
    std::cout << " in hex : " << std::hex << negative_number << std::endl;
    std::cout << " in oct : " << std::oct << negative_number << std::endl;

    std::cout << std::endl;
    std::cout << "double number in several bases : " << std::endl;
    std::cout << " in dec : " << std::dec << double_number << std::endl;
    std::cout << " in hex : " << std::hex << double_number << std::endl;
    std::cout << " in oct : " << std::oct << double_number << std::endl;

    /* -------------------------------------------------------- */
    /* std::showbase, std::noshowbase */
    /* -------------------------------------------------------- */

    std::cout << std::endl;

    std::cout << "std::noshowbase (default)" << std::endl;
    std::cout << " in dec : " << std::dec << positive_number << std::endl;
    std::cout << " in hex : " << std::hex << positive_number << std::endl;
    std::cout << " in oct : " << std::oct << positive_number << std::endl;

    std::cout << "std::showbase" << std::endl;
    std::cout << std::showbase;
    std::cout << " in dec : " << std::dec << positive_number << std::endl;
    std::cout << " in hex : " << std::hex << positive_number << std::endl;
    std::cout << " in oct : " << std::oct << positive_number << std::endl;

    /* -------------------------------------------------------- */
    /* std::uppercase, std::nouppercase */
    /* -------------------------------------------------------- */

    std::cout << std::endl;

    std::cout << "std::nouppercase (default)" << std::endl;
    std::cout << std::showbase;
    std::cout << " in dec : " << std::dec << positive_number << std::endl;
    std::cout << " in hex : " << std::hex << positive_number << std::endl;
    std::cout << " in oct : " << std::oct << positive_number << std::endl;

    std::cout << "std::uppercase" << std::endl;
    std::cout << std::showbase;
    std::cout << std::uppercase;
    std::cout << " in dec : " << std::dec << positive_number << std::endl;
    std::cout << " in hex : " << std::hex << positive_number << std::endl;
    std::cout << " in oct : " << std::oct << positive_number << std::endl;

    /* -------------------------------------------------------- */
    /* std::scientific, std::fixed */
    /* -------------------------------------------------------- */
    double dn1 {3.198135468};
    double dn2 {1998.0};
    double dn3 {7.45e-10};

    std::cout << std::endl;
    std::cout << "double numbers (default)" << std::endl;
    std::cout << dn1 << std::endl;
    std::cout << dn2 << std::endl;
    std::cout << dn3 << std::endl;

    std::cout << std::endl;
    std::cout << "double numbers (fixed)" << std::endl;
    std::cout << std::fixed;
    std::cout << dn1 << std::endl;
    std::cout << dn2 << std::endl;
    std::cout << dn3 << std::endl;

    std::cout << std::endl;
    std::cout << "double numbers (scientific)" << std::endl;
    std::cout << std::scientific;
    std::cout << dn1 << std::endl;
    std::cout << dn2 << std::endl;
    std::cout << dn3 << std::endl;

    std::cout << std::endl;
    std::cout << "double numbers (back to default)" << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << dn1 << std::endl;
    std::cout << dn2 << std::endl;
    std::cout << dn3 << std::endl;

    /* -------------------------------------------------------- */
    /* std::setprecision */
    /* -------------------------------------------------------- */
    double na {3.14151619816546168465168514};

    std::cout << std::endl;
    std::cout << "default precision (6) : " << na << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "std::setprecision(10) : " << na << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "std::setprecision(20) : " << na << std::endl;
    std::cout << std::setprecision(50);
    std::cout << "std::setprecision(50) : " << na << std::endl;

    /* -------------------------------------------------------- */
    /* std::showpoint */
    /* -------------------------------------------------------- */
    double doub_1 {36.15};
    double doub_2 {186.19};
    double doub_3 {12.0};
    int nodoub_4 {168};

    std::cout << std::setprecision(6);

    std::cout << std::endl;
    std::cout << "noshowpoint (default)" << std::endl;
    std::cout << doub_1 << std::endl;
    std::cout << doub_2 << std::endl;
    std::cout << doub_3 << std::endl;
    std::cout << std::dec << nodoub_4 << std::endl;

    std::cout << std::endl;
    std::cout << "showpoint" << std::endl;
    std::cout << std::showpoint;
    std::cout << doub_1 << std::endl;
    std::cout << doub_2 << std::endl;
    std::cout << doub_3 << std::endl;
    std::cout << std::dec << nodoub_4 << std::endl;

    return 0;
}
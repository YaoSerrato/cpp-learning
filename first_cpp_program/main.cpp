/* This brings in the iostream library */
#include <iostream>
#include <string>

void printSeparator(void)
{
    std::cout << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
}

int addNumbers(int first_number, int second_number)
{
    int sum = 0;
    sum = first_number + second_number;
    return sum;
}

void welcomeMessage(void)
{
    int age;
    std::string name;

    std::cout << "Enter your name: " << std::endl;
    //std::cin >> name; // for entering a string WITHOUT spaces
    std::getline(std::cin, name);   // for entering a string WITH spaces


    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;

    std::cout << "Welcome " << name << ". You are " << age << " years old." << std::endl;
}

int main()
{
    int firstNumber {12};       // Apparently, a variable can be initialized to a value
                                // by putting the value inside curly brakets.
    int secondNumber {9};
    int sum = 0;

    // This is a one-line comment.

    /*
        This is a
        multi-line
        comment
    */

    /* Printing data to the console. */
    std::cout << "Hello World!" << std::endl;
    std::cout << "This is one of my first C++ programs." << std::endl;

    sum = addNumbers(firstNumber, secondNumber);
    std::cout << "The sum result is: " << sum << std::endl;

    sum = addNumbers(34, 7);
    std::cout << "The sum result is: " << sum << std::endl;

    std::cout << "The sum result is: " << addNumbers(1, 1) << std::endl;

    /* Testing other types of output. */
    printSeparator();
    std::cerr << "This is an error message." << std::endl;
    std::clog << "This is a log message." << std::endl;

    /* Receiving data from console. */
    printSeparator();
    welcomeMessage();

    return 0;
}


#include <iostream>

#define DISABLED                        (0)
#define ENABLED                         (1)

#define SECTION_IF_STATEMENT            (DISABLED)
#define SECTION_ELSE_IF_STATEMENT       (DISABLED)
#define SECTION_SWITCH_CASE_STATEMENT   (DISABLED)
#define SECTION_TERNARY_OPERAOR         (ENABLED)

int main()
{

#if SECTION_IF_STATEMENT == ENABLED

    unsigned int number1 {0};
    unsigned int number2 {0};
    bool result {false};

    /* ------------------------------------------------------------------------------------------------
        Free standing if statement.
    ------------------------------------------------------------------------------------------------ */

    std::cout << "Free standing if statement." << std::endl;

    std::cout << "Enter number1 (unsigned integer, no floating point): ";
    std::cin >> number1;

    std::cout << "Enter number2 (unsigned integer, no floating point): ";
    std::cin >> number2;

    result = number1 < number2;
    std::cout << std::boolalpha << "result: " << result << std::endl;

    if(result)
    {
        std::cout << number1 << " is LESS than " << number2 << std::endl;
    }
    else
    {
        std::cout << number1 << " is NOT LESS than " << number2 << std::endl;
    }

    result = number1 > number2;
    std::cout << std::boolalpha << "result: " << result << std::endl;

    if(result)
    {
        std::cout << number1 << " is GREATER than " << number2 << std::endl;
    }
    else
    {
        std::cout << number1 << " is NOT GREATER than " << number2 << std::endl;
    }

    result = number1 == number2;
    std::cout << std::boolalpha << "result: " << result << std::endl;

    if(result)
    {
        std::cout << number1 << " is EQUAL to " << number2 << std::endl;
    }
    else
    {
        std::cout << number1 << " is NOT EQUAL to " << number2 << std::endl;
    }

#endif

#if SECTION_ELSE_IF_STATEMENT == ENABLED
    /* ------------------------------------------------------------------------------------------------
        else - if statement.
    ------------------------------------------------------------------------------------------------ */

    std::cout << "else - if statement." << std::endl;

    const unsigned int pen {1};
    const unsigned int marker {2};
    const unsigned int pencil {3};
    const unsigned int eraser {4};

    unsigned int selected_tool {pencil};

    if(selected_tool == pen)
    {
        std::cout << "Tool selected is the pen." << std::endl;
    }
    else if(selected_tool == marker)
    {
        std::cout << "Tool selected is the marker." << std::endl;
    }
    else if(selected_tool == pencil)
    {
        std::cout << "Tool selected is the pencil A." << std::endl;
    }
    else if(selected_tool == eraser)
    {
        std::cout << "Tool selected is the eraser." << std::endl;
    }
    else if(selected_tool == pencil)
    {
        // duplicating this on purpose
        std::cout << "Tool selected is the pencil B." << std::endl;
    }
    else
    {
        std::cout << "No valid tool selected." << std::endl;
    }

    std::cout << "End of else-if statement." << std::endl;

#endif

#if SECTION_SWITCH_CASE_STATEMENT == ENABLED
    /* ------------------------------------------------------------------------------------------------
        switch - case statement.
    ------------------------------------------------------------------------------------------------ */

    std::cout << "switch - case statement." << std::endl;

    const unsigned int pen {1};
    const unsigned int marker {2};
    const unsigned int pencil {3};
    const unsigned int eraser {4};

    unsigned int selected_tool {eraser};

    /* The switch-case condition can only be a integer type (int, long, unsigned short, etc) or an enum. */
    switch(selected_tool)
    {
        case pen:
            std::cout << "Tool selected is the pen." << std::endl;
            break;
        
        case marker:
            std::cout << "Tool selected is the marker." << std::endl;
            break;
        
        case pencil:
            std::cout << "Tool selected is the pencil." << std::endl;
            break;
        
        case eraser:
            std::cout << "Tool selected is the eraser." << std::endl;
            break;
        
        default:
            std::cout << "No valid tool selected." << std::endl;
            break;
    }

    std::cout << "End of switch-case statement." << std::endl;

#endif

#if SECTION_TERNARY_OPERAOR == ENABLED
    /* ------------------------------------------------------------------------------------------------
        ternary operator
    ------------------------------------------------------------------------------------------------ */

    std::cout << "ternary operator" << std::endl;

    /* ternary initialization */
    bool fast {false};
    unsigned int speed {fast ? 300u : 150u};

    std::cout << "Speed: " << speed << std::endl;

    /* usage of ternary operator */
    unsigned int max {0};
    unsigned int number1 {0};
    unsigned int number2 {0};

    std::cout << "Enter number1 (unsigned integer, no floating point): ";
    std::cin >> number1;

    std::cout << "Enter number2 (unsigned integer, no floating point): ";
    std::cin >> number2;

    max = (number1 > number2) ? number1 : number2;
    std::cout << "The maximum number is: " << max << std::endl;

    std::cout << "End of ternary operator." << std::endl;

#endif

    return 0;
}
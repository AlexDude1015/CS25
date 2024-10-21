#include <iostream>
#include <string>
#include <cctype>
#include "customer_number.h"

#include "customer_number.h"

/*Scenarios where the input might fail

1) Character count != 6

2) Not two alphabetical characters + four digits.

*/


int main()
{
    std::string user_input = customer_number::get_user_input();
    if (customer_number::is_valid(user_input))
    {
        std::cout << user_input << " is valid\n";
    }

    return 0;
}

#include <iostream>
#include <string>
#include <cctype>
#include "customer_number.h"

int main()
{
    std::string user_input = customer_number::get_user_input();
    if (customer_number::is_valid(user_input))
    {
        std::cout << user_input << " is valid\n";
    }

    return 0;
}

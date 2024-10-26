//
// Created by Alexander Li on 10/25/24.
//
#include "customer_data.h"
#include "customer.h"
#include <iostream>

bool customer_data::is_correct()
{
    std::string response;
    std::cout << "Does the information you entered look correct?\n(y/n)";
    std::getline(std::cin, response);
    if (response == "y")
    {
        return true;
    }
    return false;
}

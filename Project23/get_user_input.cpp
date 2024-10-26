//
// Created by Alexander Li on 10/26/24.
//
#include <iostream>
#include <cctype>
#include <string>
#include "customer_number.h"

//Gets the user's customer number
std::string customer_number::get_user_input()
{
    std::string user_input;
    std::cout << "Please enter your customer number. Customer numbers should begin with two letters followed by four digits. \n";
    std::cout << "Customer number: ";
    std::getline(std::cin, user_input);
    std::cout << "\n";
    return user_input;
}
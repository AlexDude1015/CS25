//
// Created by Alexander Li on 10/20/24.
//
#include <iostream>
#include <cctype>
#include <string>
#include "customer_number.h"

//Gets the user's customer number
std::string customer_number::get_user_input()
{
    std::string user_input;
    std::cout << "Please enter your customer number: \n";
    std::getline(std::cin, user_input);
    return user_input;
}

//Checks the number's size, alphabetical, and numeric characters. Returns true if valid.
bool customer_number::is_valid(const std::string& customer_number)
{
    //Checks if character count is 6
    if (customer_number.size() != 6)
    {
        std::cout << "Invalid input. The customer number should have six characters.\n";
        return false;
    }
    //Stores the alphabetical and numerical characters
    std::string characters = customer_number.substr(0, 2), digits = customer_number.substr(3,4);
    //Checks numerical characters
    for (auto index : characters)
    {
        if (!isalpha(index))
        {
            std::cout << "Invalid input. The first two characters should be alphabetical.\n";
            return false;
        }
    }
    //Checks alphabetical characters
    for (auto index : digits)
    {
        if (!isdigit(index))
        {
            std::cout << "Invalid input. The last four characters should be numerical.\n";
            return false;
        }
    }
    return true;
}
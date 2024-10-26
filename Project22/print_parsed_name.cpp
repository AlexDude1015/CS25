//
// Created by Alexander Li on 10/26/24.
//
#include <iostream>
#include "name.h"

void name::print_parsed_name(const std::string &name)
{
    if (name::is_whole_name(name))
    {
        std::string first_name = name::get_first_name(name);
        std::string last_name = name::get_last_name(name);
        std::cout << "First name: " << first_name << " \nLast name: " << last_name << std::endl;
    }
    else
    {
        std::cout << "Invalid name" << std::endl;
    }
}
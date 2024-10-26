//
// Created by Alexander Li on 10/26/24.
//
//Returns user's complete name
#include <iostream>
#include "name.h"

std::string name::get_whole_name()
{
    std::string whole_name;
    std::cout << "Please enter your first and last name:\n";
    std::getline(std::cin, whole_name);
    return whole_name;
}
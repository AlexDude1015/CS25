#include <string>
#include <iostream>
#include "name.h"

//Returns user's complete name
std::string name::get_whole_name()
{
    std::string whole_name;
    std::cout << "Please enter your first and last name:\n";
    std::getline(std::cin, whole_name);
    return whole_name;
}

//Takes a whole name and returns the first name
std::string name::get_first_name(std::string original_name)
{
    int space = original_name.find(" ");
    return original_name.substr(0, space);
}

//Takes a whole name and returns the last name
std::string name::get_last_name(std::string original_name)
{
    int space = original_name.find(" ");
    int last_name_size = original_name.size() - (space);
    return original_name.substr(space + 1, last_name_size);
}//
// Created by Alexander Li on 10/20/24.
//

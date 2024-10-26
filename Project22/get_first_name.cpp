//
// Created by Alexander Li on 10/26/24.
//
#include <iostream>
#include "name.h"

//Takes a whole name and returns the first name
std::string name::get_first_name(std::string original_name)
{
    int space = original_name.find(" ");
    return original_name.substr(0, space);
}
//
// Created by Alexander Li on 10/26/24.
//
#include <iostream>
#include "name.h"

//Checks for a space in the user's input
bool name::is_whole_name(std::string original_name)
{
    if (original_name.find(" ") == std::string::npos)
    {
        return false;
    }
    return true;
}
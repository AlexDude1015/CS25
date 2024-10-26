//
// Created by Alexander Li on 10/26/24.
//

#include <iostream>
#include "name.h"

//Takes a whole name and returns the last name
std::string name::get_last_name(std::string original_name)
{
    int space = original_name.find(" ");
    int last_name_size = original_name.size() - (space);
    return original_name.substr(space + 1, last_name_size);
}

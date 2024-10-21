//
// Created by Alexander Li on 10/20/24.
//

#ifndef NAME_H
#define NAME_H

#include <string>

namespace name
{
    bool is_whole_name(const std::string& original_name);
    std::string get_whole_name();
    std::string get_first_name(std::string original_name);
    std::string get_last_name(std::string original_name);
}
#endif //NAME_H

//
// Created by Alexander Li on 11/8/24.
//
#include "conversion.h"

namespace conversion
{
    //Asks users to input a double variable
    double get_input()
    {
        double user_input;
        std::cout << "Please enter a double: ";
        std::cin >> user_input;
        std::cout << "\n";
        return user_input;
    }

    //Converts a double to string with stringstream
    std::string convert_string(const double& user_input)
    {
        std::stringstream stream;
        stream << std::fixed << std::setprecision(1) << user_input;
        return stream.str();
    }
}

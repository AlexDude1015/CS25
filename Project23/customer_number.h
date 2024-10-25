//
// Created by Alexander Li on 10/20/24.
//

#ifndef CUSTOMER_NUMBER_H
#define CUSTOMER_NUMBER_H
#include <string>

    namespace customer_number
    {
        std::string get_user_input();
        bool is_valid(const std::string& customer_number);
    }

#endif //CUSTOMER_NUMBER_H

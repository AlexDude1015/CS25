//
// Created by Alexander Li on 10/24/24.
//

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include "address.h"
struct Customer
{
    std::string id;
    std::string name;
    std::string email;
    Address address;
};

namespace customer
{
    void get_inputs(Customer &user);
    void print_results(const Customer &user);
}

#endif //CUSTOMER_H
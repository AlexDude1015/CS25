//
// Created by Alexander Li on 10/25/24.
//

#ifndef CUSTOMER_DATA_H
#define CUSTOMER_DATA_H
#include "customer.h"

namespace customer_data
{
    void get_inputs(customer &user);
    void print(const customer &user);
    bool is_correct();
}

#endif //CUSTOMER_DATA_H

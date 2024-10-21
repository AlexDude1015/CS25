//
// Created by Alexander Li on 10/21/24.
//

#ifndef CUSTOMER_DATA_H
#define CUSTOMER_DATA_H

struct customer
{
    std::string id;
    std::string name;
    std::string email;
};

namespace customer_data
{
    void get_inputs(customer &user);
    void print(const customer &user);
    bool is_correct();
}


#endif //CUSTOMER_DATA_H

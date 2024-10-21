#include <iostream>
#include <string>
#include "customer_data.h"

int main()
{
    customer user;
    do
    {
        customer_data::get_inputs(user);
        customer_data::print(user);
    } while(!customer_data::is_correct());
    std::cout << "Thank you for your cooperation.";
    return 0;
}

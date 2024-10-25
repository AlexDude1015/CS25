#include <iostream>
#include "address.h"
#include "customer.h"

int main()
{
    Customer customer;
    customer::get_inputs(customer);
    customer::print_results(customer);
    return 0;
}

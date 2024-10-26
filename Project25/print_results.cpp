//
// Created by Alexander Li on 10/24/24.
//
#include "customer.h"

//User enters all inputs


//Prints user's inputs
void customer::print_results(const Customer &user)
{
    std::cout << "ID: " << user.id << std::endl;
    std::cout << "Name: " << user.name << std::endl;
    std::cout << "Email: " << user.email << std::endl;
    std::cout << "Street: " << user.address.street << std::endl;
    std::cout << "City: " << user.address.city << std::endl;
    std::cout << "Zipcode: " << user.address.zip_code << std::endl;
}
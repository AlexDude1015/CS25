//
// Created by Alexander Li on 10/25/24.
//
#include <iostream>
#include "customer_data.h"
#include "customer.h"

//Asks the user to enter their ID, name, and email.
void customer_data::get_inputs(customer &user)
{
    std::cout << "Enter ID: \n";
    std::getline(std::cin, user.id);
    std::cout << "Enter Name: \n";
    std::getline(std::cin, user.name);
    std::cout << "Enter Email: \n";
    std::getline(std::cin, user.email);
}
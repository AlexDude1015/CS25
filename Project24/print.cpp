//
// Created by Alexander Li on 10/25/24.
//
#include "customer.h"
#include "customer_data.h"
#include <iostream>

//Prints the user's ID, name, and email
void customer_data::print(const customer &user)
{
    std::cout << "You entered the following:\n";
    std::cout << "ID: " << user.id << "\n";
    std::cout << "Name: " << user.name << "\n";
    std::cout << "Email: " << user.email << "\n";
}
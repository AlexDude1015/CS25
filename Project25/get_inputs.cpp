//
// Created by Alexander Li on 10/25/24.
//
#include <iostream>
#include <customer.h>
void customer::get_inputs(Customer &user)
{
    std::cout << "Enter ID: ";
    std::getline(std::cin, user.id);
    std::cout << "Enter Name: ";
    std::getline(std::cin, user.name);
    std::cout << "Enter Email: ";
    std::getline(std::cin, user.email);
    std::cout << "Enter the name of your Street: ";
    std::getline(std::cin, user.address.street);
    std::cout << "Enter the name of your City: ";
    std::getline(std::cin, user.address.city);
    std::cout << "Enter your Zipcode: ";
    std::cin >> user.address.zip_code;
    std::cout << "\n\n";
}
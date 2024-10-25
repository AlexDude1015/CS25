//
// Created by Alexander Li on 10/24/24.
//
#include "customer.h"

//User enters all inputs
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
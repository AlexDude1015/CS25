//
// Created by Alexander Li on 10/21/24.
//
#include "customer_data.h"
#include <iostream>

void get_inputs(customer &user)
{
    std::cout << "Enter ID: \n";
    std::getline(std::cin, user.id);
    std::cout << "Enter Name: \n";
    std::getline(std::cin, user.name);
    std::cout << "Enter Email: \n";
    std::getline(std::cin, user.email);
}

void print(const customer &user)
{
    std::cout << "You entered the following:\n";
    std::cout << "ID: " << user.id << "\n";
    std::cout << "Name: " << user.name << "\n";
    std::cout << "Email: " << user.email << "\n";
}

bool is_correct()
{
    char response;
    std::cout << "Does the information you entered look correct?\n(y/n)";
    std::cin >> response;
    if (response == 'y')
    {
        return true;
    }
    return false;
}
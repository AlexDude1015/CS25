//
// Created by Alexander Li on 10/26/24.
//
#include "header.h"
#include <memory>
#include <iostream>

//Assigns the first value to the array
void assignment_21::get_first_input(std::unique_ptr<int[]> &ptr_array)
{
    int int_input;
    std::cout << "Please enter an integer:\n";
    std::cin >> int_input;
    ptr_array[0] = int_input;
}
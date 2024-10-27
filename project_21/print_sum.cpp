//
// Created by Alexander Li on 10/26/24.
//
#include "header.h"
#include <memory>
#include <iostream>

//Prints the sum
void assignment_21::print_sum(const int* ptr_array, const int array_size)
{
    int sum = 0;
    for (int i = 0; i < array_size; i++) {
        sum += ptr_array[i];
    }
    std::cout << "The sum is " << sum << std::endl;
}
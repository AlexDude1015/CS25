//
// Created by Alexander Li on 10/16/24.
//
#include "header.h"
#include <memory>
#include <iostream>
#include <ctype.h>

//Assigns the first value to the array
void assignment_21::get_first_input(std::unique_ptr<int[]> &ptr_array)
{
    int int_input;
    std::cout << "Please enter an integer:\n";
    std::cin >> int_input;
    ptr_array[0] = int_input;
}

//Assigns subsequent values to the array
void assignment_21::get_more_inputs(std::unique_ptr<int[]> &ptr_array, int& array_size)
{
    int int_input;
    char char_input;

    while(true)
    {
        std::cout << "Would you like to enter another integer (y/n)?:\n";
        std::cin >> char_input;
        if(char_input != 'y')
            break;
        std::cout << "Please enter an integer:\n";
        std::cin >> int_input;
        std::unique_ptr<int[]> ptr_temp_array(new int[++array_size]);

        for (int i = 0; i < array_size - 1; i++)
        {
            ptr_temp_array[i] = ptr_array[i];
        }
        ptr_temp_array[array_size - 1] = int_input;
        ptr_array = std::move(ptr_temp_array);
    }
}

//Prints the sum
void assignment_21::print_sum(const int* ptr_array, const int array_size)
{
    int sum = 0;
    for (int i = 0; i < array_size; i++) {
        sum += ptr_array[i];
    }
    std::cout << "The sum is " << sum << std::endl;
}
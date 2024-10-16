//
//  assignment_20.cpp
//  Assignment 20
//
//  Created by Alexander Li on 10/14/24.
//
#include <iostream>
#include "ASSIGNMENT_20.hpp"

//Gets the first input for the dynamic array
void get_first_input(int* ptr_array)
{
    int first_input;
    std::cout << "Please enter an integer: \n";
    std::cin >> first_input;
    *ptr_array = first_input;
    std::cout << *ptr_array;
}

//Gets the second input for the dynamic array
void get_additional_inputs(int* &ptr_array, int &array_size)
{
    while(true)
    {
        char yes;
        std::cout << "Would you like to enter another one (y/n)?\n";
        std::cin >> yes;
        
        if (yes != 'y')
        {
            break;
        }
        
        int new_input;
        std::cout << "Please enter another integer: \n";
        std::cin >> new_input;
        
        int* temp_array = new int[++array_size];
        
        temp_array[array_size - 1] = new_input;
        
        for (int i = 0; i < (array_size - 1); i++)
        {
            temp_array[i] = ptr_array[i];
        }
        
        delete[] ptr_array;
        ptr_array = temp_array;
        temp_array = nullptr;
        
        for (int i = 0; i < array_size; i++)
        {
            std::cout << *(ptr_array + i);
        }
    }
}

//Gets the third function for the dynamic array
void print_sum(int* ptr_array, int array_size)
{
    int array_sum = 0;
    for (int i = 0; i < array_size; i++)
    {
        array_sum += *(ptr_array + i);
    }
    std::cout << "The sum of the inputs are: " << array_sum << "\n";
}


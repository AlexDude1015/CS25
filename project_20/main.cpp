#include <iostream>
#include <ctype.h>
#include "ASSIGNMENT_20.hpp"

int main()
{
    int array_size = 1;
    int* ptr_array = new int[array_size];
    get_first_input(ptr_array);
    get_additional_inputs(ptr_array, array_size);
    print_sum(ptr_array, array_size);
    delete[] ptr_array;
    ptr_array = nullptr;
    return 0;
}

#include <iostream>
#include <memory>
#include <ctype.h>
#include "header.h"

int main()
{
    int array_size = 1;
    std::unique_ptr<int[]> ptr_array(new int[array_size]);
    assignment_21::get_first_input(ptr_array);
    assignment_21::get_more_inputs(ptr_array, array_size);
    assignment_21::print_sum(ptr_array.get(), array_size);
    return 0;
}
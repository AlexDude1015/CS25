//
// Created by Alexander Li on 10/16/24.
//

#ifndef HEADER_H
#define HEADER_H

#include <memory>

namespace assignment_21
{
    void get_first_input(std::unique_ptr<int[]> &ptr_array);
    void get_more_inputs(std::unique_ptr<int[]> &ptr_array, int& array_size);
    void print_sum(const int* ptr_array, const int array_size);
}
#endif //HEADER_H

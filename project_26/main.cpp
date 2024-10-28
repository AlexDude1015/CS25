#include "point.h"

int main()
{
    //Ask users to creates two x-y coordinates
    int point_number = 1;
    point::Point one = point::get_inputs(point_number++);
    point::Point two = point::get_inputs(point_number++);

    //Compares two coordinates and prints their equal status
    if (one == two)
        std::cout << "One:" << one << " and Two:" << two << " are equal" << std::endl;
    else
        std::cout << "One:" << one << " and Two:" << two << " are not equal" << std::endl;

    return 0;
}

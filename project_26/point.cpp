//
// Created by Alexander Li on 10/28/24.
//
#include "point.h"

namespace point
{
    //Asks users to enter a pair of x-y coordinate
    Point get_inputs(int point_number)
    {
        Point temporary;
        std::cout << "For the x-y coordinate number " << point_number << ", please enter x:";
        std::cin >> temporary.x;
        std::cout << "and y:";
        std::cin >> temporary.y;
        std::cout << "\n";
        return temporary;
    }

    //Compares two Point object's x-y coordinates
    bool operator==(const Point &first_point, const Point &second_point)
    {
        return first_point.x == second_point.x && first_point.y == second_point.y;
    }

    //Prints a Point object's x-y coordinates
    std::ostream& operator<<(std::ostream& stream, const Point &point)
    {
        stream << "(" << point.x << ", " << point.y << ")";
        return stream;
    }
}




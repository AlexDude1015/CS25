//
// Created by Alexander Li on 10/28/24.
//

#ifndef POINT_H
#define POINT_H
#include <iostream>

//Define the point
 namespace point
 {
     struct Point
     {
         int x;
         int y;
     };

     Point get_inputs(int point_number);
     bool operator==(const Point &first_point, const Point &second_point);
     std::ostream& operator<<(std::ostream& stream, const Point &point);

 }

#endif //POINT_H

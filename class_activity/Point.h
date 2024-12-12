//
// Created by Alexander Li on 11/25/24.
//

#ifndef POINT_H
#define POINT_H



class Point
{
    int x;
    int y;

    public:

        Point operator+(Point other)
        {
            x += other.x;
            y += other.y;
            return *this;
        }

};



#endif //POINT_H

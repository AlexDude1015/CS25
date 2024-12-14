//
// Created by Alexander Li on 12/13/24.
//

#ifndef DATE_H
#define DATE_H
#include <vector>

class Date
{
    protected:
    int year;
    int month;
    int day;

    public:
    virtual ~Date() = default;

    Date(const int year, const int month, const int day) : year(year), month(month), day(day) {}

    int get_year() const
    {
        return year;
    }

    int get_month() const
    {
        return month;
    }

    int get_day() const
    {
        return day;
    }

    //Adds years
    void add_year(int year)
    {
        this->year += year;
    }

    //Adds months
    void add_month(int month)
    {
        this->month += month;

        //Changes the years if months are out of bounds (1 < months < 12)
        while(month > 12)
        {
            add_year(1);
            month -= 12;
        }
        while(month < 1)
        {
            add_year(-1);
            month += 12;
        }
    }

    //Add days
    void add_day(int day)
    {
        std::vector<int>days_in_month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        this->day += day;
        while(this->day > (days_in_month[month-1]))
        {
            add_month(1);
            day -= days_in_month[month-1];
        }
        while(this->day < 0)
        {
            add_month(-1);
            day += days_in_month[month-1];
        }
    }

    //Outputs date in a common metric: days
    int total_days() const
    {
        int total_days = 365 * year;
        total_days += day;

        //Calculates month
        std::vector<int> days_in_month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (int i = 0; i < month - 1; ++i)
        {
            total_days += days_in_month[i];
        }
        return total_days;
    }
};



#endif //DATE_H

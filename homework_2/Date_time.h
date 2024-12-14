//
// Created by Alexander Li on 12/13/24.
//

#ifndef DATE_TIME_H
#define DATE_TIME_H
#include "Date.h"
#include "Time.h"

class Date_time final : public Date, public Time
{
    public:
    Date_time(const int day, const int month, const int year, const int hour, const int minute, const int second)
        : Date(day, month, year), Time(hour, minute, second) {}

    //overrides Time's function so hours can increment days.
    void add_hour(const int hour) override
    {
         this->hour += hour;
        while (this->hour >= 24)
        {
            this->hour -= 24;
            add_day(1);
        }
        while(this->hour < 0)
        {
            this->hour += 24;
            add_day(-1);
        }
    }

    //Prints the day, hour, minute, and second difference between two Date-time objects
    void computes_difference(const Date_time& other) const
    {
        //Calculates the difference in terms of a common metric: days and seconds.
        int day_difference = this->total_days() - other.total_days();
        int second_difference = this->total_seconds() - other.total_seconds();

        //Finds hour and minutes from seconds
        const int hours = second_difference / 3600;
        const int minutes = (second_difference % 3600) / 60;
        const int seconds = (second_difference % 3600) % 60;

        std::cout << "Days: " << day_difference << std::endl;
        std::cout << "Hours: " << hours << std::endl;
        std::cout << "Minutes: " << minutes << std::endl;
        std::cout << "Seconds: " << seconds << std::endl;
    }

    //Outputs date depending on string input
    std::string format(std::string format_string)
    {

        size_t pos = format_string.find("YYYY-MM-DD");
        if (pos != std::string::npos)
        {
            std::ostringstream year_month_day;
            year_month_day << std::setw(4) << std::setfill('0') << year << "-";
            year_month_day << std::setw(2) << std::setfill('0') << month << "-";
            year_month_day << std::setw(2) << std::setfill('0') << day;
            format_string.replace(pos, 10, year_month_day.str());
        }

        pos = format_string.find("MM/DD/YYYY");
        if (pos != std::string::npos)
        {
            std::ostringstream month_day_year;
            month_day_year << std::setw(2) << std::setfill('0') << month << "/";
            month_day_year << std::setw(2) << std::setfill('0') << day << "/";
            month_day_year << std::setw(4) << std::setfill('0') << year;
            format_string.replace(pos, 10, month_day_year.str());
        }

        pos = format_string.find("HH:MM:SS");
        if (pos != std::string::npos)
        {
            std::ostringstream hour_minute_second;
            hour_minute_second << std::setw(2) << std::setfill('0') << hour << ":";
            hour_minute_second << std::setw(2) << std::setfill('0') << minute << ":";
            hour_minute_second << std::setw(2) << std::setfill('0') << second;
            format_string.replace(pos, 8, hour_minute_second.str());
        }

        pos= format_string.find("HH:MM");
        if (pos != std::string::npos)
        {
            std::ostringstream hour_minute;
            hour_minute << std::setw(2) << std::setfill('0') << hour << ":";
            hour_minute << std::setw(2) << std::setfill('0') << minute;
            format_string.replace(pos, 5, hour_minute.str());
        }
        return format_string;
    }
};

#endif //DATE_TIME_H

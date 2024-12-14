//
// Created by Alexander Li on 12/13/24.
//

#ifndef TIME_H
#define TIME_H

class Time {

    protected:
        int hour;
        int minute;
        int second;

    public:
        Time(const int hour, const int minute, const int second) : hour(hour), minute(minute), second(second) {}

        int get_hour() const
        {
            return hour;
        }

        int get_minute() const
        {
            return minute;
        }

        int get_second() const
        {
            return second;
        }

        //Get hours
        virtual void add_hour(int hour)
        {
            this->hour += hour;
        }

        //Get minutes
        void add_minute(int minute)
        {
            this->minute += minute;
            while(this->minute > 59)
            {
                this->minute -= 60;
                add_hour(1);
            }
            while(this->minute < 0)
            {
                this->minute += 60;
                add_hour(-1);
            }
        }

        //get seconds
        void add_second(int second)
        {
            this->second += second;
            while(this->second > 59)
            {
                this->second -= 60;
                add_minute(1);
            }
            while(this->second < 0)
            {
                this->second += 60;
                add_minute(-1);
            }
        }

        //Get date in a common metric: seconds
        int total_seconds() const
        {
            return hour * 3600 + minute * 60 + second;
        }
};



#endif //TIME_H

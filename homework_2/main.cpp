#include <iostream>
#include "Date.h"
#include "Time.h"
#include <sstream>
#include <iomanip>
#include "Date_time.h"

int main()
{
    Date_time current_time(1,1,0,0,0,0);
    std::cout << current_time.format("YYYY-MM-DD") << std::endl;
    std::cout << current_time.format("HH:MM") << std::endl;
    std::cout << current_time.format("MM/DD/YYYY") << std::endl;
    std::cout << current_time.format("HH:MM:SS");
    return 0;
}
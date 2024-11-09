#include "conversion.h"

int main()
{
    double initial_value = conversion::get_input();
    std::string final_value = conversion::convert_string(initial_value);
    std::cout << final_value << " is a string.\n";
    return 0;
}

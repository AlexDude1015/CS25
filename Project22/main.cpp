
#include <iostream>
#include <string>
#include "name.h"
using namespace std;

int main()
{
    const string name = name::get_whole_name();
    name::print_parsed_name(name);
    return 0;
}



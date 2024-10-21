#include <iostream>
#include <string>
#include "name.h"
using namespace std;


int main()
{

    string name = name::get_whole_name();
    string first_name = name::get_first_name(name);
    string last_name = name::get_last_name(name);
    cout << "First name: " << first_name << " \nLast name: " << last_name << endl;
    return 0;
}



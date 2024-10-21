#include <iostream>
#include <string>
#include "name.h"
using namespace std;


int main()
{
    string name = name::get_whole_name();
    if (name::is_whole_name(name))
    {
        string first_name = name::get_first_name(name);
        string last_name = name::get_last_name(name);
        cout << "First name: " << first_name << " \nLast name: " << last_name << endl;
    }
    else
    {
        cout << "Invalid name" << endl;
    }
    return 0;
}



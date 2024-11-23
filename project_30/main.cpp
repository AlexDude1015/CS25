#include <iostream>
#include "Text_box.h"

int main()
{
    Text_box box("Constructor success!");
    std::cout << box.get_text() << std::endl;
    return 0;
}

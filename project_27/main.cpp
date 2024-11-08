#include "library.h"
using namespace library;

int main()
{
    std::vector<Book> library;
    library.push_back(library::add_book());
    std::cout << library.at(0) << " was released in " << library.at(0).release_date << "\n";
    library::find_book(library);
    return 0;
}

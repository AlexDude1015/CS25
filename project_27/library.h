//
// Created by Alexander Li on 11/7/24.
//

#ifndef MANAGE_BOOKSTORE_H
#define MANAGE_BOOKSTORE_H
#include <iostream>
#include <vector>
#include "book_struct.h"
#include "date_struct.h"

namespace library
{
    std::ostream& operator << (std::ostream& stream, Date& date);
    std::ostream& operator << (std::ostream& stream, Book& book);
    bool operator == (const std::string& target_book, const std::vector<Book>& library);
    Date get_date();
    Book add_book();
    void find_book(const std::vector<Book>& library);
}
#endif //MANAGE_BOOKSTORE_H

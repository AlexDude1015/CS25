//
// Created by Alexander Li on 11/7/24.
//
#include "library.h"


namespace library

{
    //Prints a Date object's entire date
    std::ostream& operator << (std::ostream& stream, Date& date)
    {
        stream << date.day << "/" << date.month << "/" << date.year;
        return stream;
    }

    //Prints a Book object's title and author
    std::ostream& operator << (std::ostream& stream, Book& book)
    {
        stream << book.title << " by " << book.author;
        return stream;
    }

    //Returns true if a book title matches one in the library
    bool operator == (const std::string& target_book, const std::vector<Book>& library)
    {
        for (auto book : library)
        {
            if (book.title == target_book)
            {
                return true;
            }
        }
        return false;
    }

    //Asks the user to input the book's release date for the add_book() function.
    Date get_date()
    {
        Date temp_date;
        do
        {
            std::cout << "Enter book release date: (mm/dd/yyyy)\n";
            std::getline(std::cin, temp_date.day, '/');
            std::getline(std::cin, temp_date.month, '/');
            std::getline(std::cin, temp_date.year);
        } while (temp_date.day.empty() || temp_date.month.empty() || temp_date.year.empty());

        return temp_date;
    }

    //Users input a book's title, author, and release date. Returns an Book object with the inputs.
    Book add_book()
    {
        Book temp_book;

        do
        {
            std::cout << "Enter book title: \n";
            std::getline(std::cin, temp_book.title);
        } while(temp_book.title.empty());

        do
        {
            std::cout << "Enter book author: \n";
            std::getline(std::cin, temp_book.author);
        } while(temp_book.author.empty());

        temp_book.release_date = get_date();

        return temp_book;
    }

    //Users search a book in a library by its title
    void find_book(const std::vector<Book>& library)
    {
        char yes;
        do
        {
            bool found_book = false;
            std::string target_book;
            std::cout << "Search a book title: \n";
            std::getline(std::cin, target_book);

            for (auto book : library)
            {
                if (target_book == library)
                {
                    std::cout << "We have " << book << "\n";
                    found_book = true;
                }
            }

           if (!found_book)
           {
               std::cout << "We do not have the book\n";
           }

            std::cout << "Do you want to search another book? (y/n) \n";
            std::cin >> yes;
            std::cin.ignore();
        } while(yes == 'y' || yes == 'Y');
    }
}


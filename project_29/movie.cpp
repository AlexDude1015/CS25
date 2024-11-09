//
// Created by Alexander Li on 11/8/24.
//
#include "movie.h"

#include <__chrono/year.h>

namespace movies
{
    //Pareses a string and stores the object's title and release year.
    Movie::Movie(std::string user_input)
    {
        std::stringstream stream(user_input);
        std::getline(stream, title, ',');
        stream >> release_year;
    }


    /*
    //Stores the object's title and release year
    void Movie::add_movie(const std::string &user_input)
    {
        std::stringstream stream(user_input);
        std::getline(stream, title, ',');
        stream >> release_year;
    }
    */

    //Returns the movie title
    std::string Movie::get_title() const
    {
        return title;
    }

    //Returns the release year
    int Movie::get_release_year() const
    {
        return release_year;
    }

    //Prints an Movie object's title and release year
    std::ostream& operator<<(std::ostream& stream, const Movie& movie)
    {
        stream << "Title: " << movie.get_title() << " Year: " << movie.get_release_year() << std::endl;
        return stream;
    }
}

//
// Created by Alexander Li on 11/8/24.
//

#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include <sstream>

namespace movies
{
    struct Movie
    {
        private:
            std::string title;
            int release_year;

        public:
            Movie(const std::string& user_input);
            //void add_movie(const std::string& user_input);
            std::string get_title() const;
            int get_release_year() const;
    };
    std::ostream& operator<<(std::ostream& stream, const Movie& movie);
}

#endif //MOVIE_H

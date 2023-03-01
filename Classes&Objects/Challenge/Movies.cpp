#include <iostream>
#include "Movies.h"

// Default Constructor
Movies::Movies()
{
}

// Default Destructor
Movies::~Movies()
{
}

bool Movies::add_movie(std::string name, std::string rating, long int watchNumber)
{
    for (Movie movie : movies)
    {
        if (movie.get_name() == name)
            return false;
    }

    Movie temp{name, rating, watchNumber};
    movies.push_back(temp);
}
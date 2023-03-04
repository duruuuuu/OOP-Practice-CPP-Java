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
    for (const Movie &movie : movies)
    {
        if (movie.get_name() == name)
            return false;
    }

    Movie temp{name, rating, watchNumber};
    movies.push_back(temp);
}

bool Movies::increment_watched(std::string name)
{
    for (Movie &movie : movies)
    {
        if (movie.get_name() == name)
        {
            movie.increment_watch();
            return true;
        }
    }

    return false;
}

void Movies::display() const
{
    if (movies.size() == 0)
        std::cout << "No movies to display." << std::endl;

    else
    {
        for (auto movie : movies)
            movie.display();
        std::cout << "\n=============================" << std::endl;
    }
}